/*In questo esercizio supponiamo che i valori di cui vogliamo
calcolare la somma siano voti. Pertanto l'inserimento di valori < 18
o maggiori di 30 (la lode non conta) non sara` valido.*/

#include <iostream>

using namespace std;


int main(){

    int a;
    int conta  = 0; //Inizializzo valore (better safe than sorry!)
    int somma = 0; //Inizializzo valore


    //Stampo a video un messaggio;  'endl' indica un a-capo
    cout << endl <<  "Inserire sequenza di valori positivi da mediare terminata da 0: " << endl;


    //Questo ciclo sostituisce la lettura "semplice" dell'esercizio precedente
    //Fino a che non abbiamo un dato compatibile:
    // 18 <= a  <= 30 oppure a == 0 devo richiedere il dato all'utente.
    //L'ENUNCIATO/blocco viene (ri-)eseguito se la condizione e` vera.

    do{
        //Istruzione di lettura da tastiera
        cout << endl << "Inserire voto (18-30). Zero per terminare: ";
        cin >> a;
    } while((a<18 or a>30) and a!=0); //Equivalentemente ((a<18 || a>30) && a != 0)




    //Il caricamento termina appena viene inserito lo 0
    while(a != 0 ){ //Il valore 0 e` un VALORE SENTINELLA. Quando inserito da tastiera
                    //porta all'uscita dal ciclo. 
        conta = conta + 1;
        somma =  somma + a;
    
        //Anche qui la lettura "semplice" deve essere sostitiuta
        do{
            cout << endl << "Inserire voto (18-30). Zero per terminare: ";
            //Istruzione di lettura da tastiera
            cin >> a;
      } while((a<18 or a>30) and a!=0); //Equivalentemente ((a<18 || a>30) && a != 0)

    }


    //Quando esco devo fare qualche cosa....
    cout << endl << "conta = " << conta << endl;
    cout << endl << "somma = " << somma << endl;

    //Completare...stampare media aritmetica dei valori.

    
    return 0;
}
