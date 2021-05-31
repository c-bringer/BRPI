//
//  main.cpp
//  Ex1
//
//  Created by Corentin Bringer on 26/10/2020.
//

/**
 Rajouter le type int au main()
 Rajouter le return 0;
 Deplacer la fct() avant main()
 */

#include <iostream>

using namespace std ;

int fct(int r)
{
    return 2 * r;
}

int main()
{
    int n, p = 5;
    
    n = fct(p) ;
    cout << "p = " << p << " n = " << n ;
    
    return 0;
}
