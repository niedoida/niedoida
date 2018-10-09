# -*- coding: utf-8 -*-

class ClassesDfs:
    def __init__(self, in_action : 'callable', out_action : 'callable'):
        self.in_action = in_action
        self.out_action = out_action

    def go(self, c):
        self.in_action(c)
        for ic in c.inner_classes:
            self.go(ic)
        self.out_action(c)
