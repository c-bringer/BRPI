//
//  main.cpp
//  Ex2
//
//  Created by Corentin Bringer on 16/11/2020.
//
/*Ecrire un programme qui demande 10 notes (sur 20) à un utilisateur, qui les enregistre dans un
tableau unidimensionnel avant de rechercher la plus grande, la plus basse, le nombre de fois qu’elles
ont été émises, de calculer la moyenne et d’afficher toutes ces informations.
Ecrire toutes ces fonctions dans un autre fichier afin de les réutiliser facilement dans l’exercice 6.
*/

#include <iostream>
#include "note.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int note[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i = 0; i < 10; i++) {
        cout << "Saisir une note:";
        cin >> note[i];
    }
    
    grandeNote(note);
    petiteNote(note);
    moyenne(note);
    
    return 0;
}
