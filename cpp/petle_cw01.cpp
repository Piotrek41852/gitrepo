/*
 * petle_cw01.cpp
 * 
 
 * 
 */

using namespace std;

#include <iostream>

void cw01() {
    int j = 0;
    for (int i = 10; i < 100; i++) {
        if (i % 2 == 0)
        j = j + i;
        
    }
    cout << "suma;" << j << endl;
}

void cw02() {
    
    
    
}

int main(int argc, char **argv)
{
	cw01();
	return 0;
}

