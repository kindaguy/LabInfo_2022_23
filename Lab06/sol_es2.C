#include <iostream>
#include <fstream>
using namespace std;

int contaDati(char []);
float *caricaDati(char [], int);

float *caricaDatiFile(char [], int *);

void caricaDatiFile(char [], int *, float **);



int main(){

    int ndati;

    float prova;

    float *vdati;


    //ndati = contaDati("misure.dat");

    //vdati = caricaDati("misure.dat",ndati);

    //vdati = caricaDatiFile("misure.dat", &ndati);

    caricaDatiFile("misure.dat", &ndati, &vdati);
    
    cout << endl << "Numero dati caricati:  " << ndati << endl;

    cout << endl << "Stampo dati: " << endl;

    for(int i=0; i<ndati; i++)
        cout << endl << vdati[i];

    cout << endl;

    return 0;
}

int contaDati(char nome[]){

    ifstream file;

    float appo;

    int conta = 0;


    file.open(nome);

    file >> appo;

    while(!file.eof()){

        //Elaboro dato
        conta++;

        //Leggo dato successivo
        file >> appo;

    }

    file.close();
    return conta;

}


float *caricaDati(char nomefile[], int n){

        ifstream file;

        float *v;

        v = new float[n];

        file.open(nomefile);

        for(int i=0; i<n; i++)
            file >> v[i];

        
        file.close();

        return v;
}

float *caricaDatiFile(char nomefile[], int *pDim){

    int dim;
    float *v;

    dim = contaDati(nomefile);

    v = caricaDati(nomefile,dim);

    //Scrivi nella cella di indirizzo 
    //pari al contenuto di pDim il valore dim;
    *pDim = dim;

    return v;

}


void caricaDatiFile(char nomefile[], int *pDim, float **pA){

    int dim;
    float *v;

    dim = contaDati(nomefile);

    v = caricaDati(nomefile,dim);

    //Scrivi nella cella di indirizzo 
    //pari al contenuto di pDim il valore dim;
    *pDim = dim;
    *pA  = v;

}