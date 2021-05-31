//
//  main.cpp
//  Ex2
//
//  Created by Corentin Bringer on 25/11/2020.
/*
 Écrire une fonction qui reçoit en argument une structure de type point et qui en affiche le contenu
 sous la forme :
 
 point B de coordonnées 10 12
 a. en transmettant en argument la valeur de la structure concernée,
 b. en transmettant en argument l’adresse de la structure concernée,
 c. en transmettant la structure concernée par référence.
 
 Dans les trois cas, on écrira un petit programme d’essai de la fonction ainsi réalisée.
 */

#include <iostream>

using namespace std;

void display(char name, int x, int y, struct point);

int main(int argc, const char * argv[]) {
    struct point {
        char c;
        int x, y;
    };
    
    struct point listePoint;
    
    display(listePoint.c, listePoint.x, listePoint.y, point);
    
    return 0;
}

void display(char name, int x, int y, struct point)
{
    
}
