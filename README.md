# Pause-Compiler
Compiler for language Pause

---

BLOCK = "{", { COMMAND }, "}" ; 

COMMAND = ( λ | ASSIGNMENT | PRINT | BLOCK | WHILE | IF), ";" ;

COMMANDIF = (PRINT | BLOCK | WHILE | IF), ";" ;

COMMANDELSEIF = "{", ( ASSIGNMENT | PRINT | WHILE ), "}", ;" ;

WHILE = "loop", "(", OREXPR ,")", BLOCK;

FOR = "do", "(", IDENTIFIER, ";", OREXPR, ";", EXPRESSION, ";", ")", BLOCK;

IF = "test", "(", OREXPR ,")", BLOCK, (ELSEIF | λ), (("failed", COMMANDIF) | λ );

ELSEIF = "redo", (COMMANDELSEIF | ELSE);

ELSE = "failed", COMMANDIF;

ASSIGNMENT = IDENTIFIER, "=", EXPRESSION ; 

PRINT = "show", "(", OREXPR, ")" ; 

OREXPR = ANDEXPR, { "||", ANDEXPR } ;

ANDEXPR = EQEXPR, { "&&", EQEXPR } ;

EQEXPR = RELEXPR, { "==", RELEXPR } ;

RELEXPR = EXPRESSION, { (">"|"<"),  EXPRESSION }

EXPRESSION = TERM, { ("+" | "-"), TERM } ; 

TERM = FACTOR, { ("*" | "/"), FACTOR } ; 

FACTOR = (("+" | "-" | "!" ), FACTOR) | NUMBER | "(", OREXPR,  ")" | IDENTIFIER | READLN;

READLN = "readln", "(",")";

IDENTIFIER = "new", TYPE, LETTER, { LETTER | DIGIT | "_" } ; 

FUNCTION = "=>", LETTER, { LETTER | DIGIT | "_" }, "(", {IDENTIFIER | λ}, ")", BLOCK;

TYPE = IDENTIFIER;

NUMBER = DIGIT, { DIGIT } ; 

LETTER = ( a | ... | z | A | ... | Z ) ; 

DIGIT = ( 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 ) ;
