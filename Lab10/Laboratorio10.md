# Laboratorio 10: Operazioni su array

Lavoreremo all'implementazione di algoritmi su array e metteremo in ordine il nostro materiale. Nella cartella __TamaLib__ troverete del materiale di esempio, che andremo a discutere. Introduciamo anche lo strumento __make__ e il relativo __makefile__...

## Esercizio 1

Creiamo e dotiamo delle funzionalità necessarie un __myArrayFloat__. Per far questo modificate quanto fatto nell'Esercizio 2 e nell'Esercizio 3 del Laboratorio 9, partendo dalla definizione della struttura

__myArrayFloat{
    int size;
   int used;
   float *raw; 
};__


Partiamo dallo scrivere una funzione

__myArrayFloat caricaArrayFloatFile(const char nomefile[])__

che, preso in ingresso il nome del file come stringa, restituisca un valore di tipo __myArrayFloat__, opportunamente inizializzato usando il contenuto del file __misure1.dat__, che trovate in questa cartella.


## Esercizio 2
Modificare la funzione di ordinamento per selezione _selsort_ implementata per i vettori di interi. Ricordiamo che il metodo di ordinamento prevede di individuare, all'_i_-esimo passaggio dopo passaggio, l'elemento più piccolo del (sotto)vettore di indici in $[i,\text{used}-1]$. In particolare la funzione dovrà avere _signature_

__void sortArrayfloat(float v[], int dim);__


## Esercizio 3

Modificare la di ricerca per bisezione, implementata per vettori ordinati di interi, in modo tale che ricerchi un elemento in un vettore di __float__. Aggiungere a questa funzione un parametro __float eps__ (epsilon) così che la funzione restituisca la posizione del primo elemento $v_i$ trovato nell'array tale che  $\left | v_i_-key \right | <ϵ.

__int binarySearchInt(float v[], int left, int right, float key, float eps)__

La funzione deve restituire la posizione di tale elemento, se presente, oppure -1.

NOTA: per ragioni di rappresentazione macchina, l'uguaglianza esatta tra razionali in rappresentazione floating point è un po' una chimera. Pertanto la definizione viene rilassata e un numero si ritiene uguale all'altro se giace in un intorno del primo di semi-ampiezza ϵ.


## Esercizio 4

Implementare la funzione

__float * resizeArray(float *v, int oldDim, int newDim)__

che, ricevuto in ingresso un vettore contenente __oldDim__ elementi, ne crei uno nuovo di dimensione __newDim__, con __newDim > oldDim__, vi copi dentro tutti gli elementi del vecchio vettore, elimini il vecchio vettore, e restituisca l'indirizzo del nuovo vettore allocato (__NULL__ se qualcosa va storto).

Che cosa cambierebbe se __newDim__ fosse minore di __oldDim__. Come dovremmo modificare la funzione?

NOTA: ricordate la funzione __memcpy__ a cui abbiamo accennato durante una vecchia lezione. Questa funzione ha signature
__void * memcpy ( void * destination, const void * source, size_t num );__
e si trova nella libreria __\<cstring\>__. Trovate informazioni più dettagliate al link https://cplusplus.com/reference/cstring/memcpy/



