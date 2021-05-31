//
//  main.cpp
//  Square
//
//  Created by Corentin Bringer on 23/10/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    //Init var
    unsigned short nb = -1;
    
    //Saisie
    cout << "Saisir nb:";
    cin >> nb;
    
    //Affichage
    for(int i = 1; i <= nb; i++) {
        cout << "La carre de " << i << " : " << pow(i, 2) << endl;
    }
    
    return 0;
}
