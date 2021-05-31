//
//  main.cpp
//  Time
//
//  Created by Corentin Bringer on 29/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    //Déclaration de var
    unsigned short hours = 0;
    unsigned minutes = 0;
    unsigned seconds = 0;
    
    //Boucle sur l'horloge
    for(hours = 0; hours < 60; hours++) {
        for(minutes = 0; minutes < 60; minutes++) {
            for(seconds = 0; seconds < 60; seconds++) {
                //nous sort des for
                if(hours == 4 && minutes == 5 && seconds == 37) {
                    goto display;
                }
                
                //Gestion du 0 devant les heures
                if(hours < 10) {
                    cout << "0" << hours << ":";
                } else {
                    cout << hours << ":";
                }
                
                //gestion du 0 devant les minutes
                if(minutes < 10) {
                    cout << "0" << minutes << ":";
                } else {
                    cout << minutes << ":";
                }
                
                //gestion du 0 devant les secondes
                if(seconds < 10) {
                    cout << "0" << seconds << endl;
                } else {
                    cout << seconds << endl;
                }
            }
        }
    }
    
    display:
    //Gestion du 0 devant les heures
    if(hours < 10) {
        cout << "0" << hours << ":";
    } else {
        cout << hours;
    }
    
    //gestion du 0 devant les minutes
    if(minutes < 10) {
        cout << "0" << minutes << ":";
    } else {
        cout << minutes;
    }
    
    //gestion du 0 devant les secondes
    if(seconds < 10) {
        cout << "0" << seconds << endl;
    } else {
        cout << seconds << endl;
    }

    return 0;
}
