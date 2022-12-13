#include <fstream>
#include <iostream>

using namespace std;

//Dichiarazione del tipo myArrayFloat
struct myArrayInt{
    int size = 0;
    int used = 0;
    int *raw = NULL;
};

//Legge il contentuto di un file di dati interi e li carica
//all'interno di un myArrayInt. L'array cosi` inizializzato
//viene restituito dalla funzione.
//In caso di problemi il campo raw vale NULL

myArrayInt caricaArrayIntFile(const char nomefile[]);

//Azzera i campi della struttura, ripristinando i valori iniziali
//e deallocando il vettore raw.
void cleanMyArrayInt(myArrayInt *v);