#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py
#  
#
def prostokąt1(a, b, znak):
    for i in range(a):
        for j in range(b):
            print(znak , end='' )
        print()
        
        
def prostokąt2(a, b, znak):
    for i in range(a):
        for j in range(b):
            if j == 0 or j ==b -1 or i == 0 or i == a - 1:
                print(znak, end='')
            else:
                print(" ", end='')
        print()
        
        
def choinka1(h, znak):
    for i in range(h):
        if j == 0 or i == h + 1:
            print(znak, end='')
        print()
    
    
    



def main(args):
    a = int(input("Podaj długość boku: "))
    b = int(input("Podaj długość drugiego boku: "))
    h = int(input("Podaj wysokość ")
    znak = input("Podaj znak: ")
    prostokąt1(a, b, znak)
    print()
    prostokąt2(a, b, znak)
    print()
    choinka1(h, znak)
    
       
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
