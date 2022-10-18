#include <iostream>

using namespace std;


//Funzioni: dichiarazione
float leggiValido(float,float);

//Funzioni: definizioni
float leggiValido(float min, float max){
   
   float a;

   do{
        //Istruzione di lettura da tastiera
        cout << endl << "Inserire valore in [" << min << "," << max <<"]: ";
        cin >> a;
    } while((a<min or a>max));

   //Restituisce il valore contenuto in a
   return a;
}



//Questo programma usa la funzione

int main(){

   float uno, due;

   float valore;

   float valore2;

   cout << endl << "Inserire minimo e massimo:";
   cin >> uno >> due;
   
   valore = leggiValido(uno, due);

   cout << endl << " Valore valido: " << valore << endl;

   valore2 = leggiValido(uno,due);

   cout << endl << " Secondo valore valido: " << valore2 << endl;


   return 0;
}

