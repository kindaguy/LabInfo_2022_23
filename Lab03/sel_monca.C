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

    /*
    if(condizione logica){
        se vero
    }
    else{
        se falso
    }
    */

    if( a < 0 ){ //Blocco 1
        a = -1*a;
    }
     //No Blocco 2
     //Prosegue l'esecuzione    

    cout << endl << "Risultato, a= " << a << endl;
    return 0;
}