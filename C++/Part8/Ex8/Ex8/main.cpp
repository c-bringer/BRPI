//
//  main.cpp
//  Ex8
//
//  Created by Corentin Bringer on 24/11/2020.
//

#include <iostream>

using namespace std ;

int main()
{
    char * adr = "bonjour" ; /* 1 */
    
    int i ;
    for (i=0 ; i<3 ; i++) cout << adr[i] ; /* 2 */
    cout << "\n" ;
    i = 0 ;
    while (adr[i]) cout << adr[i++] ; /* 3 */
    
    return 0;
}
