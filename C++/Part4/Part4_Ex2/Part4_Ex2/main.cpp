//
//  main.cpp
//  Part4_Ex2
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short nb1 = -1;
    unsigned short nb2 = -1;
    
    cout << "Saisir nombre 1 :";
    cin >> nb1;
    cout << endl << "Saisir nombre 2:";
    cin >> nb2;
    
    nb1 += nb2;
    
    cout << endl << "Le resultat est :" << nb1;
    
    return 0;
}
