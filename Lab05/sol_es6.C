#include <iostream>
#include <fstream>


using namespace std;

int main(){

    ifstream file_in;

    int ndati;

    float *vdati;

    file_in.open("dati_header.dat");

    if(file_in.fail()){

        cout << endl << "Problema apertura file." << endl;
        return -1;
    }

    //Se arrivo qui lo stream e` aperto e funzionante.

    file_in >> ndati;

    cout << endl << " Dati su file: " << ndati << endl;
    
    vdati = new float[ndati];

    for(int i=0; i<ndati; i++)
        file_in >>vdati[i];

    file_in.close();

    cout << endl << "Stampo dati: " << endl;
    for(int i=0; i<ndati; i++)
        cout << endl << vdati[i];

    cout << endl;
    



    return 0;
}