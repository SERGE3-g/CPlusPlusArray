//
// Created by gueas on 27/02/2023.
//

/*
 * Scrivi un programma che, dato un array di interi, calcoli la
somma degli elementi pari e degli elementi dispari in
due cicli separati. Il programma deve poi stampare a
schermo le somme ottenute.

Esempio:
Input: [3, 5, 2, 8, 9, 4]
 Output: Somma degli elementi pari: 14
 Somma degli elementi dispari: 17
 */
#include <stdio.h>
#include <iostream>

using namespace std;

// Function per stampare array
int main() {
    int array[6] = {3, 5, 2, 8, 9, 4};
    int sommaPari = 0;
    int sommaDispari = 0;
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sommaPari += array[i];
        } else {
            sommaDispari += array[i];
        }

    }
    cout << "Somma degli elementi pari: " << sommaPari << endl;// Somma degli elementi pari: 14
    cout << "Somma degli elementi dispari: " << sommaDispari << endl; // Somma degli elementi dispari: 17


    return 0;
}