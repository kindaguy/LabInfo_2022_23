#include <iostream>
#include "acaso.h"

//NOTA: siccome libstatTama.h include a sua volta libArray.h (guardate libstatTama.h)
//se non avessimo messo gli #ifndef in libstatTama.h avremmo, al netto, copia-incollato
//due volte libArray.h....e questo avrebbe fatto arrabbiare non poco il compilatore!
//Infatti avremmo trovato le dichiarazioni delle funzioni elencate in libArray.h due volte!!!!
#include "libArray.h"
#include "libstatTama.h"

//NOTA: le "barriere" implementate dall'ifndef non le abbiamo mai usate in modo esplicito
//perche' le funzioni di libreria standard (come iostream.h, fstream.h ecc...) gia` le usano.


#define NN 6

int main(){

   float vettFloat[NN];

   initRand();

   for(int i=0; i< NN; i++)
      vettFloat[i] = acaso(0.f,1.f);

   stampa(vettFloat,NN);

   cout << endl << "Minimo: " << minimo(vettFloat,NN) << endl;
   cout << endl << "Massimo: " << massimo(vettFloat,NN) << endl;
   cout << endl << "Mediana: " << mediana(vettFloat,NN) << endl;

   sortArray(vettFloat,NN);

   stampa(vettFloat,NN);

   

   
   return 0;
}