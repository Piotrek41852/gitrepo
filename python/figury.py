#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py
#  
#
#  


def main(args):
    a = int(input("Podaj długość boku"))
    b = int(input("Podaj długość drugiego boku"))
    znak = input("Podaj znak")
    
    for i in range(a):
        for j in range(b):
            print(znak , end='' )
        print()
        
    for i in range(a):
        for j in range(b):
            if j == 0 or j ==b -1:
            print(znak , end='' )
            print()
        else:
            print(" ", end,'' )
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
