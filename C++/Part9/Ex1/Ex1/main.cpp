//
//  main.cpp
//  Ex1
//
//  Created by Corentin Bringer on 25/11/2020.
/*
 Ecrire un programme qui demande le nombre d’élèves à l’utilisateur, puis qui demande et récupère
 la saisie des informations nécessaires pour remplir le tableau et le complète.
 Enfin le programme viendra afficher la liste des élèves ainsi que leurs informations.
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    struct date {
        int jour;
        int mois;
        int annee;
    };
    
    struct personne {
        string prenom;
        string nom;
        struct date naissance;
    };
    
    int classeSize = 0;
    
    cout << "nombre eleve:";
    cin >> classeSize;
    
    struct personne classe[classeSize];
    
    for(int i = 0; i < classeSize; i++) {
        cout << "prenom:";
        cin >> classe[i].prenom;
        
        cout << "nom:";
        cin >> classe[i].nom;
        
        cout << "jour naissance:";
        cin >> classe[i].naissance.jour;
        
        cout << "mois naissance:";
        cin >> classe[i].naissance.mois;
        
        cout << "annee naissance:";
        cin >> classe[i].naissance.annee;
    }
    
    for(int i = 0; i < classeSize; i++) {
        cout << classe[i].prenom << " " << classe[i].nom << " né le " << classe[i].naissance.jour << "/" << classe[i].naissance.mois << "/" << classe[i].naissance.annee << endl;
    }
    
    return 0;
}
