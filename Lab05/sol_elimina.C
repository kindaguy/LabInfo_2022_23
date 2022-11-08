/*Esempio ciclo Spoletini per caricamento da file.
Implementazione eliminaShift e eliminaSwap (vedi Lab4_bis)*/

#include <iostream>
#include <fstream>

//Uso una costante per definire la dimensione 
//dell'array
#define DIM_MAX 300

using namespace std;

int caricaDatiFile(char [], float [], int);

int eliminaSwap(float [], int, int);
int eliminaShift(float [], int, int);



int main(){

   float data[DIM_MAX];

   //Qui registro il numero di dati caricati da file.

   int samplesize;

   int newsize;

   int posEl;

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

   cout << endl <<"Posizione elemento da eliminare: ";
   cin >> posEl;

   newsize = eliminaShift(data,posEl,samplesize);
   cout << endl << "nuova dimensione: " << newsize << endl;
   cout << endl << "Stampo dati: " << endl;
   //Stampo volutamente anche gli elementi non piu` validi per mostrare il comportamento
      for(int i=0; i< samplesize; i++){
         cout << endl << data[i];
      }

   
   cout << endl <<"Posizione elemento da eliminare: ";
   cin >> posEl;

   newsize = eliminaSwap(data,posEl,newsize);
   cout << endl << "nuova dimensione: " << newsize << endl;
   cout << endl << "Stampo dati: " << endl;
   //Stampo volutamente anche gli elementi non piu` validi per mostrare il comportamento
      for(int i=0; i< samplesize; i++){
         cout << endl << data[i];
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


int eliminaSwap(float v[], int pos, int ndati){

   if(pos >=0 and pos < ndati){

      v[pos] = v[ndati-1];
      return ndati-1;

   }
   else{
      cout << endl << "Eliminaswap: posizione fuori range!\n";  
      return -1;
   }
}

int eliminaShift(float v[], int pos, int ndati){
   if(pos >=0 and pos < ndati){
      for(int i = pos; i<ndati-1; i++){
         //Sposto tutti gli elementi a dx di pos di una posizione a sx.
         //v[pos] = v[pos+1];
         //v[pos+1] = v[pos+2]
         //...
         //v[ndati-2] = v[ndati-1]
         v[i] = v[i+1];
      }
      
      return ndati-1;

   }
   else{
      cout << endl << "Eliminaswap: posizione fuori range!\n";  
      return -1;
   }

}

