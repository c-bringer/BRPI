//
//  main.cpp
//  Ex2
//
//  Created by Corentin Bringer on 27/11/2020.
/*
 Écrire deux fonctions « echange » permettant d’échanger les contenus de 2 variables de type « int »
 fournies en argument :
 a. en transmettant l’adresse des variables concernées ;
 b. en utilisant la transmission par référence.
 Dans les deux cas, on écrira un petit programme d’essai (main) qui appellera les 2 fonctions
 successivement en affichant les valeurs des 2 entiers avant et après l’appel.
 */

#include <iostream>

using namespace std;

void echangePtr(int * nombre1, int * nombre2);
void echangeRef(int &nombre1, int &nombre2);

int main(int argc, const char * argv[]) {
    
    int nombre1 = 0, * nombre1Ptr = &nombre1;
    int nombre2 = 0, * nombre2Ptr = &nombre2;
    
    cout << "Saisir nombre 1:";
    cin >> nombre1;
    cout << "Saisir nombre 2:";
    cin >> nombre2;
    
    echangePtr(nombre1Ptr, nombre2Ptr);
    echangeRef(nombre1, nombre2);
    
    return 0;
}

void echangePtr(int * nombre1, int * nombre2)
{
    int temp = 0;
    
    cout << "avant echange avec pointeur:" << endl;
    cout << "nombre 1 : " <<  * nombre1 << endl;
    cout << "nombre 2 : " << * nombre2 << endl;
    
    temp =  * nombre1;
    * nombre1 = * nombre2;
    * nombre2 = temp;
    
    cout << "apres echange avec pointeur:" << endl;
    cout << "nombre 1 : " << * nombre1 << endl;
    cout << "nombre 2 : " << * nombre2 << endl;
}

void echangeRef(int &nombre1, int &nombre2)
{
    int temp = 0;
    
    cout << "avant echange avec reference:" << endl;
    cout << "nombre 1 : " <<  nombre1 << endl;
    cout << "nombre 2 : " << nombre2 << endl;
    
    temp =  nombre1;
    nombre1 = nombre2;
    nombre2 = temp;
    
    cout << "apres echange avec reference:" << endl;
    cout << "nombre 1 : " << nombre1 << endl;
    cout << "nombre 2 : " << nombre2 << endl;
}
