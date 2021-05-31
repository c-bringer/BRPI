//
//  main.cpp
//  Drawing_Rectangle
//
//  Created by Corentin Bringer on 23/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short longueur = 0;
    unsigned short largeur = 0;
    char car = '*';
    
    cout << "Longeur:";
    cin >> longueur;
    cout << "Saisir largeur:";
    cin >> largeur;
    cout << "Saisir caractere:";
    cin >> car;
    
    for(int i = 0; i < largeur; i++) {
        cout << car;
        for(int j = 0; j < longueur - 1; j++) {
            cout << car;
        }
        cout << endl;
    }
    
    return 0;
}
