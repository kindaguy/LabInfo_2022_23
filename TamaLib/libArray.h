//Questo costrutto serve per evitare il copia-incolla duplicato.
//In pratica: in fase di pre-processore (direttiva #ifndef) si controlla se
//una certa costante (qui LIBARRAY_H) NON e` stata precedentemente (if-not-def) definita.
//Se la risposta e` VERO (ovvero la costante NON e` stata definita) si definisce la costante.
//altrimenti tutto cio` che e` tra #ifndef e #endif (guardate in fondo al file)
//viene ignorato.

//In questo modo si evitano gli #include incorciati.

#ifndef LIBARRAY_H
#define LIBARRAY_H

#include <cstring>
#include <iostream>
#include <iomanip>

using namespace std;

/*Fornisce operazioni di base per la manipolazione di un array
*stampa
*eliminazione (shift,swap) di un elemento
*ordinamento (SelectionSort)
*resize (verso l'alto e verso il basso)
*/


void stampa(float *v, int dim);
//Elimina un elemento dal vettore v, contenente dim
//elementi, in posizione pos, scambiando l'elemento
//da eliminare con l'ultimo elemento dell' array
//!!Non mantiene l'ordine relativo degli elementi
int eliminaSwap(float *v, int dim, int pos);

//Elimina un elemento dal vettore v, contenente dim
//elementi, in posizione pos, traslando a sx gli 
//elementi dell' array dalla posizione pos+1 in poi.
//!! Mantiene l'ordine relativo degli elementi

int eliminaShift(float *v, int dim, int pos);

//Ordina gli elementi in posizione 0...dim-1 di un array
void sortArray(float *v, int dim);

//Alloca un nuovo vettore di dimensione newSize
//partendo da un vettore di dimensione oldSize
//Tutti gli elementi 0...min(oldSize-1,newSize-1)
//vengono copiati nel nuovo vettore.
//La funzione elimina il vecchio vettore e restituisce
//l'indirizzo del nuovo vettore.

float *resize(float *v, int oldSize, int newSize);

#endif