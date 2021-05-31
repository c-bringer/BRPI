//
//  main.cpp
//  Triangle
//
//  Created by Corentin Bringer on 29/10/2020.
//

#include <iostream>

using namespace::std;

int main(int argc, const char * argv[]) {
    unsigned short nb = 0;
    
    cout << "Saisir un nombre de ligne:";
    cin >> nb;
    
    for(int i = 1; i <= nb; i++) {
        for(int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}
