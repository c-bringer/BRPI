//
//  main.cpp
//  Ex3
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>

using namespace std;

void f1();
void f2(int nb);
int f3(int nb);

int main(int argc, const char * argv[]) {
    f1();
    f2(4);
    f3(4);
    
    return 0;
}

void f1()
{
    cout << "f1() Bonjour" << endl;
}

void f2(int nb)
{
    for(int i = 0; i < nb; i++) {
        cout << "f2() Bonjour" << endl;
    }
}

int f3(int nb)
{
    for(int i = 0; i < nb; i++) {
        cout << "f3() Bonjour" << endl;
    }
    
    return 0;
}
