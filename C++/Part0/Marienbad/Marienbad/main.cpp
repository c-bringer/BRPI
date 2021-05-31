//
//  main.cpp
//  Marienbad
//
//  Created by Corentin Bringer on 20/10/2020.
//

#include <iostream>

using namespace std;

//Prototype
void choiceMode(int choice);
void easyMode(unsigned char joueur1, unsigned char joueur2, unsigned char joueurActuel, unsigned int allumettes, unsigned int totalAllumettes);
void mediumMode(unsigned char joueur1, unsigned char joueur2, unsigned char joueurActuel, unsigned int allumettes, unsigned int totalAllumettes);
void hardMode(unsigned char joueur1, unsigned char joueur2, unsigned char joueurActuel, unsigned int allumettes, unsigned int totalAllumettes);
int choiceAllumettes(int totalAllumettes, int allumettes, int allumettesJ2);
void displayResult(unsigned char joueur);

int main(int argc, const char * argv[])
{
    unsigned short choice = 0;
    
    cout << "Quel mode de jeu voulez-vous ?" << endl;
    cout << "Easy: 1" << endl;
    cout << "Medium: 2" << endl;
    cout << "Hard: 3" << endl;
    cin >> choice;
    
    choiceMode(choice);
    
    return 0;
}

void choiceMode(int choice)
{
    unsigned char joueur1 = 'c'; //'c' for computer
    unsigned char joueur2 = 'y'; //'y' for you
    unsigned char joueurActuel = joueur1; //Définition du joueur actuel sur "c"
    unsigned int allumettes = 0;
    unsigned int totalAllumettes = 16;
    
    switch (choice) {
        case 1:
            easyMode(joueur1, joueur2, joueurActuel, allumettes, totalAllumettes);
            break;
        case 2:
            mediumMode(joueur1, joueur2, joueurActuel, allumettes, totalAllumettes);
            break;
        case 3:
            hardMode(joueur1, joueur2, joueurActuel, allumettes, totalAllumettes);
            break;
        default:
            break;
    }
}

void easyMode(unsigned char joueur1, unsigned char joueur2, unsigned char joueurActuel, unsigned int allumettes, unsigned int totalAllumettes)
{
    // La partie s'arrête lorsqu'il n'y a plus d'allumettes
    while(totalAllumettes > 0) {
        cout << endl << "Il reste " << totalAllumettes << " allumettes" << endl;
        
        if(joueurActuel == 'c') {
            cout << endl << "L'ordinateur joue.";
        } else {
            cout << endl << "A toi de jouer.";
        }
        
        do {
            if(joueurActuel == 'c') {
                allumettes = rand() % 3 + 1;
                cout << endl << "L'ordinateur retire " << allumettes << " allumettes" << endl;
            } else {
                cout << endl <<  "Combien d'allumettes voulez-vous retirer : ";
                cin >> allumettes;
            }
            
        } while (allumettes < 1 || allumettes > 3 || allumettes > totalAllumettes);
        
        totalAllumettes -= allumettes;
        
        //Change le tour de role du joueur
        if (joueurActuel == joueur1) {
            joueurActuel = joueur2;
        } else {
            joueurActuel = joueur1;
        }
    }
    
    //Affiche le joueur qui a perdu et qui a gagne
    displayResult(joueurActuel);
}

void mediumMode(unsigned char joueur1, unsigned char joueur2, unsigned char joueurActuel, unsigned int allumettes, unsigned int totalAllumettes)
{
    // La partie s'arrête lorsqu'il n'y a plus d'allumettes
    while(totalAllumettes > 0) {
        cout << endl << "Il reste " << totalAllumettes << " allumettes" << endl;
        
        if(joueurActuel == 'c') {
            cout << endl << "L'ordinateur joue.";
        } else {
            cout << endl << "A toi de jouer.";
        }
        
        do {
            if(joueurActuel == 'c') {
                if(totalAllumettes <= 4) {
                    switch(totalAllumettes) {
                        case 4:
                            allumettes = 3;
                            break;
                        case 3:
                            allumettes = 2;
                            break;
                        case 2:
                            allumettes = 1;
                            break;
                        case 1:
                            allumettes = 1;
                            break;
                    }
                    cout << endl << "L'ordinateur retire " << allumettes << " allumettes" << endl;
                } else {
                    allumettes = rand() % 3 + 1;
                    cout << endl << "L'ordinateur retire " << allumettes << " allumettes" << endl;
                }
            } else {
                cout << endl <<  "Combien d'allumettes voulez-vous retirer : ";
                cin >> allumettes;
            }
            
        } while (allumettes < 1 || allumettes > 3 || allumettes > totalAllumettes);
        
        totalAllumettes -= allumettes;
        
        //Change le tour de role du joueur
        if (joueurActuel == joueur1) {
            joueurActuel = joueur2;
        } else {
            joueurActuel = joueur1;
        }
    }
    
    //Affiche le joueur qui a perdu et qui a gagne
    displayResult(joueurActuel);
}

void hardMode(unsigned char joueur1, unsigned char joueur2, unsigned char joueurActuel, unsigned int allumettes, unsigned int totalAllumettes)
{
    unsigned int allumettesJ2 = 0;
    
    // La partie s'arrête lorsqu'il n'y a plus d'allumettes
    while(totalAllumettes > 0) {
        cout << endl << "Il reste " << totalAllumettes << " allumettes" << endl;
        
        if(joueurActuel == 'c') {
            cout << endl << "L'ordinateur joue.";
        } else {
            cout << endl << "A toi de jouer.";
        }
        
        do {
            if(joueurActuel == 'c') {
                allumettes = choiceAllumettes(totalAllumettes, allumettes, allumettesJ2);
            } else {
                cout << endl <<  "Combien d'allumettes voulez-vous retirer : ";
                cin >> allumettes;
            }
            
        } while(allumettes < 1 || allumettes > 3 || allumettes > totalAllumettes);
        
        totalAllumettes -= allumettes;
        allumettesJ2 = allumettes;
        
        //Change le tour de role du joueur
        if (joueurActuel == joueur1) {
            joueurActuel = joueur2;
        } else {
            joueurActuel = joueur1;
        }
    }
    
    //Affiche le joueur qui a perdu et qui a gagne
    displayResult(joueurActuel);
}

int choiceAllumettes(int totalAllumettes, int allumettes, int allumettesJ2)
{
    if(totalAllumettes <= 4) {
        switch(totalAllumettes) {
            case 4:
                allumettes = 3;
                break;
            case 3:
                allumettes = 2;
                break;
            case 2:
                allumettes = 1;
                break;
            case 1:
                allumettes = 1;
                break;
        }
        cout << endl << "L'ordinateur retire " << allumettes << " allumettes" << endl;
    } else if(totalAllumettes == 16) {
        allumettes = rand() % 3 + 1;
    } else {
        switch (allumettesJ2) {
            case 1:
                allumettes = 3;
                break;
            case 2:
                allumettes = 2;
                break;
            case 3:
                allumettes = 1;
                break;
            default:
                allumettes = 1;
                break;
        }
        cout << endl << "L'ordinateur retire " << allumettes << " allumettes" << endl;
    }
    
    return allumettes;
}

void displayResult(unsigned char joueur)
{
    if (joueur == 'c') {
        cout << endl << "Tu as perdu, l'ordinateur a gagne !";
    } else {
        cout << endl << "L'ordinateur a perdu, tu as gagne !";
    }
}
