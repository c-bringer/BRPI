//
//  main.cpp
//  Ex4
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>

using namespace std;

char operat = '+';
int calcul(int number1, int number2);

int main(int argc, const char * argv[]) {
    int number1 = 0;
    int number2 = 0;
    
    cout << "Saisir nombre 1:";
    cin >> number1;
    cout << "Saisir nombre 2:";
    cin >> number2;
    cout << "Saisir operateur:";
    cin >> operat;
    
    cout << "Le resultat est " << calcul(number1, number2) << endl;
    
    return 0;
}

int calcul(int number1, int number2)
{
    int result = 0;
    
    switch(operat) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if(number2 == 0) {
                result = 0;
            } else {
                result = number1 / number2;
            }
            break;
        case '%':
            result = number1 % number2;
            break;
        default:
            result = number1 + number2;
            break;
    }
    
    return result;
}
