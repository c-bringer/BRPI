//
//  main.cpp
//  Average
//
//  Created by Corentin Bringer on 23/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    //init var
    double note = 0;
    double noteMax = 0;
    double noteMin = 20;
    unsigned short nbNote = 0;
    unsigned short nbNoteMax = 0;
    unsigned short nbNoteMin = 0;
    double moyenne = 0;
    
    
    //Sasie des notes
    while(note != -1) {
        cout << "Veuillez entrer une note comprise entre 0 et 20 (-1 pour mettre fin à la saisie).";
        cin >> note;
        
        if(note >= 0 && note <= 20) {
            //Assignation note max
            if(note > noteMax) {
                noteMax = note;
                nbNoteMax = 1;
            }else if(note == noteMax) {
                nbNoteMax++;
            }
            
            //Assignation note min
            if(note < noteMin) {
                noteMin = note;
                nbNoteMin = 1;
            } else if(note == noteMin) {
                nbNoteMin++;
            }
            
            moyenne += note;
            
            nbNote++;
        }
    }
    
    //Calcul moyenne
    moyenne = moyenne / nbNote;
    
    //Afichage
    cout << endl << "Note max: " << noteMax << " " << nbNoteMax << " fois" << endl;
    cout << endl << "Note min: " << noteMin << " " << nbNoteMin << " fois" << endl;
    cout << endl << "Moyenne: " << moyenne << endl;
    
    return 0;
}
