/*Selezione: if...else (soluzione esercizio 5 Laboratorio 2)*/

#include <iostream>

using namespace std;


int main(){


    int a;

    //Stampo a video un messaggio;  'endl' indica un a-capo
    cout << endl <<  "Inserire valore intero: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;

    //Stampo il valore letto

    cout << endl <<  "Valore inserito: " << a << endl;

    /*STRUTTURA BASE SELEZIONE
    
    if(condizione logica){
        Blocco di istruzioni da seseguire se condizione vera
    }
    else{
        Blocco di istruzioni da eseguire se condizione falsa
    }
    */

    if( a>=0 ){ //Blocco 1
        cout << endl << "Numero positivo!" << endl;
    }
    else{ //Blocco 2
        cout << endl << "Numero negativo!" << endl;
    }
        
    return 0;
}