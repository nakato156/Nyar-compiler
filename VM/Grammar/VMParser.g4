parser grammar VMParser;
options { tokenVocab=VMLexer; }

program : stat* EOF;

stat 
    : variable
    | while
    | functiondefinition
    | expr
    | if
	| struct
    | returnexpression
    ;
    
expr
    : NUMBER                                            #NumberExp
    | BOOL                                              #BooleanExp
    | STRING                                            #StringExp
    | ID                                                #IdExp
    | NULL                                              #NullExp
	| array                                             #ArrayExp
	| functioncall                            #FunctionCallExp 
	| expr op=(MUL | DIV | SUM | SUB) expr    #MathExp
	| expr op=EQEQ expr                       #eqEqExp
	| expr op=(LESS | GREATER) EQUAL expr     #eqExp
	| expr op=NEQ expr                        #neqExp
    ;

variable
    :
	ID COLON hint=ID SEMICOLON NUMBER SEMICOLON REF=expr SEMICOLON
	| ID SEMICOLON expr SEMICOLON REF=expr SEMICOLON 
    ;

//Flow Controls

while:
	RW_FOR SEMICOLON CONTROL = ID SEMICOLON FROM = (ID | NUMBER) SEMICOLON TO = ( ID
    | NUMBER ) block 
    ;

if: RW_IF SEMICOLON cond = expr* block;

//Data Structures

struct: RW_STRUCTURE SEMICOLON ID functionblock;

array: RW_ARRAY arrayblock;

arrayblock:
	START_BLOCK (expr (SEMICOLON expr)*)? END_BLOCK;

//Functions

block
    :COLON stat* RW_END 
    ;

functionparameters: ID (COMMA ID)*;

functionblock: START_BLOCK stat* END_BLOCK;

functiondefinition:
	RW_DECLAREFUNCTION ID LPAREN functionparameters? RPAREN functionblock
    ;

returnexpression: RW_RETURN SEMICOLON expr SEMICOLON;

functionarguments: expr (COMMA expr)*;

functioncall:
	RW_CALLFUNCTION SEMICOLON ID LPAREN functionarguments RPAREN;
