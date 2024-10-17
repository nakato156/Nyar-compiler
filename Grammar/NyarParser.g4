parser grammar NyarParser;
options { tokenVocab=NyarLexer; }

program : stat* EOF;
stat 
    : variable SEMI
    | expr SEMI
    | funcDef
    | iterar END_BLOCK
    | condicion END_BLOCK
    | array SEMI
    ;
    
expr
    : NUM   #number
    | BOOL  #boolean
    | STRING    #string
    | ID        #Id
    | LAPREN expr RPAREN #parenExp
    | expr op=(MUL|DIV|ADD|RESTA) expr #aritExp
    | expr op=EQEQ expr #eqEqExp
    | expr op=(LESS | GREATER) EQUAL  expr #eqExp
    | expr op=NEQ expr #neqExp
    | funcCall  #fCall
    | array     #arreglo
    ;

array
    : LBRACKET (expr (COMMA expr)*)?  RBRACKET
    ;

variable
    : ID EQUAL expr
    ;

funcParams
    : ID (COMMA ID)*
    ;

funcDef
    : FUNC ID LAPREN funcParams RPAREN START_BLOCK stat* END_BLOCK
    ;

funcArgs
    : expr (COMMA expr)*
    ;


funcCall 
    : ID LAPREN funcArgs RPAREN
    ;

iterar
    : FOR
    | DESDE i=(NUM | ID) HASTA f=(NUM | ID)
    | EN (ID | array)
    ;

condicion 
    : COND expr START_BLOCK stat* END_BLOCK (COND START_BLOCK stat* END_BLOCK)?
    ;
