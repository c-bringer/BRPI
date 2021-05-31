//
//  main.cpp
//  Part4_Ex7
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short longeur = -1;
    unsigned short largeur = -1;
    
    cout << "Saisir longeur:";
    cin >> longeur;
    cout << "Saisir largeur:";
    cin >> largeur;
    
    cout << "L'aire du rectangle est de: " << longeur * largeur << endl;
    cout << "Le perimetre du rectangle est de: " << longeur * 2 + largeur * 2;
    
    return 0;
}
