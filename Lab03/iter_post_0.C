/*In questo esercizio suppoiamo di voler inserire un voto (accademico).
 Pertanto l'inserimento di valori < 18
o maggiori di 30 (la lode non conta) non sara` valido.*/

#include <iostream>

using namespace std;


int main(){

    //Variabile di appoggio per lettura valore.
    int a;
   
    do{
        //Istruzione di lettura da tastiera
        cout << endl << "Inserire voto (18-30). ";
        cin >> a;
    } while(a<18 or a>30 ); //Equivalentemente (a<18 || a>30 )

    cout << endl << "Voto valido letto: " << a << endl;


    return 0;
}
