parser grammar VMParser;
options { tokenVocab=VMLexer; }

program : stat* EOF;

stat 
    : variable
    | for
    | functiondefinition
    | expr
    | if
	| struct
    | returnexpression
    ;
    
expr
    : NUMBER                                            #NumberExp
    | STRING                                            #StringExp
    | ID                                                #IdExp
    | NULL                                              #NullExp
    | LPAREN expr RPAREN                                #ParenExp
    | accessObject                                      #AccessObjectExp
	| array                                             #ArrayExp
	| functioncall                                      #FunctionCallExp 
	| expr op=(MUL | DIV | SUM | SUB) expr              #MathExp
	| expr op=(LESS | LESSEQUAL | GREATER | GREATEREQUAL | EQEQ | NEQ | AND | OR) expr  #logicExp
	;

variable
    : ID COLON hint=ID SEMICOLON val=expr SEMICOLON ref=expr SEMICOLON
	| ID SEMICOLON val=expr SEMICOLON ref=expr SEMICOLON 
    ;

//Flow Controls
for:
	RW_FOR SEMICOLON CONTROL=ID SEMICOLON FROM = (ID | NUMBER) SEMICOLON TO = ( ID
    | NUMBER ) block 
    ;

if: RW_IF SEMICOLON cond = expr* block else?;
else: RW_IFELSE block;

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

accessObject: 
	ID (DOT ID)*
    ;

functioncall:
	RW_CALLFUNCTION SEMICOLON ID LPAREN functionarguments? RPAREN;

