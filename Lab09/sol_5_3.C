#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

#include "../TamaLib/libstatTama.h"
#include "libArray.h"

using namespace std;




int main(){

   ifstream flusso_in;
   ofstream flusso_out;

   int quanti = 0; //Inizializzare SEMPRE contatori!!!!

   float appo;
   float dati[100];

   float m, devst, small, large;
   int quanti1,noutliers;

   flusso_in.open("misure1.dat");
   
   if(flusso_in.fail()){
      cout << endl << "Problema apertura file! Esco! \n";
      return -1;
   }

   cout << endl << "File aperto. Carico....";


   //Ciclo Spoletini
   flusso_in >> appo;

   
   while(!flusso_in.eof()){
      dati[quanti] = appo;
      quanti++;
      flusso_in >> appo;

   }
   flusso_in.close();
   cout << endl << "...dati caricati!\n";

   m = media(dati,quanti);
   devst = devstd(dati,quanti);
   small = minimo(dati, quanti);
   large = massimo(dati, quanti);
   quanti1 = clean_out(dati,quanti);

   //Determino il numero degli outliers
   noutliers = quanti-quanti1;
   //Aggiorno la dimensione effettiva del vettore ripulito
   quanti = quanti1;

   //Stampe
   cout << endl << "Media: " << m;
   cout << endl << "Deviazione standard: " << devst;
   cout << endl << "Minimo: " << small;
   cout << endl << "Massimo: " << large;
   cout << endl << "Numero outliers: " << noutliers;

   cout << endl << "Prime tre componenti vettore ripulito:\n";
   for(int i=0; i<3 and i<quanti; i++){
      cout<<setw(10)<<dati[i];
      //setw(n): determina la dimensione del campo in cui
      //viene scritto il numero. Comodo per stampe allineate.
   }
   cout << endl;

   cout << endl << "Ultime tre componenti vettore ripulito:\n";
   for(int i=quanti-1; i>= quanti-3 and i>=0; i--){
      cout<<setw(10)<<dati[i];
   }
   cout << endl;


   flusso_out.open("risultati.dat");

   //Stampe
   flusso_out << endl << "Media: " << m;
   flusso_out << endl << "Deviazione standard: " << devst;
   flusso_out << endl << "Minimo: " << small;
   flusso_out << endl << "Massimo: " << large;
   flusso_out << endl << "Numero outliers: " << noutliers;

   flusso_out << endl << "Prime tre componenti vettore ripulito:\n";
   for(int i=0; i<3 and i<quanti; i++){
      flusso_out<<setw(10)<<dati[i];
      //setw(n): determina la dimensione del campo in cui
      //viene scritto il numero. Comodo per stampe allineate.
   }
   flusso_out << endl;

   flusso_out << endl << "Ultime tre componenti vettore ripulito:\n";
   for(int i=quanti-1; i>= quanti-3 and i>=0; i--){
      flusso_out<<setw(10)<<dati[i];
   }
   flusso_out << endl;

   flusso_out.close();

   return 0;
}

