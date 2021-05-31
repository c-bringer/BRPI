//
//  main.cpp
//  Ex1
//
//  Created by Corentin Bringer on 20/11/2020.
//

#include <iostream>

using namespace std;

int main()
{
    int * p,a (1);
    p=&a;
    
    cout << p << endl; //adresse memoire
    cout <<&a << endl; //1
    cout <<&p << endl; //
    cout << *p << endl;
    
    return 0;
}
