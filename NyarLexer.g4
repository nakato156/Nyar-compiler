lexer grammar NyarLexer;

LAPREN  : '(';
RPAREN  : ')';
ADD     : '+';
RESTA   : '-';
MUL     : '*';
DIV     : '/';
LESS    : '<';
GREATER : '>';
EQUAL   : '=';
COMMA   : ',';
SEMI    : ';';
LBRACKET: '[';
RBRACKET: ']';

LINE_COMMENT : '//' ~('\r'|'\n') -> skip;
START_BLOCK : '{';
END_BLOCK   : '}';
STRING  : ('"' | '\'') .*? ('"' | '\'');
COMMENT : '/*' .*? '*/' -> skip;
IMPORT  : 'importar';
FUNC    : 'funcion';
FOR     : 'iterar';
WHILE   : 'mientras';
DESDE   : 'desde';
HASTA   : 'hasta';
EN      : 'en';
COND    : 'si' | 'sino';
ID      : [a-zA-Z_][a-zA-Z_0-9]*;
NUM     : '-'?[0-9]+('.'[0-9]+)?([eE][+-]?[0-9]+)?;
BOOL    : ('verdadero' | 'falso');
NADA    : 'NADA';
RETURN : 'retornar';
WS      : [ \t\n\r]+ -> skip;
