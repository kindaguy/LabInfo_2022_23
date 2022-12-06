# Laboratorio 9: Ordinamento e ricerca

Lavoreremo all'implementazione di algoritmi di ordinamento e ricerca di elementi un un vettore. Qui ci concentreremo su vettori di interi, ma provate ad implementare le funzioni di ordinamento e ricerca per altri tipi di dato.

## Esercizio 1
Scrivere un programma che, preso in ingresso un valore intero positivo __N__  e due valori interi _min_, _max_ ( $min < max$), generi una sequenza __N__ di interi "a caso" nell'intervallo $[min,max]$, registrandola nel file _numeri.dat_. 

## Esercizio 2
Definita la struttura

__myArrayInt{
    int size;
   int used;
   int *raw; 
};__

Scrivere una funzione

__myArrayInt caricaArrayIntFile(const char nomefile[])__

che, preso in ingresso il nome del file come stringa, restituisca un valore di tipo __myArrayInt__, opportunamente inizializzato usando il contenuto del file.

## Esercizio 3
Implementare la funzione di ordinamento per selezione _selsort_ discussa a lezione. Ricordiamo che il metodo di ordinamento prevede di individuare, all'_i_-esimo passaggio dopo passaggio, l'elemento più piccolo del (sotto)vettore di indici in $[i,\text{used}-1]$. In particolare la funzione dovrà avere _signature_

__void sortArrayInt(int v[], int dim);__

ATTENZIONE: partite dal progetto dell'algoritmo su un "pezzo di carta".

Per  testare la funzione, usate i dati contenuti nel vettore generato nell'Esercizio 1 e caricabile con la funzione definita nell'Esercizio 2.

## Esercizio 4

Implementare una funzione 

__int binarySearchInt(int v[], int left, int right, int key)__

che prende in ingresso un vettore <u><b>ordinato</b></u> di interi, l'indice del primo elemento del vettore, l'indice dell'ultimo elemento del vettore, e una chiave di ricerca, restituisca la posizione di uno degli elementi $v_i$ del vettore tale che $v_i == key$. La funzione deve restituire la posizione di tale elemento, se presente, oppure -1.

Sia __dati.dat__ il file generato con usando la metodologia descritta nell'Esercizio 1, con $N=100$, $min = 1$  e $max = 10$. Cercare la chiave $key = 5$.

## Esercizio 5

Sia __datistretti.dat__ il file generato con usando la metodologia descritta nell'Esercizio 1, con $N=100$, $min = 1$  e $max = 5$. Caricare i dati in un __myArrayInt__ usando la funzione definita nell'Esercizio 2. Ordinare l'array così ottento usando  la funzione __sortArrayInt__ definita nell'Esercizio 3.

Scrivere un algoritmo che, determinata la posizione di un elemento di chiave $key = 5$ tramite la funzione __binarySearchInt__ definita nell'Esercizio 4, conti il numero di occorrenze di 5 nel vettore dei dati.

## Esercizio 6

Organizzare le funzioni/procedure implementate fino ad oggi in una o più "librerie". Ciascuna libreria, ricordiamo, è formata da un _header_ file ".h" e un _source file_ ".C" convenzionalmente con lo stesso nome (__lib.h,lib.C__). Il file header contiene:
- Le istruzioni a preprocessore (__#include__, __#define__) utili ad importare funzioni e definire  eventuali costanti necessarie al funzionamento della libreria.
- Le _dichiarazioni_ delle funzioni/procedure della libreria.
- er ogni funzione del testo (commenti) che spiega che cosa fa la funzione e il significato dei parametri. Sebbene non necessario, è spesso conveniente dare nomi ai parametri formali, così da facilitare la documentazione del codice.
A es:
__void sortInt(int [], int )__ 
meglio come
 __void sortInt(int v[], int dim)__
 così da poter scrivere qualcosa come:  "la funzione __sortInt__ ordina un vettore di interi __v__ contenente __dim__ elementi validi in  ordine non decrescente".
