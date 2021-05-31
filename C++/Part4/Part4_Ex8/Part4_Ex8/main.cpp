//
//  main.cpp
//  Part4_Ex8
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    //Init var
    unsigned short nb1 = -1;
    unsigned short nb2 = -1;
    unsigned short temp = -1;
    
    //Saisie
    cout << "Saisir nb1:";
    cin >> nb1;
    cout << "Saisir nb2:";
    cin >> nb2;
    
    //Affiche avant inversement
    cout << "nb1 = " << nb1 << endl;
    cout << "nb2 = " << nb2 << endl;
    
    //Inverse deux var
    temp = nb1;
    nb1 = nb2;
    nb2 = temp;
    
    //Afichage apres inversement
    cout << "inverse nb1 = " << nb1 << endl;
    cout << "inverse nb2 = " << nb2 << endl;
    
    return 0;
}
