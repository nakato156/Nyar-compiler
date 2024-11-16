parser grammar NyarParser;
options { tokenVocab=NyarLexer; }

program : stat* EOF;
stat 
    : variable SEMI
    | expr SEMI
    | funcDef
    | iterar
    | condicion
    | array SEMI
    | returnExp
    ;

returnExp: RETURN expr SEMI;

expr
    : expr op=OR expr            #logicalOrExp
    | expr op=AND expr           #logicalAndExp
    | expr op=(LESS | LESS_EQUAL | GREATER | GREATER_EQUAL | EQEQ | NEQ) expr #comparisonExp
    | expr op=(MUL | DIV | ADD | RESTA) expr #aritExp
    | LAPREN expr RPAREN           #parenExp
    | NUM                          #number
    | BOOL                         #boolean
    | STRING                       #string
    | ID                           #Id
    | NADA                         #nnull
    | funcCall                     #fCall
    | array                        #arreglo
    | struct                       #estructura
    | expr (DOT ID | DOT funcCall) #memberAccess
    ;

hint
    : HINT_INDICATOR ID;

array
    : LBRACKET (expr (COMMA expr)*)?  RBRACKET
    ;

variable
    : ID type_hint=hint? EQUAL expr
    ;

funcParams
    : ID (COMMA ID)*
    ;

funcBlock
    : START_BLOCK stat* (RETURN (expr SEMI)?)? END_BLOCK
    ;

funcDef
    : FUNC ID LAPREN funcParams? RPAREN funcBlock
    ;

funcArgs
    : expr (COMMA expr)*
    ;


funcCall 
    : ID LAPREN funcArgs? RPAREN
    ;

block
    : START_BLOCK stat* END_BLOCK;

struct
    : STRUCTDef ID block;

iterar
    : FOR control=ID DESDE i=(NUM | ID) HASTA f=(NUM | ID) block
    | FOR control=ID EN (ID | array) block
    ;

else
    : ELSE_COND START_BLOCK stat* END_BLOCK;
    
elseif
    : ELSE_COND COND cond=expr* START_BLOCK stat* END_BLOCK;

condicion 
    : COND cond=expr* START_BLOCK stat* END_BLOCK elseif? else?
    ;
