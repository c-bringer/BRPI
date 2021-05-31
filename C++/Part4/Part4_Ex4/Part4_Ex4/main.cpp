//
//  main.cpp
//  Part4_Ex4
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short nb1 = -1;
    unsigned short nb2 = -1;
    
    cout << "Saisir nombre 1 :";
    cin >> nb1;
    cout << endl << "Saisir nombre 2:";
    cin >> nb2;
    
    cout << "Le quotient est " << nb1 / nb2 << endl;
    cout << "Le reste est " << nb1 % nb2;
    
    return 0;
}
