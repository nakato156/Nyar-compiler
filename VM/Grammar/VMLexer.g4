lexer grammar VMLexer;

LPAREN  : '(';
RPAREN  : ')';

START_BLOCK : '{';
END_BLOCK   : '}';

//Math Operations
SUM     : '+';
SUB     : '-';
MUL     : '*';
DIV     : '/';

//Logic Operations
LESS    : '<';
GREATER : '>';
EQUAL   : '=';
NEQ     : '!=';
EQEQ    : '==';
AND     : '&&';
OR      : '||';

//ReservedWords
RW_FOR: '@_for';
RW_IF: '@si';
RW_END: '@_end';
RW_DECLAREFUNCTION: '@declare funcion';
RW_CALLFUNCTION: '@call';
RW_RETURN: '@retornar';
RW_STRUCTURE: '@estructura';
RW_ARRAY: '@array';

RESERVEDWORDS: '@';

COMMA        : ',';
SEMICOLON    : ';';
COLON        : ':';
LBRACKET     : '[';
RBRACKET     : ']';

LINE_COMMENT : '//' ~('\r'|'\n') -> skip;
STRING  : ('"' | '\'') .*? ('"' | '\'');
COMMENT : '/*' .*? '*/' -> skip;

ID      : [a-zA-Z_][a-zA-Z_0-9]*;
NUMBER     : '-'?[0-9]+('.'[0-9]+)?([eE][+-]?[0-9]+)?;
BOOL    : ('verdadero' | 'falso');
NULL    : '@NNULL';
WS      : [ \t\n\r]+ -> skip;