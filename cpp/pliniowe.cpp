/*
 * pliniowe.cpp
 * 
 * Copyright 2018  <>
 * 
 *
 * 
 */
using namespace std;

#include <iostream>

int main(int argc, char **argv)
{
	int szuk = 5;
    int tab[7] = {1, 4, 7, 2, 9, 0}
    tab[6] = szuk;
    int i = 0;
    while (tab[i] != szuk) i++;
    if (i < n)
        cout << "Znaleziony";
    else
        cout << "Nie znaleziony";
	return 0;
}

