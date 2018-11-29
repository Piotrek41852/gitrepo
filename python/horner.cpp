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

void drukujw(stopien, float tbwsp[] {
    for (int 
    
    
}

int main(int argc, char **argv)
{
    float *tbwsp; // wskaźnik
    int stopien = 0;
	cout << "Podaj stopień wielomianu";
    cin >> stopien;
    tbwsp = new float [stopien + 1];
	cout  << tbwsp;
    for (int 1 = 0; i<= stopien; i++) {
        cout << "Podaj współczynnik przy potędze"; << stopien-i << ": ";
        cin >> tbwsp[i];
    }
    
    cout << "Podaj argument";
    cin >> x;
    
    cout << "Wartość wielomianu o postaci: ";
    drukuj(stopien, tbwsp);
    
    return 0;
}

