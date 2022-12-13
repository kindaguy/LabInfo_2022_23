#include "myArrayInt.h"



myArrayInt caricaArrayIntFile(const char nomefile[]){
    ifstream file_in;

    myArrayInt appo;
    int pippo;
    file_in.open(nomefile);
    if(file_in.fail()){
        cout << endl << " Problema apertura file: " << nomefile << endl;
        return appo;
    }
    
    file_in >> pippo;

    while(!file_in.eof()){
        appo.size++;
        file_in >> pippo;
    }

    //Contati i dati su file;
    appo.raw = new int[appo.size];

    file_in.close();
    file_in.open(nomefile);

    for(int i=0; i<appo.size; i++){
        file_in >> appo.raw[i];
    }

    file_in.close();
    appo.used = appo.size;

    return appo;
}

void cleanMyArrayInt(myArrayInt *v){

    //(*v).size = 0;
     v-> size = 0;
    // (*v).used = 0;
    v-> used = 0;
    // delete [] (*v).raw;
    delete [] v -> raw;
    // (*v).raw = NULL;
    v->raw = NULL;
}