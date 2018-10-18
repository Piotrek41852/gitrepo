/*
 * tabliczka.cpp
 * 
 
 */


#include <iostream>

using namespace std;
 
void tabliczka(int x, int y) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}
 

int main(int argc, char **argv)
{
	int m; // deklaracja zmiennej
    m = 0; // inicjacja
    
    int n = 0; // definicja
    
    cout << "Podaj liczbę 1. ";
    cin >> m;
    cout << "Podaj liczbę 2. ";
    cin >> n;
    tabliczka(m, n);
	return 0;
}

