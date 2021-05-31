//
//  main.cpp
//  Table_De_Multiplication
//
//  Created by Corentin Bringer on 29/10/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short multiple[10][10];
    
    //Alimente le tableau des resultats
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            multiple[i][j] = i * j;
        }
    }
    
    //Affichage tableau
    for(int i = 1; i <= 10; i++) {
        //Affiche le numéro de table sur abscisse
        if(i == 1) {
            for(int k = 1; k <= 10; k++) {
                if(k == 1) {
                    cout << '\t' << setw(2) << 'I' << '\t';
                }
                
                if(k == 10) {
                    cout << setw(3) << k << '\t';
                } else {
                    cout << setw(2) << k << '\t';
                }
                
            }
            cout << endl;
            
            //Affiche les tirets
            for(int l = 0; l < 47; l++) {
                cout << '-';
            }
            
            cout << endl;
        }
        
        //Affiche numero table ordonee
        cout << setw(2) << i << '\t' << setw(2) << 'I' << '\t';
        
        //Affiche resultat
        for(int j = 1; j <= 10; j++) {
            //cout << j << '\t';
            if(j == 10) {
                cout << setw(3) << multiple[i][j] << '\t';
            } else {
                cout << setw(2) << multiple[i][j] << '\t';
            }
        }
        cout << endl;
    }
    
    return 0;
}
