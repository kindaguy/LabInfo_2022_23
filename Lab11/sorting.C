
/*Programma MergeSort*/

#include <iostream>
//La libreria cstring implementa funzioni legate alle c-stringhe
//(da distinguersi dalle string, che sono una classe del C++)
//Tra le funzioni definite ce n'è una molto interessante
//void * memcpy ( void * destination, const void * source, size_t num )
#include <cstring>

using namespace std;

void merge(int [],int,int,int);
void merge_sort(int[],int, int);

void sel_sort(int [], int );
int pos_min(int [], int,int);

void scambia(int *, int *);


int main()
{
    int num,i;

    
    int a[50];

    cout<<"********************************************************************************"<<endl;
    cout<<"                             MERGE SORT PROGRAM "<<endl;

    cout<<"******************************************************************* *************"<<endl;
    cout<<endl<<endl;
    cout<<"Please Enter THE NUMBER OF ELEMENTS you want to sort:"<<endl;
    cin>>num;
    cout<<endl;
    cout<<"Now, Please Enter the ( "<< num <<" ) numbers (ELEMENTS):"<<endl;
    for(i=0;i<num;i++){
        cin>>a[i] ;
    }
    
    merge_sort(a,0,num-1); //Chiamo mergesort passando l'indice minimo e massimo del vettore.
    cout<<"So, the sorted list (using MERGE SORT) will be :"<<endl;
    
    //sel_sort(a,num);
    cout<<endl;
    
    //cout<<"So, the sorted list (using MERGE SORT) will be :"<<endl;
    //cout<<"So, the sorted list (using Selection Sort) will be :"<<endl;
    
    cout<<endl<<endl;

    for(i=0;i<num;i++)
        cout<<a[i]<< endl;

    cout<<endl<<endl<<endl<<endl;
    return 0;

}


//Questa procedura implementa il mergeSort (per interi)

void merge_sort(int a[],int low,int high){
    int mid;
    if(low<high) {
        mid = low + (high-low)/2; //This avoids overflow when low, high are too large
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

//Questa funzione di merging è specializzata al caso in cui i vettori da fondere
//sono in realta` due sottovettori di un vettore individuati da tre indici:
//Potete scrivere, per esercizio, una funzione di merge che restituisce un nuovo vettore,
//creato dinamicamente, a partire da due vettori distinti....

void merge(int a[],int low,int mid,int high){
//low: indice piu` piccolo dell'array da fondere
//mid: mezzo dell'array da fondere
//high: indice piu` grande dell'array da fondere

    int h,i,j,k;
    int *b; //Abbiamo bisogno di un vettore di appoggio dove copiare i dati
    h=low; //Indice libero per scandire vettore di sinistra
    i=0; //Indica la prima posizione libera dell'array in cui stiamo copiando i dati
    j=mid+1; //Indice libero per scandire vettore di destra

    b = new int[high-low+1];


    while((h<=mid)&&(j<=high)){ //Mentre non hai esaurito uno dei due sottovettori
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++; //Avanza di uno con l'indice libero dell'array di sinistra
        }
        else{
            b[i]=a[j];
            j++; //Avanza di uno con l'indice libero dell'array di destra
        }
        i++; //
    }

    if(h>mid){ //Se hai esaurito il sottovettore di sinistra, riversa in b quanto rimane del sottovettore di destra
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++){ //Se hai esaurito il sottovettore di destra, riversa in b quanto rimane del sottovettore di sinistra
            b[i]=a[k];
            i++;
        }
    }

    i=0; //Reset indice vettore i per la copia
    //for(k=low;k<=high;k++,i++) a[k]=b[i]; //Ricopia in a il vettore ordinato b.
    //Oppure (molto più elegantemente, ed efficientemente)
    memcpy ( (void *)  (a + low), (const void *) b, (high-low+1)*sizeof(int));
    //memcpy 


    delete [] b;
    b= NULL;
}



void sel_sort(int v[], int dim ){

    int pos;
    
    for(int i=0; i<dim-1; i++){
        pos = pos_min(v,i,dim-1);
        scambia(v+i,v+pos);
    }

}

int pos_min(int v[],int low, int high){
    int min = v[low];
    int pmin = low;

    for(int i = low+1; i<=high; i++){
        if(v[i]< min){
            min = v[i];
            pmin = i;
        }
    }

    return pmin;   

}


//Questa funzione esemplifica ulteriormente l'uso dei 
//puntatori....
void scambia(int *pa, int *pb){
    int appo;
    appo = *pa;
    *pa = *pb;
    *pb = appo;
}