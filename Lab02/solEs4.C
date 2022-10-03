#include <iostream>

using namespace std;

int main(){

    int dato;
    int accu = 0; //Inizializzo a zero!!!
    int conta = 0; //inizializzo a zero!!!

    //Iniziamo acquisizione dati.
    //Attenzione: 
    //-dati negativi vanno scartati
    //-sequenza terminata da zero.



    //ATTENZIONE alla struttura del ciclo di inserimento dei dati:
    //-la prima lettura viene effettuata fuori dal ciclo
    //-perche' nel ciclo il dato inserito viene elaborato
    //-NON possiamo supporre che l'utente non inserisca subito il carattere zero.
    //NOTA: si puo` procedere in altro modo, ma questo e` quello piu` pulito.
    //...e ritornera`...in altri contesti....
    //
    cout << endl << endl<< "Inserire dato: ";
    cin >> dato;

    while( dato!=0){
        if(dato >0){
            accu =accu + dato;
            conta++; //equivalente a conta=conta+1;
        }
        else{
            cout << endl << "Dato negativo! Non registrato";
        }

        //Stampa per controllo funzionamento:

        cout << endl <<"Dati inseriti: "<< conta;
        cout << endl <<"Somma parziale: " << accu; 
        cout << endl<< endl << "Inserire dato: ";
        cin >> dato;
    }

    //Fine acquisizione dati
    cout << endl << "Inserimento terminato. " << endl;

    if (conta > 0){
        cout << endl << "totale: " << accu;
        cout << endl << "media: " << (float)accu/conta; //** Attenzione accu/conta restituirebbe quoziente della divisione intera
                                                        //(float)accu trasforma accu (temporaneamente) in float la variabile accu
                                                        //(float)accu/conta fa eseguire la divisione razionale.
                                                        //(T)variabile: cast esplicito della variabile al tipo T
                                                        //  /: int x int -> int (quoziente)
                                                        //  /:float x int -> float (divisione razionale)
                                                        //  /:int x float -> float
                                                         
    }
    else{
        cout << endl << "Nessun dato in serito, totale = 0" << endl;
    }

    return 0;
}

//**NOTA: se operiamo la divisione tra due numeri interi, il linguaggio inferisce che
//l'operazione da effettuare sia la divisione euclidea, di cui fornisce solo il resto.
//In questo caso non e` quello che vogliamo. Quindi diciamo di trattare almeno uno degli operandi
//(in questo caso il numeratore) come numero "razionale".
//Questo fa inferire al compilatore che l'operazione richiesta e` quella razionale, ovvero
//con la virgola.
//Alternativamente avremmo potuto usare il seguente espediente
//     1.f * accu / conta
//     In questo caso, la moltiplicazione di accu per 1.f (costante razionale in singola
//     precisione) rende il numeratore razionale. 
