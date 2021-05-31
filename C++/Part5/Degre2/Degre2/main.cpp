//
//  main.cpp
//  Degre2
//
//  Created by Corentin Bringer on 23/10/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    double a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0;
    double delta = 0;
    
    cout << "Saisir a:";
    cin >> a;
    cout << "Saisir b:";
    cin >> b;
    cout << "Saisir c:";
    cin >> c;
    
    if(a != 0) {
        delta = (b * b) - (4 * a * c);
        
        if(delta < 0) {
            cout << "Pas possible" << endl;
        } else {
            if(delta == 0) {
                x1 = -b / (2 * a);
                cout << "Une solution: " << x1 << endl;
            } else {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                
                cout << "Deux solutions, " << x1 << " et " << x2 << endl;
            }
        }
    } else {
        cout << "Il ne s'agit pas d'une equation de second degre" << endl;
    }
    
    return 0;
}
