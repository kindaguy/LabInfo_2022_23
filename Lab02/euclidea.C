/*Preambolo: inclusione degli stumenti necessari
e altre amenità                               */

#include <iostream>


using namespace std;
/*Fine preambolo*/

//main e` il programma

int main(){

    int b,a; //Dividendo e divisore
    int q,r; //Variabili di lavoro che conterranno il risultato.

    cout << "Inserire dividendo e divisore: " << endl;
    
    cin >> a;  //Leggo valore da tastiera e lo registro in a
    cin >> b;   //Leggo valore da tastiera e lo registro in b

    if(b>0){

        //Azione 1
        r = a;
        q = 0;

        while(r-b >= 0){
            q = q+1;
            r = r-b;
        }

        cout << "Quoziente: " << q << "; resto: " << r << endl;
    }

    else{
        //Azione 2
        cout << "Divisione per zero non ha senso, pollo! " << endl;
    }


    return 0;
}
//Fine programma
