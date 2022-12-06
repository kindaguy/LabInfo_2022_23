#include <iostream>
#include "myArrayInt.h"
using namespace std;


int main(){

    myArrayInt vett1;
    
    vett1 = caricaArrayIntFile("numeri_tama.dat");

    if(vett1.raw == NULL){
        cout << endl <<"pasticcio" << endl;
        return -1;
    }

    cout << endl << " Vettore caricato:"<< endl;
    cout << "numero elementi caricati: " << vett1.used << endl;
    
    for(int i=0; i<vett1.used; i++)
        cout << endl << vett1.raw[i];

    cout << endl;
    cout << endl << "ispezione prima: " <<vett1.raw << endl;
    cleanMyArrayInt(&vett1);
    cout << endl << "ispezione dopo: " <<vett1.raw << endl;

    return 0;
}