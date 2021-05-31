//
//  display.cpp
//  Morpion
//
//  Created by Corentin Bringer on 23/11/2020.
//

#include <iomanip>
#include <iostream>
#include "display.hpp"
#include "ia.hpp"

using namespace::std;

/*
 Affiche une ligne
 Ecrit: "   I   I   "
 @return void
 */
void displayEmptyLine()
{
    cout << setw(3) << " " << "I" << setw(3) << " " << "I" << setw(3) << " " << endl;
}

/*
 Séparation de ligne
 Ecrit: "---+---+---"
 @return void
 */
void displaySplitLine()
{
    cout << "---+---+---" << endl;
}

/*
 Affiche la ligne avec X ou O à l'intérieur
 @param char tabMorpion[9]
 @return void
 */
void displayLine(char tabMorpion[9], int ligne)
{
    cout << " " << tabMorpion[ligne - 1] << " I " << tabMorpion[ligne] << " I " << tabMorpion[ligne + 1] << endl;
}

/*
 Affiche la grille vide
 @return void
 */
void displayEmptyGrid()
{
    for(int i = 0; i < 11; i++) {
        if(i == 3 || i == 7) {
            displaySplitLine();
        } else {
            displayEmptyLine();
        }
    }
}

/*
 Affiche la grille en jeu
 @param char tabMorpion[9]
 @return void
 */
void displayGrid(char tabMorpion[9])
{
    int ligne = 0;
    
    for(int i = 0; i < 11; i++) {
        if(i == 3 || i == 7) {
            displaySplitLine();
        } else if(i == 1) {
            ligne = 1;
            displayLine(tabMorpion, ligne);
        } else if(i == 5) {
            ligne = 4;
            displayLine(tabMorpion, ligne);
        } else if(i == 9) {
            ligne = 7;
            displayLine(tabMorpion, ligne);
        } else {
            displayEmptyLine();
        }
    }
}

/*
 Demande de saisir une valeur entre 0 et 8
 @return int choixCase
 */
int displayQuestion()
{
    int choixCase = 0;
    
    cout << "Choisir une case entre 0 et 8:";
    cin >> choixCase;

    return choixCase;
}

/*
 Affiche une erreur si une case est déjà saisit par X ou O
 @param char tabMorpion[9]
 @return void
 */
void displayError()
{
    cout << "Cette case contient déjà un symbole X ou O" << endl;
}

/*
 Affiche que c'est à l'ordinateur de jouer
 @return void
 */
void displayIaPlay()
{
    cout << "Au tour de l'IA de jouer" << endl;
}

/*
 Affiche que le partie est terminé par match null
 @return void
 */
void displayMatchDraw()
{
    cout << "La partie est terminé par un match null" << endl;
}

/*
 Affiche que la partie est terminé et gagné par l'utilisateur
 @return void
 */
void displayMatchWin()
{
    cout << "La partie est terminé et gagné par l'utilisateur" << endl;
}

/*
 Affiche que la partie est terminé et perdu par l'utilisateur
 @return void
 */
void displayMatchLose()
{
    cout << "La partie est terminé et perdu par l'utilisateur" << endl;
}

/*
 Reprends la valeur de gameStateCheck
 @return void
 */
void displayEnd(char tabMorpion[9])
{
    char state = gameStateCheck(tabMorpion);
    
    switch (state) {
        case 'd':
            displayMatchDraw();
            break;
        case 'X':
            displayMatchWin();
            break;
        case 'O':
            displayMatchLose();
            break;
            
        default:
            displayMatchLose();
            break;
    }
}
