//
// Created by gueas on 28/02/2023.
//


#include <iostream>
#include <fstream>

using namespace std;

// creo i file dell'output' dell'input'

void createData(); // crea un file dell'output' dell'input'
void findData();
void deleteData();
string name;


int main()
{
    cout << "Benvenuto! Come ti chiami?" << endl;
    cin >> name;

    int perform;

    startpoint:
    cout << "Cosa vuoi fare? Per creare dati inserire 1. Per trovare dati inserire 2. Per cancellare dati inserire 3" << endl;
    cin >> perform;

    if(perform == 1){
        createData();
    }

    if (perform == 2){
        findData();
    }

    if (perform == 3){
        deleteData();
    }

    cout << "Vuoi eseguire un'altra funzione? Digita 1 per farlo, 2 per terminare il programma." << endl;
    cin >> perform;

    if (perform == 1){
        goto startpoint;
    }
    else if (perform == 2){
        goto startpoint;
    }
    else if (perform == 3){
        goto startpoint;
    }
    else{
        cout << "Per fare un'altra funzione?" << endl;
        cin >> perform;
    }
    return 0;
}


void createData(){
    ofstream writeData;

    string Nome;
    string Cognome;
    string MathsScore;
    string EnglishScore;
    string CppScore;
    string Position;

    int perform;

    writeData.open("studentDataFile.txt", ios::app);
    if(writeData.is_open() == true){

        enteringPoint:

        cout << "Qual e' il nome dello studente?" << endl;
        cin >> Nome;

        cout << "Qual e' il cognome dello studente?" << endl;
        cin >> Cognome;

        cout << "Qual e' il punteggio in matematica dello studente?" <<endl;
        cin >> MathsScore;

        cout << "Qual e' il punteggio in Inglese dello studente?" <<endl;
        cin >> EnglishScore;

        cout << "Qual e' il punteggio in Cpp dello studente" <<endl;
        cin >> CppScore;

        cout << "Qual e' la posizione dello studente?" <<endl;
        cin >> Position;

        writeData << Nome << "  " << Cognome << "  " << MathsScore  << "  " << EnglishScore << "  " <<
                  CppScore << "  " << Position << "  " << endl;

        cout << "Vuoi salvare un altro report? Digita 1 per eseguire un'altra operazione o 2 per terminare l'operazione" << endl;
        cin >> perform;

        if (perform == 1){
            goto enteringPoint;
        }
        else if (perform == 2){
            goto enteringPoint;
        }
        else if (perform == 3){
            goto enteringPoint;
        }
        else{
            cout << "Per fare un'altra funzione?" << endl;
            cin >> perform;
        }

    }else {
        cout << "Il file non è valido." << endl;
    }

    writeData.close();
    return;
};

void findData(){
    ifstream readData;
    string Nome;
    string Cognome;
    string MathsScore;
    string EnglishScore;
    string CppScore;
    string Posizione;

    int perform;

    string NomeFind;
    string CognomeFind;

    bool found = false;

    findPoint:
    found = false;
    readData.seekg(0);

    readData.open("studentiDatiFile.txt");
    if (readData.is_open ()== true){
        cout << "Qual e' il nome dello studente di cui cerchi i dati?" << endl;
        cin >> NomeFind;

        cout << "Qual e' il Cognome dello studente di cui cerchi i dati?" << endl;
        cin >> CognomeFind;

        while(readData >> Nome >> Cognome >> MathsScore >> EnglishScore >> CppScore >> Posizione){
            if (Nome == Nome && Cognome == Cognome){

                cout << "The student name is : " << Nome << "  " << Cognome << endl;
                cout << "I voti di matematica dello studente e' : " << MathsScore << endl;
                cout << "I voti di Inglese dello studente e': " << EnglishScore << endl;
                cout << "I voto in Cpp  dello studente e': " << CppScore << endl;
                cout << "La posizione dello studente e' : " << Posizione << endl;
                found =  true;
            }
        }
        if(found== false){
            cout << "I dati dello studente che cerchi non sono stati trovati." << endl;
        }

        cout << "Vuoi salvare un altro report ? Digita 1 per eseguire un'altra operazione o 2 per terminare l'operazione" << endl;
        cin >> perform;



    }else {
        cout << "Il file non e' valido." << endl;
    }

    readData.close();
    if (perform == 1){
        goto findPoint;
    }
    else if (perform == 2){
        goto findPoint;
    }
    else if (perform == 3){
        goto findPoint;
    }
    else{
        cout << "Per fare un'altra funzione?" << endl;
        cin >> perform;
    }
    return;

};

void deleteData(){
    ifstream findInfo;
    ofstream copyInfo;

    string Nome;
    string Cognome;
    string MathScore;
    string EnglishScore;
    string CppScore;
    string Posizione;

    int perform;

    string NomeDelete;
    string CognomeDelete;

    cancelpoint:

    findInfo.open("studentiDatiFile.txt");
    copyInfo.open("copyingData.txt");

    if(findInfo.is_open()){

        cout << "Inserisci il nome dello studente di cui desideri eliminare i dati." << endl;
        cin >> NomeDelete;

        cout << "Inserisci il Cognome dello studente di cui vuoi cancellare i dati." << endl;
        cin >> CognomeDelete;



        while(findInfo >> Nome >> Cognome >> MathScore >> EnglishScore >> CppScore >> Posizione){

            if (NomeDelete != Nome && CognomeDelete != Cognome){

                copyInfo << Nome << "  " << Cognome << "  " << MathScore << "  " << EnglishScore << "  " << CppScore << "  " << Posizione << endl;
            }
        }

        findInfo.close();
        copyInfo.close();

        remove("studentiDatiFile.txt");
        rename ("copyingData.txt", "studentiDatiFIle.txt");

        cout << "Vuoi eseguire un'altra operazione? Digita 1 per farlo, 2 per terminare il programma. " << endl;
        cin >> perform;

        if (perform == 1){
            goto cancelpoint;
        }
        else if (perform == 2){
            goto cancelpoint;
        }
        else if (perform == 3){
            goto cancelpoint;
        }

    }else{
        cout << "Il file non e' aperto" << endl;
    }
    return;
};
