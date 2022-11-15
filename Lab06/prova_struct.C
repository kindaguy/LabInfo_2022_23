#include <iostream>
#include <cmath>

using namespace std;

struct complesso{
   float re;
   float im;
};

//Restituisce il complesso coniugato del valore passato
complesso coniuga(complesso);

//Funzione di stampa: spesso definita in presenza di t-uple per
//gestire la stampa di tutti i campi 

void stampa_complesso(complesso);

int main(){

   complesso val1,val2;

   cout << endl << "Inserire parte reale: ";
   cin >> val1.re;
   cout << endl << "Inserire parte immaginaria: ";
   cin >> val1.im;


   cout << endl << "Valore inserito: " << val1.re << (val1.im >=0?"+i*":"-i*") << fabs(val1.im)<< endl;

   //Notare l'uso del selettore inline: sintassi (cond?se_vero:se_falso)

   val2 = coniuga(val1);
   //La funzione coniuga restituisce un complesso che viene assegnato a val2.
   //Osservazione: la funzione restituisce UN SOLO VALORE, di tipo (t-upla) complesso.

   cout << endl << "Valore coniugato: " << val2.re << (val2.im >=0?"+i*":"-i*") << fabs(val2.im)<< endl;

   //Usando funzione stampa:
   stampa_complesso(val2);
   return 0;
}

complesso coniuga(complesso c){
   complesso appo;

   appo.re = c.re;
   appo.im = -1*c.im;
   
   return appo;
}

void stampa_complesso(complesso c){
 cout << endl << "Valore coniugato: " << c.re << (c.im >=0?"+i*":"-i*") << fabs(c.im)<< endl;  
}