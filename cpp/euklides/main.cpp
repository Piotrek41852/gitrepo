
#include <iostream>

using namespace std;

int nwd_klasyczny(int a, int b) {
    int licznik = 0;
    while (a != b) {
        if(a> b)
            a = a -b;
        else
            b = b -a;
        licznik++;
    }
    cout << "Powtórzeń: " << licznik << endl;
    return a;
}


int nwd_optymalny(int a, int b) {
    int licznik = 0;
    while (a > 0) {
        if (a > 0){
            a = a % b;
            b = b - a;
            licznik++;
        }else
            cout <<  b;
    }



    cout << "Powtórzeń: " << licznik << endl;
    return b;


}

int main()
{
    int a, b;
    a = b = 0;
    cout << "Podaj 2 liczby: ";
    cin >> a >> b;
    int wynik = nwd_klasyczny(a, b);
    cout << "NWD(" << a << ", " << b << ") = " << nwd_klasyczny(a, b) << endl;
    wynik = nwd_optymalny(a, b)
    cout << "NWD(" << a << ", " << b << ") = " << nwd_optymalny(a, b) << endl;

    return 0;
}
