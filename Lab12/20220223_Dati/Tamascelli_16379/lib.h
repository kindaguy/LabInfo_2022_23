#ifndef LIBTAMA_H
#define LIBTAMA_H

#include <iostream>
#include <fstream>

using namespace std;

struct walker {
    int x; // ascissa iniziale del dispositivo
    int y; // ordinata iniziale del dispositivo
    int n; // numero mosse della simulazione
    char *moves; // array delle n mosse (n caratteri)
    bool s; // true: dispositivo messaggero, false: altrimenti
};

//Funzione di caricamento dei walker da file
//restituisce il vettore dei walker gia`  riempito
//Parametri:
//nomefile: nome del file
//nWalkers: numero di walkers
//nMoves: numero di mosse

walker * caricaWalker(const char nomefile[], int nWalkers, int nMoves);
void stampaWalker(walker w);
int contaMessaggeri(waler *w, int nWalkers);
#endif