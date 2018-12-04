/*
 * horner.cpp
 * 
 * Copyright 2018  <>
 * 
 * w(x) = 2x^2 + 3x^2 + 5x + 4 => 6
 * w(x) = x (2x^2 + 3x + 5) +4
 * w(x) = x (x (2x + 3) + 5) + 4 => 3
 * 
 */


#include <iostream>
using namespace std;

void drukujw(int stopien, float tbwsp[]) {
    int i = 0;
    for(i = 0; i < stopien; i++) {
        cout << tbwsp[i] << "x^" << stopien-i << " + ";
    
    }
    cout << tbwsp[i];
}


float gorner_it(float x, int stopien, float tbwsp) {
    float wynik = tbwsp[0];
    for (int i = 0; <= stopien; i++) {
        wynik = wynik * x + tb[i];
    }
    return wynik;
}

int main(int argc, char **argv)
{
    float *tbwsp; // wskaźnik
    float x = 0; 
    int stopien = 0;
	cout << "Podaj stopień wielomianu";
    cin >> stopien;
    tbwsp = new float [stopien + 1];
	cout  << tbwsp;
    for (int i = 0; i<= stopien; i++) {
        cout << "Podaj współczynnik przy potędze" << stopien-i << ": ";
        cin >> tbwsp[i];
    }
    
    cout << "Podaj argument";
    cin >> x;
    
    cout << "Wartość wielomianu o postaci: ";
    drukujw(stopien, tbwsp);
    cout << "wynosi: " << horner_it(x, stopien. tbwsp) << endl;
    return 0;
}

