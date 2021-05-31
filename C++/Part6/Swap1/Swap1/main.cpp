//
//  main.cpp
//  Swap1
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>

using namespace std;

void swap(int nb1, int nb2);

int main(int argc, const char * argv[])
{
    int nb1 = 0;
    int nb2 = 0;
    
    cout << "Saisir nb1:";
    cin >> nb1;
    cout << "Saisir nb2:";
    cin >> nb2;
    
    cout << endl << "nb1: " << nb1 << endl << "nb2: " << nb2 << endl;
    
    swap(nb1, nb2);
    
    return 0;
}

void swap(int nb1, int nb2)
{
    int temp = 0;
    
    temp = nb1;
    nb1 = nb2;
    nb2 = temp;
    
    cout << endl << "swap nb1: " << nb1 << endl << "swap nb2: " << nb2 << endl;

}
