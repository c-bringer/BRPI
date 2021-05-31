//
//  main.cpp
//  Ex3
//
//  Created by Corentin Bringer on 20/11/2020.
//

#include <iostream>

using namespace std ;

int main()
{
    int t[4] = {10, 20, 30, 40} ;
    int * ad [4] ;
    int i ;
    
    for (i=0 ; i<4 ; i++) ad[i] = t+i ; /* 1 */
    for (i=0 ; i<4 ; i++) cout << * ad[i] << " " ; /* 2 */ // 10 20 30 40
    
    cout << "\n" ;
    cout << * (ad[1] + 1) << " " << * ad[1] + 1 << "\n" ; /* 3 */ //30 21
    
    return 0;
}
