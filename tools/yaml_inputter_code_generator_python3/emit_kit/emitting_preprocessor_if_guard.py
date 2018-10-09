# -*- coding: utf-8 -*-

class PreprocessorIfGuard:

    def __init__(self, s : 'file', macro : str):
        self.s = s
        self.macro = macro
        
    def __enter__(self):
        print("#ifndef " + self.macro, file = self.s)
        print("#define " + self.macro, file = self.s)
        print("", file = self.s)        

    def __exit__(self, exc_type, exc_val, exc_tb):
        print("#endif // end of #ifndef " + self.macro, file = self.s)
