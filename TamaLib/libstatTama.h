//Questo costrutto serve per evitare il copia-incolla duplicato.
//In pratica: in fase di pre-processore (direttiva #ifndef) si controlla se
//una certa costante (qui LIBSTATTAMA_H) NON e` stata precedentemente (if-not-def) definita.
//Se la risposta e` VERO (ovvero la costante NON e` stata definita) si definisce la costante.
//altrimenti tutto cio` che e` tra #ifndef e #endif (guardate in fondo al file)
//viene ignorato.

//In questo modo si evitano gli #include incorciati.


#ifndef LIBSTATTAMA_H
#define LIBSTATTAMA_H

//Inclusione degli strumenti necessari alla libreria

#include <cmath>
//Serve per mediana
#include "libArray.h"

using namespace std;

/*La libreria fornisce strumenti per la determinazione di statistiche di base.
*media
*deviazione standard del campione
*deviazione standard campionaria (stimatore corretto della deviazione standard)
*minimo
*massimo
*mediana: se vettore lunghezza dispari: elemento di mezzo, altrimenti media elementi centrali.
*coefficienti di regressione lineare
*Queste funzionalità vengono messe a disposizione per array di int, float, double.
*Gli ALGORITMI possono essere estesi naturalmente ad array di struct generiche, aventi
*un campo chiave (key) di elementi di un insieme completamente ordinato.
*/
//Dichiarazione delle funzioni/procedure di libreria

float media(float*, int);
//Stimatore corretto devStd
float devstd(float *, int);
//Deviazione standard del campione
float devstdCamp(float *, int);

float minimo(float *, int);
float massimo(float *, int);
float mediana(float *, int);

//Elimina dal vettore di float v contenente 
//dim elementi tutti gli outliers (definiti come al solito)
int clean_out(float *v, int dim);


//linReg2 calcola (spero ;-) ) i parametri della retta di regressione
//La funzione esporta i parametri calcolati tramite variabili 
//passate per riferimento

void linReg2(float x[],float y[], int dim, float * p_alpha, float * p_beta);


//questo #endif chiude l'#ifndef ad inizio file.
#endif