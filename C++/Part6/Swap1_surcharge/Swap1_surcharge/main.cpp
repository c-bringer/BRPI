//
//  main.cpp
//  Swap1
//
//  Created by Corentin Bringer on 26/10/2020.
//

#include <iostream>

using namespace std;

void swap1(int nb1, int nb2);
void swap2(double nb3, double nb4);
void swap3(char ch1, char ch2);

int main(int argc, const char * argv[])
{
    int nb1 = 0;
    int nb2 = 0;
    double nb3 = 0;
    double nb4 = 0;
    char ch1;
    char ch2;
    
    cout << "Saisir int 1:";
    cin >> nb1;
    cout << "Saisir int 2:";
    cin >> nb2;
    
    cout << "Saisir double 1:";
    cin >> nb3;
    cout << "Saisir double 2:";
    cin >> nb4;
    
    cout << "Saisir char 1:";
    cin >> ch1;
    cout << "Saisir char 2:";
    cin >> ch2;
    
    cout << endl << "nb1: " << nb1 << endl << "nb2: " << nb2 << endl;
    cout << endl << "nb3: " << nb3 << endl << "nb4: " << nb4 << endl;
    cout << endl << "ch1: " << ch1 << endl << "ch2: " << ch2 << endl;

    
    swap1(nb1, nb2);
    swap2(nb3, nb4);
    swap3(ch1, ch2);
    
    return 0;
}

void swap1(int nb1, int nb2)
{
    int temp = 0;
    
    temp = nb1;
    nb1 = nb2;
    nb2 = temp;
    
    cout << endl << "swap nb1: " << nb1 << endl << "swap nb2: " << nb2 << endl;

}

void swap2(double nb1, double nb2)
{
    double temp = 0;
    
    temp = nb1;
    nb1 = nb2;
    nb2 = temp;
    
    cout << endl << "swap nb3: " << nb1 << endl << "swap nb4: " << nb2 << endl;

}

void swap3(char ch1, char ch2)
{
    char temp;
    
    temp = ch1;
    ch1 = ch2;
    ch2 = temp;
    
    cout << endl << "swap ch1: " << ch1 << endl << "swap ch2: " << ch2 << endl;

}
