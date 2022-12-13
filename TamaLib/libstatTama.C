

#include "libstatTama.h"
//L'inclusione libArray.h libreria serve a ordinare il vettore per le statistiche d'ordine
//(qui solo mediana, ovvero 50-esimo percentile)
#include "libArray.h"


//Definizione delle funzioni di libreria

float media(float v[], int dim){

   float accu = 0.f;

   for(int i=0; i< dim; i++)
      accu += v[i];
   
   return accu/dim;

}
float devstd(float v[], int dim){

   float m;
   float accu2 = 0;

   m= media(v,dim);

   for(int i=0; i<dim; i++)
      accu2 += pow(v[i] -m,2);
   
   return sqrt(accu2/(dim-1));
 
}
float devstdCamp(float v[], int dim){

   float m;
   float accu2 = 0;

   m= media(v,dim);

   for(int i=0; i<dim; i++)
      accu2 += pow(v[i] -m,2);
   
   return sqrt(accu2/(dim));
 
}

float minimo(float v[], int dim){
   float min = v[0];
   for(int i=1; i<dim; i++){
      if(v[i]<min) min = v[i];
   }

   return min;
}


float massimo(float v[], int dim){
   float max = v[0];
   for(int i=1; i<dim; i++){
      if(v[i]>max) max = v[i];
   }  
    return max;

}

float mediana(float *v, int dim){


   float * appo = new float[dim];
   float m;
   memcpy((void *)appo, (const void *) v, dim*sizeof(float));
   sortArray(appo,dim);
   //Se la lunghezza del vettore e` dispari prendi l'elemento di mezzo;
   if(dim%2 != 0)
      m = appo[dim/2];
   else
      m =  0.5 *(appo[dim/2-1]+appo[dim/2]);

   delete [] appo;
   
   return m;
}

void linReg2(float x[],float y[], int dim, float * p_alpha, float * p_beta){

   float ybar, xbar;
   float accusotto = 0;
   float accusopra = 0;

   xbar = media(x,dim);
   ybar = media(y,dim);


   for(int i=0; i<dim; i++){
      accusotto += pow(x[i]-xbar,2);
      accusopra += (x[i]-xbar)*(y[i]-ybar);
   }
   *p_beta = accusopra/accusotto;
   *p_alpha = ybar - (*p_beta)*xbar;
}

//Usa lo stimatore corretto della deviazione standard
//Si suppone infatti distribuzione Gaussiana dei dati

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

