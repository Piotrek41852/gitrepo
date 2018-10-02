#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pentla-for.py
#  
# 
#  
#  


def main(args):
    
    start = int(input("Podaj liczbę 1: "))
    stop = int(input("Podaj liczbę 2: "))
    while start >= stop:
    print("Błąd! ")
    stop = int(input("Podaj liczbę2: "))
    if start >= stop:
        print("Błędne dane !")
        exit(0)
    
    for i in range(start, stop + 1):
        if i % 2 == 0:
            print(i)
        else:
            print("Liczba nieparzysta")
            
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
