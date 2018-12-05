#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury_rek.py
#   

import turtle

def figura(bok, kat, ile):
    for i in range(ile):
        turtle.forward(bok)
        turtle.right(kat)
        
def figura_rek(bok, kat, ile, krok):
    turtle.forward(bok)
    turtle.right(kat)
    if kat > 0:
        figura_rek(bok, kat - krok, ile, krok )
    
    
def main(args):
    turtle.setup(1320, 830)
    turtle.color('blue', 'green')
    turtle.speed(0)
    turtle.begin_fill()
    
    figura_rek(69, 65, 11, 20)
    
    turtle.end_fill()
    turtle.done()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
