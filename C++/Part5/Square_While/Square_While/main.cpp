//
//  main.cpp
//  Square_While
//
//  Created by Corentin Bringer on 23/10/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    //Init var
    unsigned short nb = -1;
    unsigned short i = 1;
    
    //saisie
    cout << "Saisir nb:";
    cin >> nb;
    
    //Affichage
    while(i <= nb) {
        cout << "La carre de " << i << " : " << pow(i, 2) << endl;
        i++;
    }
    
    return 0;
}
