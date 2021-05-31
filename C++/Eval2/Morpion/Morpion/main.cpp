//
//  main.cpp
//  Morpion
//
//  Created by Corentin Bringer on 23/11/2020.
//

#include <iostream>
#include "display.hpp"
#include "ia.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    char tabMorpion[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int choixCase = 0;
    
    cout << "Affichage grille vide:" << endl;
    displayEmptyGrid();
    
    do {
        replay:
        choixCase = displayQuestion();
        
        if(tabMorpion[choixCase] == 'X' || tabMorpion[choixCase] == 'O') {
            displayError();
            goto replay;
        } else {
            tabMorpion[choixCase] = 'X';
        }
        
        
    } while(gameStateCheck(tabMorpion) == 'c');
    
    return 0;
}
