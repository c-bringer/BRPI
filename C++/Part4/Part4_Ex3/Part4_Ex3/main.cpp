//
//  main.cpp
//  Part4_Ex3
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short nb1 = -1;
    unsigned short nb2 = -1;
    
    cout << "Saisir nb1:";
    cin >> nb1;
    cout << "Saisir nb2:";
    cin >> nb2;
    
    nb1 *= nb2;
    
    cout << "Saisir nb3:";
    cin >> nb2;
    
    nb1 += nb2;
    
    cout << "Saisir nb4:";
    cin >> nb2;
    
    nb1 -= nb2;
    
    cout << "Le resultat est " << nb1;
    
    return 0;
}
