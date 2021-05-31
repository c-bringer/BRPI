//
//  main.cpp
//  Nombre_Premier
//
//  Created by Corentin Bringer on 29/10/2020.
//

#include <iostream>
#include <cmath>

/*
7
on divise par 2
prendre le reste

divisible par lui meme et par un
si il y a reste pas nombre premier
 */

using namespace std;

int main(int argc, const char * argv[]) {
    //declaration var
    unsigned short nb = 0;
    int racineCarree = 0;
    
    //saisie
    cout << "Saisir un nombre:";
    cin >> nb;
    
    racineCarree = sqrt(nb);

    for(int i = 1; i <= racineCarree; i++) {
        if(nb % i != 0) {
            cout << nb << " est premier" << endl;
        }
    }
    
    return 0;
}
