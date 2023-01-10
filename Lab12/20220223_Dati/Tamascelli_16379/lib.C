#include "lib.h"

walker * caricaWalker(const char nomefile[], int nWalkers, int nMoves){

    walker  *vett;
    ifstream file_in;
    int appo;

    //Alloco il vettore di walker
    vett = new walker[nWalkers];

    //Apro stream in lettura
    file_in.open(nomefile);
    if(file_in.fail()){

        cout << endl <<"Problema apertura file walkers! Esco" << endl;
        return NULL;
    }

    for(int i=0; i<nWalkers; i++){//Per ogni walker

        file_in >> vett[i].x >> vett[i].y;
        vett[i].n = nMoves;
        //Alloco il vettore delle mosse
        vett[i].moves = new char[nMoves];
        //Carico le mosse da file
        for(int j=0; j<nMoves;j++)
            file_in >> vett[i].moves[j];

        file_in >> appo;
        if(appo == 1)
            vett[i].s = true;
        else
            vett[i].s = false;
    
        //O piu`  semplicemente
        //file_in >> vett[i].s;

    }

    file_in.close();
    return vett;

}

void stampaWalker(walker w){

    cout << w.x << " " << w.y << " " << w.n << "  ";
    for(int i=0; i < w.n;i++)
        cout << w.moves[i] << " ";
    
    cout << w.s << endl;

}

int contaMessaggeri(waler *w, int nWalkers){


}