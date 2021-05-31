//
//  main.cpp
//  Ex4
//
//  Created by Corentin Bringer on 18/11/2020.
/*
 Ecrire une fonction « squareTab » qui prend le tableau « tab » en entrée ainsi que les tailles de
 chaque dimension et qui remplit tous les éléments du tableau avec les carrés des premiers entiers
 (>=1) nécessaires. (1, 2, 3...etc. donneront 1, 4, 9...etc.)
 
 - Ecrire ensuite une fonction « additionTab » qui prend le tableau « tab » en argument ainsi que les
 tailles de chaque dimension et qui renvoi la somme de tous les éléments de tab.
 
 - Enfin, appeler ces 2 fonctions successivement (squareTab, puis additionTab) dans le « main » et
 afficher le résultat de cette somme à l’écran.
 */

#include <iostream>
#include <cmath>

using namespace std;

void squareTab(int tab[3][4]);
void additionTab(int tab[3][4]);

int main(int argc, const char * argv[]) {
    int tab[3][4];
    //{{0, 1, 2, 3}, {3, 4, 5, 6},{6, 7, 8, 9}};
    
    squareTab(tab);
    additionTab(tab);
    
    return 0;
}

void squareTab(int tab[3][4])
{
    int nb = 1;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j ++) {
            tab[i][j] = pow(nb, 2);
            nb++;
            cout << endl << tab[i][j];
        }
    }
}

void additionTab(int tab[3][4])
{
    int result = 0;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j ++) {
            result += tab[i][j];
        }
    }
    
    cout << endl << result;
}
