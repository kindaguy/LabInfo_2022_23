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


    cout << "Inserire a > b >= 0" << endl; //Sampa a video!
    cin >> a;
    appo=a;
    cin >> b ;
    appo1=b;
    cout << "letto valore "<< a <<endl;
    cout << "letto valore "<< b <<endl;

    //Manca il controllo a > b > 0
    
    if (a>b and b>0){
    
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


