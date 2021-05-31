//
//  main.cpp
//  Ex3
//
//  Created by Corentin Bringer on 27/11/2020.
/*
 Soit le modèle de structure suivant :
 struct essai
 {
 int n ;
 float x ;
 };
 Écrire une fonction nommée « raz » permettant de remettre à zéro les 2 champs d’une structure de
 ce type transmise en argument par adresse.
 Écrire ensuite un petit programme d’essai de la fonction ; il affichera les valeurs d’une structure de ce
 type, avant et après appel de la fonction « raz ».
 */

#include <iostream>

using namespace std;

struct essai {
    int n = 5;
    float x = 4.5;
};

void raz(essai *unEssai);

int main(int argc, const char * argv[]) {
    essai e;
    
    cout << e.n << endl;
    cout << e.x << endl;
    
    raz(&e);
    
    cout << e.n << endl;
    cout << e.x << endl;
    
    return 0;
}

void raz(essai *unEssai)
{
    (*unEssai).n = 0;
    (*unEssai).x = 0;
}
