#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma-cyfr.py
#  
def cyfry1(liczba):
    suma = 0
    while liczba >0:
        suma = suma + (liczba %10)
        liczba = int(liczba / 10)


def main(args):
    liczba = int(input("Podaj liczbę minimum dwucyfrową "))
    while liczba < 10:
        print("Bład ! ")
        liczba = int(input("Podaj liczbę minimum dwucyfrową "))
        
    suma = 0
    while liczba >0:
        suma = suma + (liczba % 10)
        liczba = int(liczba / 10)
    print("suma:", suma)
    
               
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
