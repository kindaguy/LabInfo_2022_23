#include "libArray.h"


void stampa(float *v, int dim){
   cout << endl << "Stampo vettore: " << endl;
   for(int i = 0; i < dim; i++)
      cout << endl << setw(10) << v[i];

   cout << endl;

}

int eliminaSwap(float v[], int dim, int pos){

   v[pos] = v[dim-1];
   return dim-1;
}
int eliminaShift(float v[], int dim, int pos){

   for(int i=pos; i<dim-1; i++){
        v[i] = v[i+1]; 

   }

   return dim-1;
}



void sortArray(float *v, int dim){

   float min;
   int posMin;
   float appo;

   for(int i=0; i< dim-1; i++){
      min = v[i];
      posMin = i;

      //Questo ciclo determina il minimo nel sottoarray
      //i+1,....,dim-1
      for(int j=i+1; j<dim; j++){
         if(v[j]< min){
            min = v[j];
            posMin = j;
         }
      }
      appo = v[i];
      v[i] = v[posMin];
      v[posMin] = appo;
      
   }

}

float *resize(float *v, int oldSize, int newSize){

   int nToCopy;
   float *newArray;

   //Attenzione all'assegnamento condizionale:

   nToCopy = (oldSize < newSize? oldSize:newSize);

   //Equivalente a 
   //if(oldSize <newSize)
   //   nToCopy = oldSize;
   //else
   //   nToCopy = newSize;

   //Alloca il nuovo vettore di dimensione newSize
   newArray = new float[newSize];
   
   //Se succedono pasticci con allocazione dinamica esco dalla funzione
   //restituendo NULL
   if(newArray == NULL){
      cout << endl << "Errore allocazione vettore in resize!";
      return NULL;
   }

   //Se tutto va bene procedo....

   //Copia gli elementi da copiare ovvero:
   //newSize > oldSize:  tutti gli elementi del vecchio vettore
   //oldSize > newSize: tutti gli elementi del vecchio vettore che ci stanno
   //Usiamo la funzione memcpy che copia un blocco di memoria di dimensione
   //richiesta da una posizione di memoria ad un'altra
   //void * memcpy ( void * destination, const void * source, size_t num );

   memcpy((void *)newArray, (const void *) v, nToCopy*sizeof(float));

   //A questo punto gli elementi da copiare sono stati copiati;

   //Elimino il vecchio vettore
   delete [] v;
   
   //Restituisco l'indirizzo del nuovo vettore
   return newArray;
}