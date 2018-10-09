# -*- coding: utf-8 -*-
"""
Created on Fri Aug 18 14:23:57 2017

@author: mateusz
"""

class Class:
    def __init__(self, namesapces : list, name : str,
        inner_enums : list, inner_classes : list, fields : list) :
        self.namesapces = namesapces[:]
        self.name = name
        self.inner_enums = inner_enums[:]
        self.inner_classes = inner_classes[:]
        self.fields = fields[:]