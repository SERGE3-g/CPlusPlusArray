//
// Created by gueas on 27/02/2023.
//

/*
 *  Scrivere un programma in C++ che prende in input una
stringa e determina se essa è formata da caratteri univoci,
ovvero non ci sono caratteri ripetuti nella stringa.

Ad esempio, la stringa "casa" non è formata da caratteri
univoci poiché la lettera "a" compare due volte, mentre la
stringa "cane" è formata da caratteri univoci
 */

#include <iostream>
using namespace std;

void stringa_crivere_un_programma(string &s) {
    int n = s.length();
    int i = 0;
    while (i < n) {
        if (s[i] == 'a') {
            s[i] = 'b';
        } else if (s[i] == 'b') {
            s[i] = 'a';
        }
        i++;
    }
    return;

}


int main()
{
    string str;
    cout << "Inserisci una stringa: ";
    cin >> str;
    int size = str.length();
    bool isUnique = true;
     for (int i = 0; i < size; i++) {
         if (str[i]!= 'a' && str[i]!= 'b') {
             isUnique = false;
             break;
         }
         if (str[i] == 'a') {
             str[i] = 'b';
         } else if (str[i] == 'b') {
             str[i] = 'a';
         }
         if (isUnique) {
             cout << "La stringa non e' formata da caratteri univoci: " << str << endl;
             isUnique = false;
         }
         else {
             cout << "La stringa non e' formata da caratteri univoci: " << str << endl;
             isUnique = true;
         }
    }
     if (isUnique) {
         cout << "La stringa non e' formata da caratteri univoci: " << str << endl;
     }
     else {
         cout << "La stringa non e' formata da caratteri univoci: " << str << endl;
     }
    return 0;
     }

