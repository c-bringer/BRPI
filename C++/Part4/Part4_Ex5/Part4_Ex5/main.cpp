//
//  main.cpp
//  Part4_Ex5
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned short age = -1;
    
    cout << "Saisir age:";
    cin >> age;
    
    cout << "L'annee prochaine, vous aurez " << ++age << "ans !";
    
    return 0;
}
