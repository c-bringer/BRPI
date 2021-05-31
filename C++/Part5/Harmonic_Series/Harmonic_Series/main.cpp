//
//  main.cpp
//  Harmonic_Series
//
//  Created by Corentin Bringer on 23/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short nb = 0;
    double sum = 0;
    
    cout << "Saisir nb:";
    cin >> nb;
    
    for(double i = 1; i <= nb; i++) {
        sum = sum + 1 / i;
    }
    
    cout << sum;
    
    return 0;
}
