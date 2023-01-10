#include <iostream>
#include <fstream>
#include "lib.h"

using namespace std;

int main(){

    ifstream file_in;

    int kk;
    int nn;
    float dd;

    walker *w;

    //Punto 1

    file_in.open("parametri.dat");
    if(file_in.fail()){
        cout << endl << "Errore apertura file parametri! Esco." << endl;
        return -1;
    }
    file_in >> kk >> nn >> dd;

    file_in.close();

    cout << endl << "Parametri simulazione caricati:" << endl;
    cout << "K = " << kk << "; n = " << nn << "; d = " << dd << endl;
    
    //Fine punto 1

    //Punto 2

    w = caricaWalker("walkers.dat",kk,nn);

    //Debug
    //for(int i=kk-1; i>kk-4; i--)
    //    stampaWalker(w[i]);
    
    return 0;


}