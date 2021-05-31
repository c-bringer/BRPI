//
//  main.cpp
//  Part3_Ex1
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string prenom = "";
    unsigned short age = -1;
    
    cout << "Bonjour, comment vous appelez-vous ?" << endl;
    cin >> prenom;
    cout << endl << "Quel age avez-vous ?" << endl;
    cin >> age;
    cout << endl << "Vous vous appelez " << prenom << " et vous avez " << age << " ans.";
    
    return 0;
}
