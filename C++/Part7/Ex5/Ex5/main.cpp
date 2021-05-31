//
//  main.cpp
//  Ex5
//
//  Created by Corentin Bringer on 18/11/2020.
/*
 Ecrire un programme qui demande à l’utilisateur de saisir un nombre entre 1 et 7 et qui lui renvoi le
 jour de la semaine correspondant. (lundi pour 1, mardi pour 2, ..., dimanche pour 7).
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int nb = 0;
    string jour[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    cout << "Saisir nombre entre 1 et 7";
    cin >> nb;
    
    switch (nb) {
        case 1:
            cout << jour[0];
            break;
        case 2:
            cout << jour[1];
            break;
        case 3:
            cout << jour[2];
            break;
        case 4:
            cout << jour[3];
            break;
        case 5:
            cout << jour[4];
            break;
        case 6:
            cout << jour[5];
            break;
        case 7:
            cout << jour[6];
            break;
            
        default:
            cout << jour[0];
            break;
    }
    
    return 0;
}
