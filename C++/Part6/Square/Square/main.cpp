//
//  main.cpp
//  Square
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>
#include "maths.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int nb = 0;
    
    cout << "Saisir un nombre:" << endl;
    cin >> nb;
    
    cout << endl << "Le carre de " << nb << " est " << square(nb);
    
    return 0;
}
