#include <iostream>
#include <fstream>

//Uso una costante per definire la dimensione 
//dell'array
#define DIM_MAX 300

using namespace std;

/*Questa funzione carica dati razionali in singola precisione (float)
da un file di dati il cui nome viene passato come primo parametro (diciamo, nomefile).
I dati vegono registrati nel vettore di float che verrà passato 
come secondo parametro (diciamo, vdati), di dimensione pari al valore passato
come terzo parametro (diciamo, maxdati).

La funzione restituisce il numero di dati caricati
e, per side effect, i dati presenti da file saranno presenti
nel vettore passato alla funzione.*/

/*
ATTENZIONE:
Il caricamento da file lo vedremo insieme. Voi NON dovete capire
come avviene il caricamento. Quello che vi serve sapere è:
-quali informazioni devono essere passate alla funzione
-quali informazioni "restituisce la funzione"
ovvero il rapporto ingresso-uscita esibito dalla funzione.

Poi se volete guardarci dentro...fate pure....
*/

int caricaDatiFile(char [], float [], int);



int main(){

   float data[DIM_MAX];

   //Qui registro il numero di dati caricati da file.

   int samplesize;

   samplesize = caricaDatiFile("dati.dat",data,DIM_MAX);

   if(samplesize == -1){ //E` successo un pasticcio, non posso proseguire
      cout << endl << "Problema apertura file. Non posso fare altro e esco" << endl;
      return -1;
   }
   else{
      cout << endl << "Dati ricati: " << samplesize << endl;

      cout << endl << "Stampo dati: " << endl;
      for(int i=0; i< samplesize; i++){
         cout << endl << data[i];
      }

      cout << endl;
   }


   return 0;
}


int caricaDatiFile(char nomefile[], float vdati[], int maxdati){

   float appo;
   ifstream filedati;
   int conta = 0;

   filedati.open("dati.dat");

   if(filedati.fail()){

      cout << endl << "ERRORE apertura file:  " << nomefile <<"!!!" << endl;

      cout << endl <<"Sicuro che il file si trovi nella stessa cartella del programma????" << endl; 

      return -1;

   }
   else{ //Flusso dati da file aperto con successo

      filedati >> appo;

      while (!filedati.eof() and conta < maxdati ){

         vdati[conta] = appo;
         conta ++;
         filedati >> appo;
      }

   }

   filedati.close();

   return conta;

   


}
