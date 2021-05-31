//
//  main.cpp
//  Ex7
//
//  Created by Corentin Bringer on 18/11/2020.
/*
 - Ecrire un programme qui demande à l’utilisateur de saisir la taille de 2 matrices bidimensionnelles,
 puis qui demande à l’utilisateur de remplir entièrement ces 2 matrices, avant d’afficher une matrice
 contenant la multiplication de chaque élément de même adresse.
 
 - On écrira les fonctions suivantes :
 « lireMatrice » chargée d’afficher les questions et de récupérer le contenu des 2 matrices
 « multiplicationMatrice » chargée de multiplier le contenu des 2 matrices
 « afficheMatrice » chargée d’afficher le résultat
 */

#include <iostream>

using namespace std;

void enterData(int firstMatrix[][10], int secondMatrix[][10], int row, int column);
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int row, int column);
void display(int mult[][10], int row, int column);

int main()
{
    int row, column, i, j, k;

    cout << "Enter rows and column for first matrix: ";
    cin >> row >> column;
    
    int firstMatrix[row][column], secondMatrix[row][column], mult[row][column];

    // Function to take matrices data
    enterData(firstMatrix, secondMatrix, row, column);

    // Function to multiply two matrices.
    multiplyMatrices(firstMatrix, secondMatrix, mult, row, column);

    // Function to display resultant matrix after multiplication.
    display(mult, row, column);

    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int row, int column)
{
    int i, j;
    
    cout << endl << "Enter elements of matrix 1:" << endl;
    
    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j) {
            cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
            cin >> firstMatrix[i][j];
        }
    }

    cout << endl << "Enter elements of matrix 2:" << endl;
    
    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j) {
            cout << "Enter elements b" << i + 1 << j + 1 << ": ";
            cin >> secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int row, int column)
{
    int i, j, k;

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j) {
            mult[i][j] = 0;
        }
    }

    // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j)
        {
            for(k=0; k < column; ++k) {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10], int row, int column)
{
    int i, j;

    cout << "Output Matrix:" << endl;
    
    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j) {
            cout << mult[i][j] << " ";
            if(j == column - 1)
                cout << endl << endl;
        }
    }
}
