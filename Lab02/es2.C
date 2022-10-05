//Contiene strumenti per stampa a video (cout) e
//lettura da Tastiera (cin)

#include <iostream>

using namespace std;

int main(){

   
   int dato;
   int c;

   cout << endl << "Inserire intero: ";
   
   cin >> dato;

   cout << endl << dato+1 << endl;
   cout << endl << dato-1 << endl;

   c = dato+1;

   cout << endl << c << endl;

   cout << endl << c-1 << endl;


   return 0;
}