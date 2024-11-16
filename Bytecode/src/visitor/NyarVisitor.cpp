#include "NyarVisitor.h"

#include "antlr4-runtime.h"
#include "utils/strfunctions.h"
#include "NyarSTD/std_functions.h"
#include <optional>
#include "MLVM/MLVM.h"
#include <iostream>
#include <typeinfo>
#include <tuple>

using namespace std;

tuple<optional<double>, optional<string>, shared_ptr<MLVM::Variable>, shared_ptr<MLVM::UnEvaluable>, shared_ptr<MLVM::Array<antlrcpp::Any>>, shared_ptr<MLVM::Null>>
extractValue(const antlrcpp::Any &anyValue)
{
    optional<double> numVal;
    optional<string> strVal;
    shared_ptr<MLVM::Variable> var;
    shared_ptr<MLVM::UnEvaluable> unVal;
    shared_ptr<MLVM::Array<antlrcpp::Any>> arrayVal;
    shared_ptr<MLVM::Null> nullVal;

    if (anyValue.type() == typeid(int))
    {
        numVal = static_cast<double>(any_cast<int>(anyValue));
    }
    else if (anyValue.type() == typeid(double))
    {
        numVal = any_cast<double>(anyValue);
    }
    else if (anyValue.type() == typeid(string))
    {
        strVal = any_cast<string>(anyValue);
    }
    else if (anyValue.type() == typeid(shared_ptr<MLVM::Variable>))
    {
        var = any_cast<shared_ptr<MLVM::Variable>>(anyValue);
    }
    else if (anyValue.type() == typeid(shared_ptr<MLVM::UnEvaluable>))
    {
        unVal = any_cast<shared_ptr<MLVM::UnEvaluable>>(anyValue);
    }
    else if (anyValue.type() == typeid(shared_ptr<MLVM::Array<antlrcpp::Any>>))
    {
        arrayVal = any_cast<shared_ptr<MLVM::Array<antlrcpp::Any>>>(anyValue);
    }
    else if (anyValue.type() == typeid(shared_ptr<MLVM::Null>)) {
        nullVal = any_cast<shared_ptr<MLVM::Null>>(anyValue);
    }
    else {
        cerr << "Unsupported type " << anyValue.type().name() << endl;
        throw runtime_error("Unsupported type for operand in arithmetic expression");
    }

    return make_tuple(numVal, strVal, var, unVal, arrayVal, nullVal);
}

tuple<optional<double>, shared_ptr<MLVM::Variable>, shared_ptr<MLVM::UnEvaluable>>
extractNumericValue(const antlrcpp::Any &anyValue)
{
    optional<double> numVal;
    shared_ptr<MLVM::Variable> var;
    shared_ptr<MLVM::UnEvaluable> unVal;

    if (anyValue.type() == typeid(int))
    {
        numVal = static_cast<double>(any_cast<int>(anyValue));
    }
    else if (anyValue.type() == typeid(double))
    {
        numVal = any_cast<double>(anyValue);
    }
    else if (anyValue.type() == typeid(shared_ptr<MLVM::Variable>))
    {
        var = any_cast<shared_ptr<MLVM::Variable>>(anyValue);
    }
    else if (anyValue.type() == typeid(shared_ptr<MLVM::UnEvaluable>))
    {
        cout << "no evaluable" << endl;
        unVal = any_cast<shared_ptr<MLVM::UnEvaluable>>(anyValue);
    }
    else if (anyValue.type() == typeid(void))
    {
        cout << "VOID!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        throw runtime_error("Unsupported type VOID");
    }
    else
    {
        cerr << "Unsupported type " << anyValue.type().name() << endl;
        throw runtime_error("Unsupported type 2 for numeric operand in arithmetic expression");
    }

    return make_tuple(numVal, var, unVal);
}

antlrcpp::Any NyarVisitor::visitProgram(NyarParser::ProgramContext *ctx) { return visitChildren(ctx); }

antlrcpp::Any NyarVisitor::visitStat(NyarParser::StatContext *ctx) { return visitChildren(ctx); }

antlrcpp::Any NyarVisitor::visitReturnExp(NyarParser::ReturnExpContext *ctx)
{
    auto value = visit(ctx->expr());
    MLVMBuilder->createReturn(value);
    return value;
}

antlrcpp::Any NyarVisitor::visitMemberAccess(NyarParser::MemberAccessContext *ctx)
{
    // Obtiene el nombre del miembro (atributo o método)
    string memberName = ctx->ID()->getText();
    cout << "visit member: " << memberName << "." << endl;

    // Obtiene el objeto base al que se está accediendo
    antlrcpp::Any baseAny = visit(ctx->expr());

    // Extrae el valor del objeto base
    auto [baseNum, baseStr, baseVar, baseUnVal, baseArray, baseNull] = extractValue(baseAny);

    string baseRepresentation;

    if (baseVar)
    {
        baseRepresentation = baseVar->getVar();
    }
    else if (baseUnVal)
    {
        baseRepresentation = baseUnVal->toBytecode();
    }
    else if (baseNum)
    {
        baseRepresentation = to_string(*baseNum);
    }
    else if (baseStr)
    {
        baseRepresentation = *baseStr;
    }
    else if (baseArray)
    {
        baseRepresentation = baseArray->toBytecode();
    }
    else if (baseNull)
    {
        baseRepresentation = "null"; // Representación de null
    }
    else
    {
        cerr << "Unsupported base type in member access." << endl;
        throw runtime_error("Unsupported base type in member access.");
    }

    // Determina si el miembro es una llamada a método o un atributo
    bool isMethodCall = ctx->funcCall() != nullptr;

    if (isMethodCall)
    {
        // Es una llamada a método: DOT funcCall
        // Obtiene la llamada al método
        auto methodCallAny = visit(ctx->funcCall());

        // Aquí puedes decidir cómo manejar el método llamado.
        // Supongamos que deseas pasar el objeto base como el primer argumento (similar a 'this')
        // Necesitas obtener los argumentos de la llamada al método

        // Primero, extrae el nombre del método
        string methodName = ctx->funcCall()->ID()->getText();

        // Extrae los argumentos
        vector<string> args;
        if (ctx->funcCall()->funcArgs())
        {
            for (auto expr : ctx->funcCall()->funcArgs()->expr())
            {
                auto argAny = visit(expr);
                optional<double> numVal;
                optional<string> strVal;
                shared_ptr<MLVM::Variable> varVal;
                shared_ptr<MLVM::UnEvaluable> unVal;
                shared_ptr<MLVM::Array<antlrcpp::Any>> arrayVal;
                shared_ptr<MLVM::Null> nullVal;

                tie(numVal, strVal, varVal, unVal, arrayVal, nullVal) = extractValue(argAny);

                if (numVal)
                {
                    args.push_back(to_string(*numVal));
                }
                else if (strVal)
                {
                    args.push_back("\"" + *strVal + "\"");
                }
                else if (varVal)
                {
                    args.push_back(varVal->getVar());
                }
                else if (unVal)
                {
                    args.push_back(unVal->toBytecode());
                }
                else if (arrayVal)
                {
                    args.push_back(arrayVal->toBytecode());
                }
                else if (nullVal)
                {
                    args.push_back("null");
                }
                else
                {
                    throw runtime_error("Argumento no soportado en llamada a método.");
                }
            }
        }

        // Agrega el objeto base como el primer argumento (simulando 'this')
        args.insert(args.begin(), baseRepresentation);

        // Crea la llamada al método en el bytecode
        MLVMBuilder->createCallFunc(methodName, args);

        // Dependiendo de tu IR, podrías necesitar retornar algo
        // Aquí retornamos nullptr, pero ajusta según sea necesario
        return nullptr;
    }
    else
    {
        // Es un acceso a atributo: DOT ID
        // Genera el acceso al atributo en el bytecode
        // Por ejemplo, podrías tener una instrucción para acceder al atributo

        // Supongamos que tienes una convención de nombre como "base.attribute"
        string attributeAccess = baseRepresentation + "." + memberName;

        // Puedes decidir cómo representar esto en tu bytecode
        // Por ejemplo, podrías crear una variable temporal que almacene el valor del atributo
        auto tempVar = MLVMBuilder->createTempVal(attributeAccess);
        // auto tempVar = make_shared<MLVM::Variable>("temp", attributeAccess);
        // MLVMBuilder->createVariable(tempVar);

        // Retorna la representación de la variable temporal
        return tempVar;
    }
}

antlrcpp::Any NyarVisitor::visitNumber(NyarParser::NumberContext *ctx)
{
    auto value = ctx->NUM()->getText();
    cout << "number: " << value << endl;
    if (value.find('.') != string::npos)
    {
        return stod(value);
    }
    return stoi(value);
}

antlrcpp::Any NyarVisitor::visitLogicalAndExp(NyarParser::LogicalAndExpContext *ctx) {
    // Extraemos los operandos izquierdo y derecho de la expresión lógica AND
    auto leftValue = visit(ctx->expr(0));
    auto rightValue = visit(ctx->expr(1));
    
    // Extraemos los valores numéricos o evaluables de los operandos
    auto [leftNum, leftStrVal, leftVar, leftUnEval, leftArray, leftNull] = extractValue(leftValue);
    auto [rightNum, rightStrVal,  rightVar, rightUnEval, rightArray, rightNull] = extractValue(rightValue);

    if (leftNull || rightNull) return make_shared<MLVM::UnEvaluable>("0");

    // Verifica si ambos operandos son numéricos (booleanos representados como 0 o 1)
    if (leftNum && rightNum) {
        bool result = (*leftNum != 0) && (*rightNum != 0);
        return result ? 1.0 : 0.0;
    }

    if (leftNum) leftStrVal = to_string(*leftNum);
    if (rightNum) rightStrVal = to_string(*rightNum);

    // Si no son valores numéricos, es probable que los operandos sean variables o no evaluables
    // Aquí puedes añadir la lógica para manejar esas situaciones según el comportamiento de tu sistema.
    if (leftVar || rightVar) {
        if(leftVar) leftStrVal = leftVar->getValue();
        if(rightVar) rightStrVal = rightVar->getValue();
        
        return make_shared<MLVM::UnEvaluable>(*leftStrVal + " && " + *rightStrVal);
    } else if (leftUnEval || rightUnEval) {
        // Si uno de los operandos es no evaluable, devuelve un valor no evaluable
        return make_shared<MLVM::UnEvaluable>(leftUnEval->toBytecode() + " && " + rightUnEval->toBytecode());
    }
    // En caso de otros tipos de operandos, podrías lanzar un error o manejarlo de otra forma
    throw runtime_error("Unsupported types for logical AND operation");
};

antlrcpp::Any NyarVisitor::visitLogicalOrExp(NyarParser::LogicalOrExpContext *ctx) {
    auto leftValue = visit(ctx->expr(0));
    auto rightValue = visit(ctx->expr(1));
    
    // Extraemos los valores numéricos o evaluables de los operandos
    auto [leftNum, leftStrVal, leftVar, leftUnEval, leftArray, leftNull] = extractValue(leftValue);
    auto [rightNum, rightStrVal,  rightVar, rightUnEval, rightArray, rightNull] = extractValue(rightValue);

    // Verifica si ambos operandos son numéricos (booleanos representados como 0 o 1)
    if (leftNum && rightNum) {
        bool result = (*leftNum != 0) || (*rightNum != 0);
        return result ? 1.0 : 0.0;
    }

    if (leftNum) leftStrVal = to_string(*leftNum);
    if (rightNum) rightStrVal = to_string(*rightNum);

    if (leftVar || rightVar) {
        if(leftVar) leftStrVal = leftVar->getValue();
        if(rightVar) rightStrVal = rightVar->getValue();
        
        return make_shared<MLVM::UnEvaluable>(*leftStrVal + " || " + *rightStrVal);
    } else if (leftUnEval || rightUnEval) {
        return make_shared<MLVM::UnEvaluable>(leftUnEval->toBytecode() + " || " + rightUnEval->toBytecode());
    }
    throw runtime_error("Unsupported types for logical OR operation");
};


antlrcpp::Any NyarVisitor::visitVariable(NyarParser::VariableContext *ctx)
{
    // Obtén el identificador de la variable
    string varName = ctx->ID()->getText();

    // Visita la expresión y obtiene su valor (esto puede ser un valor o un puntero a un valor en la memoria)
    auto exprValue = visit(ctx->expr());
    string computedValue;

    shared_ptr<MLVM::Array<antlrcpp::Any>> arrayVal;
    optional<double> numVal;
    optional<string> strVal;
    shared_ptr<MLVM::Variable> varVal;
    shared_ptr<MLVM::UnEvaluable> unVal;
    shared_ptr<MLVM::Null> nullVal;

    tie(numVal, strVal, varVal, unVal, arrayVal, nullVal) = extractValue(exprValue);

    if (arrayVal)
    {
        computedValue = arrayVal->toBytecode();
    }
    else if (varVal)
    {
        computedValue = varVal->getValue();
    }
    else if (unVal)
    {
        computedValue = unVal->toBytecode();
    }
    else if (numVal)
    {
        computedValue = to_string(*numVal);
    }
    else if (strVal)
    {
        computedValue = *strVal;
        computedValue = "\"" + computedValue + "\"";
    }
    else if (nullVal)
    {
        computedValue = nullVal->toBytecode();
    }
    else
    {
        throw runtime_error("Unexpected type in exprValue");
    }

    // Crea la entrada en la memoria para la variable
    auto var = make_shared<MLVM::Variable>(varName, computedValue);
    if (ctx->type_hint)
    {
        var->setTypeHint(ctx->type_hint->ID()->getText());
    }

    // Almacena el valor de la expresión en la memoria
    MLVMBuilder->createVariable(var);
    memory[varName] = var;

    return var;
}

antlrcpp::Any NyarVisitor::visitBoolean(NyarParser::BooleanContext *ctx)
{
    string varName = ctx->getText();
    return int(varName == "verdadero");
}

antlrcpp::Any NyarVisitor::visitNnull(NyarParser::NnullContext *ctx)
{
    return make_shared<MLVM::Null>();
}

antlrcpp::Any NyarVisitor::visitString(NyarParser::StringContext *ctx)
{
    string str = ctx->STRING()->getText();
    str = str.substr(1, str.size() - 2); // Quitar comillas
    return str;
}

antlrcpp::Any NyarVisitor::visitComparisonExp(NyarParser::ComparisonExpContext *ctx)
{
    string op = ctx->op->getText();

    auto leftAny = visit(ctx->expr(0));
    auto rightAny = visit(ctx->expr(1));

    auto [leftNum, leftVar, leftUnVal] = extractNumericValue(leftAny);
    if (leftVar && leftVar->isEvaluable())
    {
        try
        {
            leftNum = stod(leftVar->getValue());
        }
        catch (...)
        {
            throw runtime_error("Operación de igualdad no soportada para los tipos de operandos");
        }
        leftVar = nullptr;
    }

    auto [rightNum, rightVar, rightUnVal] = extractNumericValue(rightAny);
    if (rightVar && rightVar->isEvaluable())
    {
        try
        {
            rightNum = stod(rightVar->getValue());
        }
        catch (...)
        {
            throw runtime_error("Operación de igualdad no soportada para los tipos de operandos");
        }
        rightVar = nullptr;
    }

    if (leftUnVal != nullptr)
    {
        leftUnVal->add(op + to_string(*rightNum));
        return leftUnVal;
    }
    else if (rightUnVal != nullptr)
    {
        rightUnVal->add(to_string(*leftNum) + op);
        return rightUnVal;
    }

    optional<double> resultNum;
    if (leftNum && rightNum)
    {
        if (op == ">")
        {
            resultNum = *leftNum > *rightNum;
        }
        else if (op == "<")
        {
            resultNum = *leftNum < *rightNum;
        }
        else if (op == "==")
        {
            resultNum = *leftNum == *rightNum;
        }
        else if (op == "!=")
        {
            resultNum = *leftNum != *rightNum;
        }
        else if (op == ">=")
        {
            resultNum = *leftNum >= *rightNum;
        }
        else if (op == "<=")
        {
            resultNum = *leftNum <= *rightNum;
        }
    }
    else
    {
        string operand1, operand2;
        if (leftVar != nullptr)
        {
            operand1 = leftVar->getVar();
            if (rightNum)
            {
                operand2 = to_string(*rightNum);
            }
            else if (rightVar != nullptr)
            {
                operand2 = rightVar->getVar();
            }
        }
        else if (rightVar != nullptr)
        {
            if (leftNum)
            {
                operand1 = to_string(*leftNum);
            }
            else if (leftVar != nullptr)
            {
                operand1 = leftVar->getVar();
            }
            operand2 = rightVar->getVar();
        }
        string expr = operand1 + op + operand2;
        auto exprVar = make_shared<MLVM::UnEvaluable>(expr);
        return exprVar;
    }

    if (resultNum)
        return *resultNum;
    return nullptr;
}

antlrcpp::Any NyarVisitor::visitAritExp(NyarParser::AritExpContext *ctx)
{
    // Visita las expresiones izquierda y derecha
    auto leftAny = visit(ctx->expr(0));
    auto rightAny = visit(ctx->expr(1));
    cout << "type: " << rightAny.type().name() << endl;

    // Manejar tipo de left
    optional<double> leftNumVal;
    optional<string> leftStrVal;
    shared_ptr<MLVM::Variable> leftVar;
    shared_ptr<MLVM::UnEvaluable> leftUnVal;
    shared_ptr<MLVM::Array<antlrcpp::Any>> leftArrayVal;
    shared_ptr<MLVM::Null> leftNullVal;

    tie(leftNumVal, leftStrVal, leftVar, leftUnVal, leftArrayVal, leftNullVal) = extractValue(leftAny);
    if (leftNullVal)
    {
        throw runtime_error("Operación aritmética no soportada para valores nulos");
    };

    if (leftVar && leftVar)
    {
        try
        {
            leftNumVal = stod(leftVar->getValue());
        }
        catch (...)
        {
            leftStrVal = leftVar->getValue();
        }
        leftVar = nullptr;
    }

    // Manejar tipo de right
    optional<double> rightNumVal;
    optional<string> rightStrVal;
    shared_ptr<MLVM::Variable> rightVar;
    shared_ptr<MLVM::UnEvaluable> rightUnVal;
    shared_ptr<MLVM::Array<antlrcpp::Any>> rightArrayVal;
    shared_ptr<MLVM::Null> rightNullVal;

    tie(rightNumVal, rightStrVal, rightVar, rightUnVal, rightArrayVal, rightNullVal) = extractValue(rightAny);
    if (rightNullVal)
    {
        throw runtime_error("Operación aritmética no soportada para valores nulos");
    };
    if (rightVar && rightVar->isEvaluable())
    {
        try
        {
            rightNumVal = stod(rightVar->getValue());
        }
        catch (...)
        {
            rightStrVal = rightVar->getValue();
        }
        rightVar = nullptr;
    }

    // Obtener el operador
    string op = ctx->op->getText();

    if (leftUnVal != nullptr)
    {
        string result = rightNumVal ? to_string(*rightNumVal) : *rightStrVal;
        leftUnVal->add(op + result);
        return leftUnVal;
    }
    else if (rightUnVal != nullptr)
    {
        string result = leftNumVal ? to_string(*leftNumVal) : *leftStrVal;
        rightUnVal->add(result + op);
        return rightUnVal;
    }

    // Calcular el resultado
    optional<double> resultNum;
    optional<string> resultStr;
    if ((leftNumVal || leftStrVal) && (rightNumVal || rightStrVal))
    {
        if (op == "+")
        {
            if (leftNumVal && rightNumVal)
            {
                resultNum = *leftNumVal + *rightNumVal;
            }
            else if (leftStrVal && rightStrVal)
            {
                resultStr = *leftStrVal + *rightStrVal;
            }
            else
            {
                throw runtime_error("Operación de suma no soportada para los tipos de operandos");
            }
        }
        else if (op == "-")
        {
            if (leftNumVal && rightNumVal)
            {
                resultNum = *leftNumVal - *rightNumVal;
            }
            else
            {
                throw runtime_error("Operación de suma no soportada para los tipos de operandos");
            }
        }
        else if (op == "*")
        {
            if (leftNumVal && rightNumVal)
            {
                resultNum = (*leftNumVal) * (*rightNumVal);
            }
            else if (leftStrVal && rightNumVal)
            {
                resultStr = Strfunctions::repetir(*leftStrVal, *rightNumVal);
            }
            else if (leftNumVal && rightStrVal)
            {
                resultStr = Strfunctions::repetir(*rightStrVal, *leftNumVal);
            }
            else
            {
                throw runtime_error("Operación de suma no soportada para los tipos de operandos");
            }
        }
        else if (op == "/")
        {
            if (leftStrVal || rightStrVal)
            {
                throw runtime_error("Operación de división no soportada para cadenas");
            }
            if (rightNumVal == 0.0)
            {
                throw runtime_error("Division por cero");
            }
            resultNum = *leftNumVal / *rightNumVal;
        }
        else
        {
            throw runtime_error("Operador aritmético no soportado: " + op);
        }
    }
    else
    { // Al menos un operando es una variable no evaluable
        cout << "No evaluable: " << endl;
        string operand1, operand2;

        if (leftVar != nullptr)
        {
            cout << "leftVar: " << leftVar->getVar() << endl;
            operand1 = leftVar->getVar();
            if (rightNumVal)
            {
                operand2 = to_string(*rightNumVal);
            }
            else if (rightStrVal)
            {
                operand2 = "\"" + *rightStrVal + "\"";
            }
            else if (rightVar != nullptr)
            {
                operand2 = rightVar->getVar();
            }
        }
        else if (rightVar != nullptr)
        {
            if (leftNumVal)
            {
                operand1 = to_string(*leftNumVal);
            }
            else if (leftStrVal)
            {
                operand1 = "\"" + *leftStrVal + "\"";
            }
            else if (leftVar != nullptr)
            {
                operand1 = leftVar->getVar();
            }
            operand2 = rightVar->getVar();
        }

        // Crear una nueva Variable representando la expresión
        string expr = operand1 + op + operand2;
        auto exprVar = make_shared<MLVM::UnEvaluable>(expr);

        return exprVar;
    }

    if (resultNum)
    {
        cout << "aritExp result Num: " << *resultNum << endl;
        return *resultNum;
    }

    if (resultStr)
    {
        cout << "aritExp result Str: " << *resultStr << endl;
        return *resultStr;
    }
    throw runtime_error("Expresión aritmética no evaluada correctamente");
}

antlrcpp::Any NyarVisitor::visitParenExp(NyarParser::ParenExpContext *ctx) { return visit(ctx->expr()); }

antlrcpp::Any NyarVisitor::visitFCall(NyarParser::FCallContext *ctx) {
    string funcName = ctx->funcCall()->ID()->getText();
    cout << "visit fcall: " << funcName << endl;
    vector<string> args;
    if (ctx->funcCall()->funcArgs())
    {
        for (auto expr : ctx->funcCall()->funcArgs()->expr())
        {
            auto argAny = visit(expr);
            optional<double> numVal;
            optional<string> strVal;
            shared_ptr<MLVM::Variable> varVal;
            shared_ptr<MLVM::UnEvaluable> unVal;
            shared_ptr<MLVM::Array<antlrcpp::Any>> arrayVal;
            shared_ptr<MLVM::Null> nullVal;

            tie(numVal, strVal, varVal, unVal, arrayVal, nullVal) = extractValue(argAny);

            if (numVal)
            {
                args.push_back(to_string(*numVal));
            }
            else if (strVal)
            {
                args.push_back("\"" + *strVal + "\"");
            }
            else if (varVal)
            {
                args.push_back(varVal->getVar());
            }
            else if (unVal)
            {
                args.push_back(unVal->toBytecode());
            }
            else if (arrayVal)
            {
                args.push_back(arrayVal->toBytecode());
            }
            else if (nullVal)
            {
                args.push_back(nullVal->toBytecode());
            }
            else
            {
                throw runtime_error("Argumento no soportado en llamada a función.");
            }
        }
    }
    
    string callF = MLVMBuilder->createCallFunc(funcName, args);
    return std::make_shared<MLVM::UnEvaluable>(callF);
}

antlrcpp::Any NyarVisitor::visitId(NyarParser::IdContext *ctx)
{
    string varName = ctx->ID()->getText();
    cout << "visit id: " << varName << endl;

    // Busca la variable en la tabla de símbolos
    if (memory.find(varName) != memory.end())
    {
        memory[varName]->addReference();
        return memory[varName];
    }
    else
    {
        return make_shared<MLVM::UnEvaluable>(varName);
    }
}

antlrcpp::Any NyarVisitor::visitArreglo(NyarParser::ArregloContext *ctx)
{
    auto elements = make_shared<MLVM::Array<antlrcpp::Any>>();
    for (auto expr : ctx->array()->expr())
    {
        elements->push_back(visit(expr));
    }
    return elements;
}

antlrcpp::Any NyarVisitor::visitEstructura(NyarParser::EstructuraContext *ctx)
{
    string structName = ctx->struct_()->ID()->getText();
    MLVMBuilder->startStructBlock(structName);
    visit(ctx->struct_()->block());
    MLVMBuilder->endStructBlock();
    return nullptr;
}

antlrcpp::Any NyarVisitor::visitFuncParams(NyarParser::FuncParamsContext *ctx)
{
    vector<string> params;
    for (auto id : ctx->ID())
    {
        params.push_back(id->getText());
    }
    return params;
}

antlrcpp::Any NyarVisitor::visitFuncDef(NyarParser::FuncDefContext *ctx)
{
    string funcName = ctx->ID()->getText();
    vector<shared_ptr<MLVM::UnEvaluable>> params;

    if (ctx->funcParams())
    {
        for (auto param : ctx->funcParams()->ID())
        {
            params.push_back(make_shared<MLVM::UnEvaluable>(param->getText()));
        }
    }

    MLVMBuilder->startFunctionScope(funcName, params);
    visit(ctx->funcBlock());
    MLVMBuilder->endFunctionScope();

    currentScope->defineFunction(funcName, new MLVM::Function(funcName, params));
    return nullptr;
}

// visita los argumentos de una funcion durante la llamada
antlrcpp::Any NyarVisitor::visitFuncArgs(NyarParser::FuncArgsContext *ctx)
{
    vector<antlrcpp::Any> args;
    for (auto expr : ctx->expr())
    {
        auto argValue = visit(expr);
        args.push_back(argValue);
    }
    return args;
}

// Visita la llamada a la funcion y genera el codigo ir
antlrcpp::Any NyarVisitor::visitFuncCall(NyarParser::FuncCallContext *ctx)
{
    // traemos el nombre de la funcion
    string funcName = ctx->ID()->getText();

    // traemos a la funcion de la tabla de simbolos
    auto funcSymbol = currentScope->getFunction(funcName);

    // Ccomprobamos si la funcion existe en este ambito
    if (funcSymbol || NyarSTD::functions_std.end() != find(NyarSTD::functions_std.begin(), NyarSTD::functions_std.end(), funcName))
    {
        MLVM::Function *func = funcSymbol;
        vector<string> args;

        // evaluamos cada argumento de la llamada y los pasa como argumentos al crear la llamada
        if (ctx->funcArgs())
        {
            for (auto expr : ctx->funcArgs()->expr())
            {
                auto argAny = visit(expr);
                optional<double> numVal;
                optional<string> strVal;
                shared_ptr<MLVM::Variable> varVal;
                shared_ptr<MLVM::UnEvaluable> unVal;
                shared_ptr<MLVM::Array<antlrcpp::Any>> arrayVal;
                shared_ptr<MLVM::Null> nullVal;

                tie(numVal, strVal, varVal, unVal, arrayVal, nullVal) = extractValue(argAny);

                if (numVal)
                {
                    args.push_back(to_string(*numVal));
                }
                else if (strVal)
                {
                    args.push_back("\"" + *strVal + "\"");
                }
                else if (varVal)
                {
                    args.push_back(varVal->getVar());
                }
                else if (unVal)
                {
                    args.push_back(unVal->toBytecode());
                }
                else if (arrayVal)
                {
                    args.push_back(arrayVal->toBytecode());
                }
                else if (nullVal)
                {
                    args.push_back(nullVal->toBytecode());
                }
                else
                {
                    throw runtime_error("Argumento no soportado en llamada a función.");
                }
            }
        }
        // Crea la llamada a la func con los argumentos evaluados
        auto callF = MLVMBuilder->createCallFunc(funcName, args);
        return std::make_shared<MLVM::UnEvaluable>(callF);
    }
    else
    {
        throw runtime_error("Error: La función '" + funcName + "' no está definida.\n");
    }

    return nullptr;
}

antlrcpp::Any NyarVisitor::visitIterar(NyarParser::IterarContext *ctx)
{
    auto controlVarName = ctx->control->getText();

    if (ctx->DESDE())
    {
        // Extraer los valores 'i' y 'f'
        antlr4::Token *iToken = ctx->i;
        antlr4::Token *fToken = ctx->f;

        string iText = iToken->getText();
        string fText = fToken->getText();

        cout << "iText: " << iText << endl;
        cout << "fText: " << fText << endl;

        // Extraer valores numéricos
        optional<double> inicio;
        optional<double> fin;

        try
        {
            inicio = stod(iText);
        }
        catch (const invalid_argument &)
        {
            // Si 'i' no es un número, asumir que es una variable
            auto it = memory.find(iText);
            if (it != memory.end() && it->second)
            {
                try
                {
                    inicio = stod(it->second->getValue());
                }
                catch (...)
                {
                    throw runtime_error("Valor inicial inválido en bucle 'desde'");
                }
            }
            else
            {
                throw runtime_error("Variable 'i' no encontrada o inválida en bucle 'desde'");
            }
        }

        // Manejar 'f'
        try
        {
            fin = stod(fText);
        }
        catch (const invalid_argument &)
        {
            // Si 'f' no es un número, asumir que es una variable
            auto it = memory.find(fText);
            if (it != memory.end() && it->second)
            {
                try
                {
                    fin = stod(it->second->getValue());
                }
                catch (...)
                {
                    throw runtime_error("Valor final inválido en bucle 'hasta'");
                }
            }
            else
            {
                throw runtime_error("Variable 'f' no encontrada o inválida en bucle 'hasta'");
            }
        }

        if (!inicio.has_value() || !fin.has_value())
        {
            throw runtime_error("Valores inicial y final inválidos en bucle 'desde-hasta'");
        }

        MLVMBuilder->createBeginForBlockRange(controlVarName, to_string(*inicio), to_string(*fin));
        visit(ctx->block());
        MLVMBuilder->createEndForBlock();

        return nullptr;
    }
    return visitChildren(ctx);
}

antlrcpp::Any NyarVisitor::visitCondicion(NyarParser::CondicionContext *ctx)
{
    auto condicionAny = visit(ctx->cond);

    // Extraer el valor de la condición utilizando extractValue
    optional<double> condNum;
    optional<string> condStr;
    shared_ptr<MLVM::Variable> condVar;
    shared_ptr<MLVM::UnEvaluable> condUnVal;
    shared_ptr<MLVM::Array<antlrcpp::Any>> arrayVal;
    shared_ptr<MLVM::Null> nullVal;

    tie(condNum, condStr, condVar, condUnVal, arrayVal, nullVal) = extractValue(condicionAny);

    // Determinar la representación de la condición para MLVM
    string condRepresentation;
    if (nullVal)
    {
        condRepresentation = "0";
    }
    else if (condNum)
    {
        condRepresentation = *condNum != 0.0 ? "1" : "0"; // Considerar no cero como verdaderostd
    }
    else if (condStr)
    {
        condRepresentation = !condStr->empty() ? "1" : "0"; // Cadena no vacía como verdadero
    }
    else if (condVar)
    {
        condRepresentation = condVar->getVar(); // Obtener representación de la variable
    }
    else if (condUnVal)
    {
        condRepresentation = condUnVal->toBytecode(); // Obtener bytecode de la expresión no evaluable
    }
    else if (arrayVal)
    {
        condRepresentation = arrayVal->empty() ? "0" : "1";
    }
    else
    {
        throw runtime_error("Condición inválida en el if");
    }

    MLVMBuilder->startIfBlock(condRepresentation);

    for (auto stat : ctx->stat())
    {
        visit(stat);
    }

    // Verificar y visitar el bloque 'else' si existe
    if (ctx->else_())
    {
        visit(ctx->else_());
    }

    MLVMBuilder->endBlock();

    return nullptr;
}
