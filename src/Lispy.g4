grammar Lispy;

lispy: lispyOp = op lispyExpr = expr+;
expr:
	LPAREN exprOp = op exprLeft = expr exprRight = expr+ RPAREN	# parenExpr
	| NUMBER													# numberExpr;
op: PLUS | MINUS | STAR | SLASH | PERCENT;

LPAREN: '(';
RPAREN: ')';
NUMBER: '-'? [0-9]+;
PLUS: '+';
MINUS: '-';
STAR: '*';
SLASH: '/';
PERCENT: '%';

WS: [ \t\r\n]+ -> skip;

