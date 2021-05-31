//
//  display.hpp
//  Morpion
//
//  Created by Corentin Bringer on 23/11/2020.
//

#ifndef display_hpp
#define display_hpp

#include <stdio.h>

//Grille
void displayEmptyLine();
void displaySplitLine();
void displayLine(char tabMorpion[9], int ligne);
void displayEmptyGrid();
void displayGrid(char tabMorpion[9]);

//Jeu
int displayQuestion();
void displayError();
void displayIaPlay();
void displayMatchDraw();
void displayMatchWin();
void displayMatchLose();

//IA
void displayEnd(char tabMorpion[9]);

#endif /* display_hpp */
