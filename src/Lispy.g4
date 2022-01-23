grammar Lispy;

lispy: OPERATOR expr+;
expr: NUMBER | '(' OPERATOR expr+ ')';
NUMBER: '-'? [0-9]+;
OPERATOR: '+' | '-' | '*' | '/';

WS: [ \t\r\n]+ -> skip;

