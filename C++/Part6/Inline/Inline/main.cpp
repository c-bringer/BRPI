//
//  main.cpp
//  Inline
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>

using namespace std;

int main()
{
    int fct(char, int);
    int n = 150, p;
    char c = 's';
    
    p = fct(c, n);
    cout << "fct (\'" << c << "\', " << n << ") vaut : " << p;
    
    return 0;
}

int inline fct(char c, int n)
{
    return (c == 'a') ? n + c : (c == 's') ? n - c : n * c;
}
