//
//  note.cpp
//  Ex2
//
//  Created by Corentin Bringer on 16/11/2020.
//

#include "note.hpp"

void grandeNote(int note[10])
{
    int max = 0;
    int compt = 0;
    
    for(int i = 0; i < 20; i++) {
        if(note[i] > max) {
            max = note[i];
            compt = 1;
        } else if(note[i] == max) {
            compt++;
        }
    }
    
    std::cout << std::endl << "la note max est " << max << " saisie " << compt << " fois" << std::endl;
}

void petiteNote(int note[10])
{
    int min = 20;
    int compt = 0;
    
    for(int i = 0; i < 20; i++) {
        if(note[i] < min) {
            min = note[i];
            compt = 1;
        } else if(note[i] == min) {
            compt++;
        }
    }
    
    std::cout << std::endl << "la note min est " << min << " saisie " << compt << " fois" << std::endl;
}

void moyenne(int note[10])
{
    int moyenne = 0;
    
    for(int i = 0; i < 20; i++) {
        moyenne += note[i];
    }
    
    moyenne = moyenne / 10;
    
    std::cout << std::endl << "la moyenne est de " << moyenne << std::endl;
}
