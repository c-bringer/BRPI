//
//  main.cpp
//  Ex6
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>
#include <string>

using namespace std;

int multipleDe2(int nb);
int multipleDe3(int nb);
int multipleDe5(int nb);
int multipleDe7(int nb);

int main(int argc, const char * argv[]) {
    int nb = 0;
    
    cout << "Saisir nombre:";
    cin >> nb;
    
    //Divisible par 2
    if(multipleDe2(nb) == 1) {
        cout << "Il est pair" << endl;
    }
    
    //Divisible par 3
    if(multipleDe3(nb) == 0) {
        cout << "Divisible par 3" << endl;
    }
    
    //Divisible par 5
    if(multipleDe5(nb) == 0 || multipleDe5(nb) == 5) {
        cout << "Divisible par 5" << endl;
    }
    
    //Divisible par 6
    if(multipleDe2(nb) == 1 && multipleDe3(nb) == 0) {
        cout << "Divisible par 6" << endl;
    }
    
    //Divisible par 7
    if(multipleDe7(nb) == 1) {
        cout << "Divisible par 7" << endl;
    }
    
    //Divisible par 10
    if(nb % 10 == 0) {
        cout << "Divisible par 10" << endl;
    }
    
    return 0;
}

int multipleDe2(int nb)
{
    int returnValue = 0;
    
    switch(nb % 10) {
        case 0:
            returnValue = 1;
            break;
        case 2:
            returnValue = 1;
            break;
        case 4:
            returnValue = 1;
            break;
        case 6:
            returnValue = 1;
            break;
        case 8:
            returnValue = 1;
            break;
        default:
            returnValue = 0;
            break;
    }
    
    return returnValue;
}

int multipleDe3(int nb)
{
    string str = to_string(nb);
    int n = str.length();
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += (str[i]-'0');
    }
    
    return nb % 3;
}

int multipleDe5(int nb)
{
    return nb % 10;
}

int multipleDe7(int nb)
{
    int returnValue = 0;
    
    if(nb == 0 || nb == 7) {
        returnValue = 1;
    }
    
    return returnValue;
}
