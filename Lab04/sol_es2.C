#include <iostream>

//cmath contiene molte funzioni matematiche utili:
//sin, cos, tan, sqrt, pow, fabs....
#include <cmath>
//anche cmath è nel namespace std, quindi 
//std::pow, std::sin a meno che non si usi....

//Il comando a PREPROCESSORE #define
//definisce una costante NN
//a cui corrisponde la squenza di caratteri 10

#define NN 10
//Il compilatore PRIMA di cominciare la traduzione 
//vera e propria, ovvero nella fase di pre-processore
//sostituisce ogni occorrenza del testo NN con il 
//testo 10

using namespace std;

int main(){

   int vett[NN];

   int conta;
   
   int appo;

   cin >> appo;

   // while (appo !=0 and conta <NN){
   //    vett[conta] = appo;
   //    conta++; 
   //    cin >> appo;
   // }

   for ( conta=0 ; appo !=0 and conta <NN; conta++){
       vett[conta] = appo; 
       cin >> appo;
   }
   //? quanto vale conta alla fine dell' esecuzione del ciclo???
   //conta vale quanto il numero di valori effettivamente inseriti

   cout << endl << "Hai inserito " << conta << " valori."<< endl;
   for(int i=0; i<conta; i++)
      cout << endl << vett[i];

   cout << i << endl;
   
   cout << endl;
// for (conta=0; conta < NN; conta++){
//       cin >> vett[conta];
//    }

// //Ciclo di stampa.  
// for(conta = 0; conta < NN; conta++)
//     cout << endl << vett[conta];

   cout << endl;
   return 0;
}