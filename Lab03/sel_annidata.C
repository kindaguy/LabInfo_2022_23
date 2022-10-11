#include <iostream>

using namespace std;


int main(){

    int a,b,c;

    //Stampo a video un messaggio;  'endl' indica un a-capo
    cout << endl <<  "Inserire valore intero: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;
    cin >> b;

    //Stampo il valore letto

    cout << endl <<  "Valori inseriti: " << a <<"; " << b << endl;
    
    if (a>0 and b> 0){

        if (a>=b){
            c=a/b;
        }
        else{
            c=b/a;
        }
        cout << endl << "Risultato, c= " << c << endl;
    }
    else{
        cout << endl << "No bene! Esco";
        //L'istruzione return provoca l'uscita dalla funzione main, ovvero dal programma
        return -1; //Valore "restituito"....ci torniamo
    }


    
    return 0;
}