/*
 * silnia.cpp
 * 
 * Copyright 2018  <>
 * 

 * 
 * 
 */

using namespace std;

int silnia_re(int n) {
    if (n == 0) return 1;
    return silnia_re(n - 1) * n;
    
    
    
    
}



#include <iostream>

int main(int argc, char **argv)
{
	int n = 10;
    cout << silnia_re(n) << endl;
    
    
	return 0;
}

