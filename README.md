# Pause-Compiler
Compiler for language Pause

---

FUNCDEFBLOCK = { TYPE, IDENTIFIER, "=>", { TYPE, IDENTIFIER, ":" }, "<=", COMMAND } ;

BLOCK = "[", { COMMAND }, "]" ;

COMMAND = ( λ | DECLARATION | ASSIGNMENT | PRINT | BLOCK | WHILE | IF | STRDEF | BOOLDEF | INTDEF | FOR | (IDENTIFIER | IDENTIFIER, "=>", { OREXP, "," }, "<=" ) ), ";" ;

WHILE = "loop", "=>", OREXPR ,"<=", COMMAND ;

FOR = "do", "=>", COMMAND, ";", OREXPR, ";", COMMAND , ";", "<=", COMMAND ;

IF = "test", "=>", OREXPR ,"<=", COMMAND, (("redo", COMMAND) | λ ) ;

ASSIGNMENT = IDENTIFIER, "=", EXPRESSION ;

PRINT = "show", "=>", OREXPR, "<=" ; 

OREXPR = NOTEQEXPR, { "||", NOTEQEXPR } ;

NOTEQEXPR = ANDEXPR, { "#", ANDEXPR } ;

ANDEXPR = EQEXPR, { "&&", EQEXPR } ;

DECLARATION = TYPE, IDENTIFIER, { "=", ( OREXP | STRING ) } ;  

EQEXPR = RELEXPR, { "?", RELEXPR } ;

RELEXPR = EXPRESSION, { (">"|"<"), EXPRESSION }

EXPRESSION = TERM, { ("+" | "-"), TERM } ;

TERM = FACTOR, { ("*" | "/"), FACTOR } ;

FACTOR = (( "+" | "-" | "!" ), FACTOR) | NUMBER | BOOL | STR | "=>", OREXPR, "<=" | IDENTIFIER | (IDENTIFIER, "=>", (OREXPR | ":"), "<=") | READLN ;

READLN = "ask", "=>","<=" ;

IDENTIFIER = LETTER, { LETTER | DIGIT | "_" } ;

TYPE = ( "int" | "string" | "bool" )  

INTDEF = int, IDENTIFIER ; 

BOOLDEF = bool, IDENTIFIER ; 

STRDEF = str, IDENTIFIER ;

BOOLEAN = "true" | "false" ;

NUMBER = DIGIT, { DIGIT } ; BOOL = true | false ; 

STRING = "'", LETTER, {LETTER}, "'" ;  

LETTER = ( a | ... | z | A | ... | Z ) ; 

DIGIT = ( 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 ) ;

---

### Relatório

   A linguagem pause foi implementada em python, utilizando o compilador da aula. Suas principais diferenças se encontram na possibilidade de utilizar um for e atribuir valores as variáveis na mesma linha da 
definição. Alguns exemplos de sua sintaxe podem ser vistos nos testes de 1 a 5 na raiz do projeto. A EBNF da linguagem pode ser vista acima. 
    
   Em questão a motivação da linguagem, o nome surge de um importante componente em jogos, o pause. Portanto, a sintaxe da linguagem é mais informal, e todas as plavaras de comando tem um tom mandatório,
como se estivessemos mandando o compilador a rodar algo em terceira pessoa (test, show, do, loop, ...), dando a sensação que quem comanda é o programador, ou seja, o usuário. Isso faz referencia a jogos, pois voce espera que o jogador se sinta poderoso e dominante em relação ao jogo.
