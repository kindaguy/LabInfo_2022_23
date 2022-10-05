//Contiene strumenti per stampa a video (cout) e
//lettura da Tastiera (cin)

#include <iostream>

using namespace std;

int main(){

   
   float dato;
   float dato1;

   cout << endl << "Inserire razionale: ";
   
   cin >> dato;

   dato1 = dato+0.01;
   cout << endl << dato << endl;
   cout << endl << dato1 << endl;


   return 0;
}