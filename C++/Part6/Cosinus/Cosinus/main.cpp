//
//  main.cpp
//  Cosinus
//
//  Created by Corentin Bringer on 27/10/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

double factorielle(int k);
double sommePartielle(double x, int n);

int main(int argc, const char * argv[])
{
    int n = -1;
    int angle = -1;
    double radian = 0;
    
    do {
        cout << "Saisir une valeur n:";
        cin >> n;
        cout << "Saisir angle:";
        cin >> angle;
    } while((n < 0 || n > 170) && (angle < 0 || angle > 180));
    
    radian = (angle * M_PI) / 180;
    
    cout << sommePartielle(radian, n) << endl;
    
    return 0;
}

double factorielle(int k)
{
    double res = 1;
    
    for(int i = 1; i <= k; i++) {
        res *= i;
    }
    
    return res;
}

double sommePartielle(double x, int n)
{
    double res = 0;
    
    for(int i = 0; i <= n; i++) {
        res += (pow(-1, i) * pow(x, 2 * i)) / factorielle(2 * i);
    }
    
    return res;
}
