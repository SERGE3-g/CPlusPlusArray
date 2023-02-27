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

#include <iostream>

using namespace std;

int main() {
    int array[6] = {3, 5, 2, 8, 9, 4};
    int sommaPari = 0;
    int sommaDispari = 0;
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sommaPari += array[i];
            sommaDispari += array[i];
            cout << sommaPari << " " << sommaDispari << endl;
        } else {
            sommaDispari += array[i];
        }
        for (int j = i + 1; j < size; j++) {
            if (array[j] % 2 == 0) {
                sommaPari += array[j];
                sommaDispari += array[j];
                cout << sommaPari << " " << sommaDispari << endl;
            }

        }

        cout << "Somma degli elementi pari: " << sommaPari << endl;
        cout << "Somma degli elementi dispari: " << sommaDispari << endl;
        return 0;
    }
}