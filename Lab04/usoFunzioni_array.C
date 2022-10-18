#include <iostream>

using namespace std;

#define NN 20
//Funzioni: dichiarazione
//Prende in ingresso un vettore di int e il numero di dati
//e restituisce la media aritmetica dei dati
//int[]: tipo array di interi
float media(int [], int);

//Funzioni: definizioni
float media(int v[], int ndati){
   
   int somma = 0;

   for(int i=0; i<ndati; i++)
      somma = somma + v[i];

   return (float)somma/ndati;
}

//Funzioni: dichiarazione
int leggiValido(int,int);


//Funzioni: definizioni
int leggiValido(int min, int max){
   
   int a;

   do{
        //Istruzione di lettura da tastiera
        cout << endl << "Inserire valore in [" << min << "," << max <<"]: ";
        cin >> a;
    } while((a<min or a>max) );

   //Restituisce il valore contenuto in a
   return a;
}

//Questo programma usa la funzione

int main(){

   int quanti;
   float votomedio;


   int voti[NN];

   cout << endl << "quanti voti vuoi inserire?";
   cin >> quanti;

   if(quanti >0){

      //Carico i voti
      for(int i=0; i< quanti; i++)
         voti[i] = leggiValido(18,30);
         
      
      votomedio = media(voti,quanti);

      cout << endl << "Voto medio: " << votomedio << endl;
   }

   else{

      cout << endl << "Non hai voti!!!" << endl;
   }



   return 0;
}

