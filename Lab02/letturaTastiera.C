//Contiene strumenti per stampa a video (cout) e
//lettura da Tastiera (cin)

#include <iostream>

using namespace std;

int main(){

   //Preparo due foglietti su cui registrare dei valori
   int datoI;
   float datoF;

   cout << endl << "Inserire dato intero: ";
   //Istruzione di lettura da tastiera:
   //blocca esecuzione del codice fino a che non 
   //viene schiacciato INVIO da tastiera.
   
   cin >> datoI;

   //A questo punto il "valore" scritto viene memorizzato in datoI

   //Stampiamo dato letto
   cout << endl << "Dato intero inserito: " << datoI << endl;

   //Esercizio: completare leggendo da tastiera dato razionale (con la virgola)
   //e stampandolo a video.

   //Attenzione: usare datoF come contenitore di destinazione.
   //Suggerimento: provate a usare datoI come contenitore e 
   //fate caso alla stampa a video....

   return 0;
}