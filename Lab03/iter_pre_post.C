/*Differenza while pre-/post-condizionale*/

#include <iostream>

using namespace std;

int main(){

   int quanti;
   int conta=0;

   cout << endl << "Numero di iterazioni: ";

   cin >> quanti;

   //Questo ciclo viene eseguito almeno una volta
   cout << endl << "While post-condizionale." << endl;
   do{
      conta = conta + 1;
      cout << endl <<  "conta: " <<conta;
   }while(conta < quanti);
   cout << endl;

   conta = 0;

   cout << endl << "While pre-condizionale" << endl;


   //Questo ciclo puo` non essere eseguito nemmeno una volta (su input quanti <- 0)
   while(conta < quanti){
      conta = conta + 1;
      cout << endl << "conta: " <<conta;
   }


   return 0;
}