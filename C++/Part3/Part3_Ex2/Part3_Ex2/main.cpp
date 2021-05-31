//
//  main.cpp
//  Part3_Ex2
//
//  Created by Corentin Bringer on 22/10/2020.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string prenom = "";
    unsigned short age = -1;
    
    string &prenomRef = prenom;
    unsigned short &ageRef = age;
    
    cout << "Bonjour, comment vous appelez-vous ?" << endl;
    cin >> prenomRef;
    cout << endl << "Quel age avez-vous ?" << endl;
    cin >> ageRef;
    cout << endl << "Vous vous appelez " << prenomRef << " et vous avez " << ageRef << " ans.";
    
    return 0;
}
