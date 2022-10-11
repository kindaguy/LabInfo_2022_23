#include <iostream>

using namespace std;


int main(){

    //Dichiarazione di variabili

    int a,b,massimo,minimo;
    int val;



    //Leggo da tastiera
    cout << endl <<  "Inserire valori: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;
    cin >> b;
    //Equivalente cin >> a >> b;

    //Stampo il valore letto

    cout << endl <<  "Valori inseriti: " << a << b <<  endl;

    
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

    cout << endl << "Range definito: [" << minimo <<"..." << massimo <<"]" << endl;

    //A questo punto ho definito il range

    //Questo blocco di istruzioni filtra l'input
    //garantendo che dopo il blocco il valore registrato
    //(in val) sia "corretto".
     do{
        //Istruzione di lettura da tastiera
        cout << endl << "Inserire valore in [ "<< minimo << "..." << massimo <<"]";
        cin >> val;
    } while(val<minimo or val>massimo ); //Equivalentemente (a<18 || a>30 )

    cout << endl <<"Valore valido letto! " << val << endl;
    return 0;
}