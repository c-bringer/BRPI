//
//  main.cpp
//  Ex4
//
//  Created by Corentin Bringer on 27/11/2020.
/*
 - Écrire un programme allouant dynamiquement un emplacement pour un entier, dont la valeur est
 donnée par l’utilisateur.
 - Afficher cette valeur.
 - Créer ensuite dynamiquement un nouvel emplacement pour un nouvel entier destiné à recevoir le
 cube du nombre contenu dans le premier.
 - Supprimer alors le premier entier.
 - Afficher la valeur du second et supprimer le tout. (On ne cherchera pas à traiter un éventuel
 problème de manque de mémoire.)
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int * nb = 0;
    int  * cube = 0;
    nb = new int;
    cube = new int;
    
    cout << "saisir valeur:";
    cin >> * nb;
    cout << * nb;
    
    * cube = pow(* nb, 3);
    delete nb;
    
    cout << "le cube est " << * cube;
    
    delete cube;
    
    return 0;
}
