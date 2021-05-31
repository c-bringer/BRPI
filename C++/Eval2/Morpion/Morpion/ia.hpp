//
//  ia.hpp
//  Morpion
//
//  Created by Corentin Bringer on 23/11/2020.
//

#ifndef ia_hpp
#define ia_hpp

#include <stdio.h>

//IA
char isGameWin(char tabMorpion[9]);
bool isGameOver(char tabMorpion[9]);
char gameStateCheck(char tabMorpion[9]);
void isCenterFree(char tabMorpion[9]);
int random(int a);
void iaRandomPlay(char tabMorpion[9]);
void iaPlayToWin(char tabMorpion[9]);
void iaPlayToDefend(char tabMorpion[9]);

#endif /* ia_hpp */
