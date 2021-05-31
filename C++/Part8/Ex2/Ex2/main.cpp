//
//  main.cpp
//  Ex2
//
//  Created by Corentin Bringer on 20/11/2020.
/*
 Ecrire un programme qui affiche le nom, le contenu et l’adresse de la variable suivante et de son
 pointeur (*a) en utilisant uniquement le pointeur pour l’affichage :
 int age (20) ;
 
 Exemple :
 age vaut : 20 et est stocke à l’adresse : 0x28fefc
 a (le pointeur de age) vaut : 0x28fefc et est stocke à l’adresse : 0x28fef8
 */

#include <iostream>

using namespace::std;

int main(int argc, const char * argv[]) {
    int age(20);
    int * a = &age;
    
    cout << "age vaut : " << *a << " et stocke a l'adresse : " << &a;
    
    return 0;
}
