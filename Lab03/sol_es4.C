#include <iostream>

using namespace std;


int main(){

    int a;
    int conta  = 0; //Inizializzo valore (better safe than sorry!)
    int somma = 0; //Inizializzo valore


    //Stampo a video un messaggio;  'endl' indica un a-capo
    cout << endl <<  "Inserire sequenza di valori positivi terminata da 0: " << endl;

    //Istruzione di lettura da tastiera
    cin >> a;

    //Il caricamento termina appena viene inserito lo 0
   
   while(a != 0 ){ //Il valore 0 e` un VALORE SENTINELLA. Quando inserito da tastiera
                    //porta all'uscita dal ciclo. 
        cout << endl <<"Dentro corpo while!" << endl; 
        conta = conta + 1;
        somma =  somma + a;
        cout << endl <<  conta << "  " << somma << endl;
        cin >> a;
    }


    //Quando esco devo fare qualche cosa....
    cout << endl <<"Sono uscito dal (ciclo)!!! "<< endl;
    cout << endl << "conta = " << conta << endl;
    cout << endl << "somma = " << somma << endl;
    cout << endl << "media = " << 1.*somma/conta << endl;

    //Completare...stampare media aritmetica dei valori.

    
    return 0;
}
