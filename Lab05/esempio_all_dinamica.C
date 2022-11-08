#include <iostream>

using namespace std;

int main(){

   int size;
   //Inizializzare a NULL NON e` obbligatorio, ma e` buona prassi
   double *vDinamico = NULL;

   cout << endl<< "Valore iniziale del puntatore: " << vDinamico << endl;

   //Determino la dimensione dell'array, in questo caso chiedendo all'utente:
   cout << endl << "Numero elementi array da creare: ";
   cin >> size;

   //A questo punto la dimensione dell'array e` nota, e mi serve allocare
   cout << endl << "Memoria richiesta: " << size * sizeof(double) << " byte" << endl;

   //Alloco

   vDinamico = new double[size];

   //Al puntatore vDinamico viene assegnato il valore restituito dalla new

   cout << endl << "Valore del puntatore dopo allocazione dinamica: " << vDinamico << endl;

   //Gli elementi dell'array vDinamico sono in posizioni contigue

   for(int i=0; i<size; i++)
      cout << endl << "Indirizzo elemento " << i << ": " << &vDinamico[i] << " = " << vDinamico + i  <<  endl;

   //Osservazione: Le componenti dell'array contengono valori "spazzatura"
   //Qualche volta i valori spazzatura sono abbastanza deterministici....
   //per esempio sul mio computer vengono fuori tutti zeri...mistero....

   for(int i=0; i<size; i++)
      cout << endl << "Contenuto elemento " << i << ": " << vDinamico[i]  <<  endl;

   //Da questo momento in poi l'array allocato dinamicamente di usa come un normale array:

   vDinamico[0] = 2.;

   for(int i=1; i< size; i++)
      vDinamico[i] = 2* vDinamico[i-1];

   for(int i=0; i< size; i++)
      cout << endl << "vDinamico[" << i <<"] = " << vDinamico[i];
   
   cout << endl;

   //Deallocazione dell'array creato dinamicamente: questa deallocazione viene fatta in automatico
   //dal Sistema Operativo (SO) quando il programma termina.
   //E` pero` buona prassi dellocare gli array creati dinamicamente in modo esplicito, cosi` da 
   //educarsi ad una corretta gestione della memoria.

   delete [] vDinamico;

   return 0;
}