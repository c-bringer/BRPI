//
//  main.cpp
//  Location_Imprimante
//
//  Created by Corentin Bringer on 29/10/2020.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    //Declaration var
    unsigned short const loyerImprimante1 = 149;
    double const pricePageMonochromeImprimante1 = 0.0075;
    double const pricePageCouleurImprimante1 = 0.075;
    unsigned short const loyerImprimante2 = 89;
    double const pricePageMonochromeImprimante2 = 0.019;
    double const pricePageCouleurImprimante2 = 0.11;
    
    unsigned short nbImpressionsCouleur = 0;
    unsigned short nbImpressionsMonochrome = 0;
    unsigned short totalImprimante1 = 0;
    unsigned short totalImprimante2 = 0;
    
    cout << "Saisir nombre d'impressions mensuel en couleur:";
    cin >> nbImpressionsCouleur;
    cout << "Saisir nombre d'impressions mensuel monochrome:";
    cin >> nbImpressionsMonochrome;
    
    totalImprimante1 = loyerImprimante1 + (pricePageCouleurImprimante1 * nbImpressionsCouleur) + (pricePageMonochromeImprimante1 * nbImpressionsMonochrome);
    
    totalImprimante2 = loyerImprimante2 + (pricePageCouleurImprimante2 * nbImpressionsCouleur) + (pricePageMonochromeImprimante2 * nbImpressionsMonochrome);
    
    if(totalImprimante1 > totalImprimante2) {
        cout << "L'imprimante 2 revient moins chers au mois";
    } else {
        cout << "L'imprimante 1 revient moins chers au mois";
    }
    
    return 0;
}
