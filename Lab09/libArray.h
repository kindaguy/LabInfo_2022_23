
#include "../TamaLib/libstatTama.h"


//Elimina dal vettore di float v contenente 
//dim elementi tutti gli outliers (definiti come al solito)
int clean_out(float *v, int dim);


//Elimina un elemento dal vettore v, contenente dim
//elementi, in posizione pos, scambiando l'elemento
//da eliminare con l'ultimo elemento dell' array
//!!Non mantiene l'ordine relativo degli elementi
int eliminaSwap(float *v, int dim, int pos);

//Elimina un elemento dal vettore v, contenente dim
//elementi, in posizione pos, traslando a sx gli 
//elementi dell' array dalla posizione pos+1 in poi.
//!! Mantiene l'ordine relativo degli elementi

int eliminaShift(float *v, int dim, int pos);