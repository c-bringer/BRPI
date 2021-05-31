//
//  main.cpp
//  Part4_Ex9
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    //Initialisation var
    unsigned short nb1 = -1;
    unsigned short nb2 = -1;
    
    //Saisie
    cout << "Saisir nb1:";
    cin >> nb1;
    cout << "Saisir nb2:";
    cin >> nb2;
    
    //Affichage
    cout << "nb1 puissance nb2 = " << pow(nb1, nb2) << endl;
    cout << "racine carre de nb1 = " << sqrt(nb1) << endl;
    cout << "racine carre de nb2 = " << sqrt(nb2);
    
    return 0;
}
