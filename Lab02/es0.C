//Contiene strumenti per stampa a video (cout) e
//lettura da Tastiera (cin)

#include <iostream>

using namespace std;

int main(){

   
   int matr;


   cout << endl << "Inserire matricola: ";
   
   cin >> matr;

   //A questo punto il "valore" scritto viene memorizzato in datoI

   //Stampiamo dato letto
   cout << endl << "Benvenuto: " << matr << endl;


   return 0;
}