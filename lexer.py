from rply import LexerGenerator


class Lexer():
    def __init__(self):
        self.lexer = LexerGenerator()

    def _add_tokens(self):
        # Print and input
        self.lexer.add('PRINT', r'show')
        self.lexer.add('INPUT', r'read')

        # if
        self.lexer.add('IF', r'test')
        self.lexer.add('ELSE', r'failed')

        # while
        self.lexer.add('WHILE', r'loop')

        # for
        self.lexer.add('FOR', r'do')

        # condition operators
        self.lexer.add('AND', r'&&')
        self.lexer.add('OR', r'||')
        self.lexer.add('EQUALTO', r'equalto')
        self.lexer.add('LESS', r'<')
        self.lexer.add('GREATER', r'>')

        # assignments
        self.lexer.add('NEW', r'new')
        self.lexer.add('INT', r'int')
        self.lexer.add('BOOL', r'bool')
        self.lexer.add('STRING', r'str')

        # Parenthesis
        self.lexer.add('OPEN_PAREN', r'\(')
        self.lexer.add('CLOSE_PAREN', r'\)')

        # Brackets
        self.lexer.add('OPEN_BRACKET', r'\{')
        self.lexer.add('CLOSE_BRACKET', r'\}')

        # Semi Colon
        self.lexer.add('SEMI_COLON', r'\;')

        # Operators
        self.lexer.add('SUM', r'\+')
        self.lexer.add('SUB', r'\-')
        self.lexer.add('EQUAL', r':=')
        self.lexer.add('DIV', r'/')
        self.lexer.add('MULT', r'*')

        # Number
        self.lexer.add('NUMBER', r'\d+')

        # Assignments
        self.lexer.add('VARIABLE', r'\s+')

        # Ignore spaces
        self.lexer.ignore('\s+')

    def get_lexer(self):
        self._add_tokens()
        return self.lexer.build()