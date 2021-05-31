//
//  main.cpp
//  Ex5
//
//  Created by Corentin Bringer on 20/11/2020.
//

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int t [5][5];
    cout << "t : " << t << endl;
    cout << "&t : " << &t << endl;
    cout << "&t[0][0] : " << &t[0][0] << endl;
    cout << "t[0] : " << t[0] << endl;
    cout << "&t[0] : " << &t[0] << endl;
    cout << endl;
    cout << "t+2 : " << t+2 << endl;
    cout << "****&t+1 : " << &t+1 << endl; //****
    cout << "****&t+2 : " << &t+2 << endl; //****
    cout << "****&t+3 : " << &t+3 << endl; //****
    cout << "****&t+4 : " << &t+4 << endl; //****
    cout << "&t[0][2] : " << &t[0][2] << endl;
    cout << "&t[2][0] : " << &t[2][0] << endl;
    cout << "t[2] : " << t[2] << endl;
    cout << "&t[2] : " << &t[2] << endl;
    cout << endl;
    return 0;
}
