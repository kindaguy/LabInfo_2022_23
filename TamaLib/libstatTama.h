//Inclusione degli strumenti necessari alla libreria

#include <cmath>

using namespace std;


//Dichiarazione delle funzioni/procedure di libreria

float media(float*, int);
float devstd(float *, int);
float minimo(float *, int);
float massimo(float *, int);

//linReg2 calcola (spero ;-) ) i parametri della retta di regressione
//La funzione esporta i parametri calcolati tramite variabili 
//passate per riferimento

void linReg2(float x[],float y[], int dim, float * p_alpha, float * p_beta);

