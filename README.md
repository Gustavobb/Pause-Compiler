# Pause-Compiler
Compiler for language Pause

---

FUNCDEFBLOCK = TYPE, IDENTIFIER, "=>", (TYPE, IDENTIFIER | ":"), "<=", COMMAND

BLOCK = "[", { COMMAND }, "]" ;

COMMAND = ( λ | ASSIGNMENT | PRINT | BLOCK | WHILE | IF | STRDEF | BOOLDEF | INTDEF | | FOR | (IDENTIFIER | IDENTIFIER, "=>", (OREXPR | ,), "<=")), ";" ;

WHILE = "loop", "=>", OREXPR ,"<=", COMMAND;

FOR = "do", "=>", COMMAND, OREXPR, COMMAND ,"<=", COMMAND;

IF = "test", "=>", OREXPR ,"<=", COMMAND, (("redo", COMMAND) | λ );

ASSIGNMENT = IDENTIFIER, "=", EXPRESSION ;

PRINT = "show", "=>", OREXPR, "<=" ;

OREXPR = NOTEQEXPR, { "||", NOTEQEXPR } ;

NOTEQEXPR = ANDEXPR, { "#", ANDEXPR } ;

ANDEXPR = EQEXPR, { "&&", EQEXPR } ;

EQEXPR = RELEXPR, { "?", RELEXPR } ;

RELEXPR = EXPRESSION, { (">"|"<"), EXPRESSION }

EXPRESSION = TERM, { ("+" | "-"), TERM } ;

TERM = FACTOR, { ("*" | "/"), FACTOR } ;

FACTOR = (("+" | "-" | "!" ), FACTOR) | NUMBER | BOOL | STR | "=>", OREXPR, "<=" | IDENTIFIER | (IDENTIFIER, "=>", (OREXPR | ":"), "<=") | READLN;

READLN = "ask", "=>","<=";

IDENTIFIER = LETTER, { LETTER | DIGIT | "_" } ;

INTDEF = int, IDENTIFIER ; BOOLDEF = bool, IDENTIFIER ; STRDEF = str, IDENTIFIER ;

NUMBER = DIGIT, { DIGIT } ; BOOL = true | false ; STR = " , LETTER | DIGIT, " ; LETTER = ( a | ... | z | A | ... | Z ) ; DIGIT = ( 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 ) ;