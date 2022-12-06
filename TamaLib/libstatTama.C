#include "libstatTama.h"


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