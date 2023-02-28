//
// Created by gueas on 28/02/2023.
//

#include <iostream>

using namespace std;

int main()
{
    // OR operators ||
    // AND operators &&

    int eta;
    int sold;
    int compagni;

    cout << "Inserisci la tua eta'" << endl;
    cin >> eta;

    cout << "Indica il tuo attuale valore finanziario" << endl <<endl;
    cin >> sold;

    //if( eta >= 4 && eta <= 24){
    //  cout << "Sei autorizzato per procedere." << endl;
    //} else
      //cout << "Non sei autorizzato per procedere." << endl;


    if (sold > 1000 && eta > 18){
        cout << "Sei quasi pronto..." << endl <<endl;

        cout << "Con quanti compagni sei?" << endl;
        cin >> compagni;

        if (compagni > 3){
            cout << "Questo non e' permesso" << endl;
        } else{
            cout << "Bravo puoi andare!" << endl;
        }

    } else {
        cout << "Non puoi entrare in albergo." << endl;}
}

