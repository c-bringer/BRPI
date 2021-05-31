//  PAS TERMINE
//
//  main.cpp
//  Ex5
//
//  Created by Corentin Bringer on 27/11/2020.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

struct Joueur {
    int score;
    string name;
};

int random(int a);

int main(int argc, const char * argv[]) {
    Joueur j;
    struct Joueur listeJoueurs[100];
    int nb = 0;
    int choice = -1;
 
    jouer:
        int randomNb = random(1000);

        cout << "Saisir nom joueur:" << endl;
        cin >> listeJoueurs[].name;
    
        do {
            cout << "Saisir un nombre" << endl;
            cin >> nb;
            
            if(nb == randomNb) {
                cout << "You Win" << endl;
                break;
            }
            
            if(nb > randomNb) {
                cout << "Less" << endl;
            } else {
                cout << "More" << endl;
            }
        } while(nb != randomNb);
    
    cout << "Voulez vous rejouez ? 0: Non 1: Oui" << endl;
    cin >> choice;
    
    if(choice == 1) {
        goto jouer;
    }
    
    return 0;
}

int random(int a)
{
    int randomNb(0);
    
    srand(time(0));
    randomNb = rand()% a;
    
    return randomNb;
}
