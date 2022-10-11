/*Selezione: if...else (soluzione esercizio 5 Laboratorio 2)*/

#include <iostream>

using namespace std;


int main(){

    //Dichiarazione di variabili

    float a,b,massimo,minimo;



    //Leggo da tastiera
    cout << endl <<  "Inserire valori: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;
    cin >> b;
    //Equivalente cin >> a >> b;

    //Stampo il valore letto

    cout << endl <<  "Valori inseriti: " << a << endl;


    
    /*STRUTTURA BASE SELEZIONE
    
    if(condizione logica){
        Blocco di istruzioni da seseguire se condizione vera
    }
    else{
        Blocco di istruzioni da eseguire se condizione falsa
    }
    */
    
    if( a<b ){ 

       minimo = a;
       massimo =  b;

     }
    else{ //Blocco 2
       minimo = b;
       massimo =  a;

    }
    //A questo punto l'intervallo definito e` [minimo, massimo]
    //Fine punto 1

    cout << endl << "Intervallo definito: [" << minimo <<"," << massimo <<"]" << endl;

    if(minimo >0){
        //sicuramente l'intervallo e`  positivo
        cout <<  endl << "Intervallo positivo" << endl;
    }
    else{

        if(massimo <0){

            //sicuramente l'intervallo e`  negativo
            cout <<  endl << "Intervallo negativo" << endl;
        }
        else{
            //L' intervallo include lo zero!
            cout <<  endl << "Intervallo include zero" << endl;
        }

    }

    return 0;
}