//Direttive a preprocessore (no panic...)
#include <iostream> //Libreria con funzionalita` input/output tastiera/video


//Sono un commento su una riga (il compilatore mi ignora....)
/*
 Sono un commento su una o piu` righe
 (il compilatore mi ignora...)
 */

using namespace std; //Rimarra` un mistero, ma va messo....

int main(){

    int a;
    int b;
    int r;
    int appo;
    int appo1;

    int appo_swap;


    cout << "Inserire a , b > 0" << endl; //Sampa a video!

    cin >> a;
    appo=a;

    cin >> b ;
    appo1=b;

    cout << "letto valore "<< a <<endl;

    cout << "letto valore "<< b <<endl;

    //Manca il controllo a > b > 0...
    //implementiamolo!!!!

    //Allora: controlliamo comunque che a,b siano etrambi > 0
    
    if (a>0 and b>0){


        //A questo punto sicuramente i valori sono a posto. Pero` per poter
        //usare l'algoritmo serenamente, devo garantire che a>=b.
        //A questo punto faccio un gioco di scambi
        if(b>a){
            appo_swap = a;  //Creo una copia del contenuto di a
            a=b; //scrivo in a il contenuto di b. Il vecchio valore di a e` perso
            b=appo_swap;  //scrivo in b il contenuto della "backup" del valore originale di a
        }
        //Se invece a e b sono gia` a posto, non devo fare nulla.
        //Ecco un esempio non banale di if "monco".

        //da qui in avanti il programma può  procedere a calcolare MCD(a,b)
        while(b != 0){
            
            r = a % b;
            a=b;
            b=r;

        }

        cout << endl <<"MCD(" << appo << "," <<appo1 <<") = " << a << endl;
    }
    else{

        cout << endl << "NOPE!!!!" << endl;
    }
    return 0;
}


