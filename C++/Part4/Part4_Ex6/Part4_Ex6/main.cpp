//
//  main.cpp
//  Part4_Ex6
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
    
    unsigned short const res = nb1 * nb2;
    
    cout << "Le resultat est " << res;
    
    return 0;
}
