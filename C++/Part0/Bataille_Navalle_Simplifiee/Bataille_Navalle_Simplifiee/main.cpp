//
//  main.cpp
//  Projet2
//
//  Created by Corentin Bringer on 20/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short const x = 10;
    unsigned short const y = 10;
    unsigned short locFind1 = 0;
    unsigned short locFind2 = 0;
    unsigned short nbCoups = 0;
    unsigned short location1 = rand() % x;
    unsigned short location2 = rand() % y;
    
    //Affiche la grille avec l'emplacement du bateau
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if(i == location1 && j == location2) {
                cout << 'x';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
    
    //Recherche d'un bateau
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            if(i == location1 - 1 && j == location2) {
                locFind1 = i + 1;
                locFind2 = j;
                nbCoups++;
                goto shipfind;
            }
        }
    }
    
    shipfind:
        cout << endl << "Bateau trouve en " << locFind1 << "/" << locFind2 << " en " << nbCoups << " coups";
    
    return 0;
}
