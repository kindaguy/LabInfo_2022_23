#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct puntoR2{

    double x;
    double y;
};

//Funzione che verifica se il puntoR2 passato (primo parametro)
//e`  all'interno di una circonferenza di raggio r(secondo parametro)
bool isIn(puntoR2, double);

int main(){

    ifstream in;
    int conta = 0;
    puntoR2 appo;

    puntoR2 *vpunti;

    int contaDentro = 0;

    in.open("puntiPiano.dat");

    if(in.fail()){
        cout << endl <<"Problema apertura file dati!";
        return -1;
    }

    //Conteggio dati:

    //prima lettura fuori dal ciclo
    in >> appo.x >> appo.y;

    while(!in.eof()){
        //Elaboro dato.
        conta++;

        //Lettura dato successivo
        in >> appo.x >> appo.y;
        
    }

    //Ho contato i dati.

    cout << endl << "Punti descritti sul file: " << conta << endl;

    in.close();

    //Debug
    // appo.x = 1;
    // appo.y = 1;

    // if(isIn(appo,1))
    //     cout << endl <<"dentro" << endl;
    // else
    //     cout << endl <<"fuori" << endl;

    //Alloco dinamicamente il vettore dei punti.
    vpunti = new puntoR2[conta];

    in.open("puntiPiano.dat");

    for(int i=0; i<conta; i++)
        in >> vpunti[i].x >> vpunti[i].y;

    in.close();


    cout << endl << "Stampa primi 5 punti..." << endl;
    for(int i=0; i<5; i++)
        cout << endl << "x: " << vpunti[i].x << "; y:  " << vpunti[i].y;


    cout << endl << "Stampa ultimi 5 punti..." << endl;
    for(int i=conta-5; i<conta; i++)
        cout << endl << "x: " << vpunti[i].x << "; y:  " << vpunti[i].y;

    cout << endl;

    //Contiamo i punti interni alla circonferenza assegnata

    for(int i=0; i<conta; i++){
        
        if( isIn(vpunti[i],1) )
        
            contaDentro++;
    }

    cout << endl << "Punti dentro alla circonferenza: " << contaDentro << endl;

    return 0;
}

bool isIn(puntoR2 p, double r){

    if(pow(p.x,2)+pow(p.y,2) <= pow(r,2) )
        return true;
    else 
        return false;

}