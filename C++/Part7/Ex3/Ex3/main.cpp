//
//  main.cpp
//  Ex3
//
//  Created by Corentin Bringer on 18/11/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float tab1[10], tab2[10];
    
    for(int i = 0; i < 10; i++) {
        cout << "Saisir nombre:";
        cin >> tab2[i];
    }
    
    for(int i = 0; i < 10; i++) {
        tab1[i] = tab2[i];
    }
    
    for(int i = 0; i < 10; i++) {
        cout << tab1[i] << " - ";
    }
    
    return 0;
}
