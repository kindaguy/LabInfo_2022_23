#ifndef ACASO_H
#define ACASO_H

#include <cstdlib>
#include <ctime>

//Inizializza il seme usando il tempo
void initRand();


//Restituisce numero intero a caso tra min e max
//estremi incusi
int acaso(int min, int max);

//Restutuisce un numero float a caso tra min e max
float acaso(float min,float max);

//Restutuisce un numero double a caso tra min e max
double acaso(double min,double max);

#endif