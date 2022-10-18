#include <iostream>

//cmath contiene molte funzioni matematiche utili:
//sin, cos, tan, sqrt, pow, fabs....
#include <cmath>
//anche cmath è nel namespace std, quindi 
//std::pow, std::sin a meno che non si usi....

using namespace std;

int main(){

   //Dichiaro una n-upla di 10 elementi interi (int)
   int vett[10];

   //Dichiaro una n-upla di 3 elementi float
   float fv[3];



   int conta = 0;


   fv[0] = 1.f;
   fv[1] = 2* fv[0];
   fv[2] = pow(fv[1],3);

   cout << endl << fv[0] << " " << fv[1] << " " << fv[2] << endl;


   //conta vale inizialmente 0
   while (conta <10){
      vett[conta] = conta;
      conta++; //conta = conta+1;
   }

   for(conta = 0; conta < 10; conta++)
      cout << endl << vett[conta];

   cout << endl;

   //Equivalente a
   //  conta = 0;
   //  while(conta < 10){

   //     cout << endl << vett[conta];
   //     conta++; 
   //  }

   return 0;
}