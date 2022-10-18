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

//Funzioni: dichiarazione
int leggiValido(int,int);


//Funzioni: definizioni
int leggiValido(int min, int max){
   
   int a;

   do{
        //Istruzione di lettura da tastiera
        cout << endl << "Inserire valore in [" << min << "," << max <<"]: ";
        cin >> a;
    } while((a<min or a>max) and a != 0);

   //Restituisce il valore contenuto in a
   return a;
}

int main(){

   int vett[NN];

   int conta;
   
   int appo;

   appo = leggiValido(18,30);


   for ( conta=0 ; appo !=0 and conta <NN; conta++){
       vett[conta] = appo; 
       appo =  leggiValido(18,30);
   }
   //? quanto vale conta alla fine dell' esecuzione del ciclo???
   //conta vale quanto il numero di valori effettivamente inseriti

   cout << endl << "Hai inserito " << conta << " valori."<< endl;
   for(int i=0; i<conta; i++)
      cout << endl << vett[i];
   
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