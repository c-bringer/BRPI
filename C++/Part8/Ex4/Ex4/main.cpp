//
//  main.cpp
//  Ex4
//
//  Created by Corentin Bringer on 20/11/2020.
/*
 Faire une boucle infinie dans laquelle on alloue de la mémoire sans la libérer et observer le
 comportement de votre programme dans le gestionnaire des taches de Windows.
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    
    while(true) {
        int * ptr(0);
        ptr = new int;
    }
    
    return 0;
}
