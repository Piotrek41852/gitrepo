/*
 * sortowanie.cpp
 * 
 * Copyright 2018  <>
 * 
 
 * 
 */



#include <iostream>
#include <cstdlib>
using namespace std;
void wypelnij(int tab[], int roz) {
    srand(time(NULL));
    cout << "Wprowadź " << roz << " Liczba " << endl;
    for(int i=0; i<roz; i++) {
        tab[i] = rand() % 101;
        
    }
}

void drukuj(int tab[], int roz) {
    for(int i=0; i<roz; i++) {
        cout << tab[i] << " ";
    }
}

void zamien1(int a, int b) {
    cout << a << " " << b << endl;
    int tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b << endl;
}
void sort_bubble(int tab[], int n) {
    for (int j = n-1; j > 0; j--) {
        cout << j << " ";
        for (int i = 0; i < j; i++) {
            if (tab[i] > tab[i+1])
        }
    }
}

void sort_insert(int tab[], int n) {
    int i, k, el;
    for (i = 1; i < n; i++) {
    el == tab[i]; 
    k = tab[i - 1]
    while (k>=0 && tab[k]>el) {
        tab[k+1] = tab[k];
        k--;
        }   
        tab[k+1] = el;
    }
}



int main(int argc, char **argv)
{
	int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    cout << endl << endl;
    sort_bubble(tab, roz);
    cout << endl;
	return 0;
}

