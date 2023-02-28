//
// Created by gueas on 28/02/2023. alle 04:18
//

#include <iostream>

using namespace std;



int main()
{
    float total;
    float x;
    float y;
    float z;

    string name;

    cout << "Buongiorno e benvenuti nell mio  programma della calcolatrice di SERGE  " << endl; //

    cout << "come ti chiami?" << endl;
    cin >> name;

    cout << "Inserisci i primi valori di calcolo" << endl;
    cin >> x;

    cout << "Inserisci i secondi valori di calcolo" << endl;
    cin >> y;

    cout << "Inserisci il terzo valore di calcolo" << endl;
    cin >> z;

    total = x + y + z;
    cout << "la somma e' : " << total << endl;

    cout << "Grazie " << name << " Per aver utilizzato SERGE. Si prega di lasciare una recensione." << endl;


}