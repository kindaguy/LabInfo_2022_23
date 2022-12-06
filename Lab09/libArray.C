#include "libArray.h"


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


int clean_out(float v[], int  dim){

   float m, stdv;
   m = media(v,dim);
   stdv = devstd(v,dim);

   for(int i=0; i<dim; i++){
         if(fabs(v[i]-m)>3*stdv){
            dim = eliminaSwap(v,dim,i);
            i--;
         }

   }
   //Restituisco nuova dimensione
   return dim;

}