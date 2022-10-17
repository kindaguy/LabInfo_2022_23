# Laboratorio 4:  array, ciclo for e funzioni


## Esercizio 1

Scrivere un programma che, dichiarato un __array__ di 10 __int__

1. lo riempia integralmente con dati (interi) letti da tastiera.
2. finito il caricamento dei dati (10 interi letti da tastiera), stampi a video il contenuto dell'array.

Svolgere l'esercizio usando prima un ciclo __while__ precondizionale e un contatore, e poi usando un ciclo __for__.

## Esercizio 2

Modificare il programma al punto precedente in modo tale che l'utente possa terminare l'inserimento dei dati prima dell'inserimento dei 10 valori interi inserendo il valore sentinella 0. Notate che il valore sentinella non va inserito nell'array, perché non è un dato. Terminato l'inserimento il programma dovrà stampare a video il numero di dati caricati e tutti e soli i dati inseriti.

Anche in questo caso, implementate prima il programma usando prima un ciclo __while__ precondizionale e poi (insieme) vedremo l'uso del ciclo __for__ per fare la stessa cosa.

## Esercizio 3

Definire una funzione di nome __leggiValido__ che:

1. prende in ingresso due valori __float__, che individuano gli estremi di un intervallo __[min,max]__
2. chiede all'utente di inserire un valore e controlla che il valore inserito sia nell'intervallo __[min,max]__, fino a che il valore inserito non è _valido_, ovvero nell'intervallo.
3. restituisce il primo valore _valido_ inserito dall'utente.


## Esercizio 4

Modificare il programma scritto per l'Esercizio 2 in modo tale che i valori inseriti siano voti, ovvero siano tutti nell'intervallo __[18,30]__. A tal fine, usare la funzione __leggiValido__ definita nell'esercizio precedente.

## Esercizio 5

Definire le funzioni:

- __float media(int v[], int ndati)__
- __float devstd(int v[], int ndati)__

che calcolino, rispettivamente, la media e la deviazione standard di una _n-upla_ __v__ contenente __ndati__ dati.

A tal fine potrebbe essere utile sapere che la libreria __cmath__ 
(__#include \<cmath\>__)
mette a disposizione le funzioni

__float pow(float a, float p)__
e
__float sqrt(float a)__

che calcolano, la prima la potenza _p_-esima del numero _a_ e la seconda la radice quadrata di _a_.
P.S.: __sqrt(a) = pow(a,0.5f)__.

## Esercizio 6

Definire una funzione __isOutlier__ che, preso in ingresso un valore intero __val__ e due valori __float__ __media__ e __standardDev__, restituisca

- __true__ se __|val-media|>3*standardDev__
-  __false__ altrimenti

P.S.: di che tipo è il valore restituito dalla funzione?
P.P.S.: __|a| = fabs(a)__ (__fabs__ definita in __cmath__).

## Esercizio 7

Scrivere le funzioni __minimoArray__ e __massimoArray__ che preso in ingresso un array di __float__ e un intero che indica il numero di dati presenti nell'array, restituiscano rispettivamente la _posizione_ del minimo e del massimo valore contenuto nell'array.

Scrivere quindi un programma che, caricato un array di __float__ di 40 elementi con qualche valore, usi le funzioni definite per determinare il valore minimo e massimo inseriti e  li stampi a video.

## Esercizio 8

Scrivere una funzione

__void scambia(int v1, int v2)__

che scambi il contenuto delle variabili intere __v1__ e __v2__.

Scrivere quindi una funzione 

__void scambia(int v[])__

che scambi le prime due componenti di un vettore (di almeno due elementi).

Verificare il comportamento delle due funzioni.

NOTA: __void__: è la parola chiave del C++ per indicare un "non tipo". Le funzioni scambia, in effetti, non restituiscono nulla, operano solo lo scambio.

## Esercizio 9

Scrivere una funzione __balance__ che:

- Legga da tastiera una sequenza di valori interi (strettamente positivi o strettamente negativi) terminata dal valore sentinella zero.
- Determini se il numero degli elementi positivi inseriti è maggiore del numero degli elementi negativi inseriti. In tal caso la funzione deve restituire il valore __true__; altrimenti la funzione deve restituire il valore __false__.

NOTA: quale è il tipo del _dominio_ della funzione? E del codominio?

## Esercizio 10

Scrivere una funzione __detectSeq__ che, letta una sequenza di valori interi positivi terminata dal valore sentinella zero determini se nella sequenza inserita sono stati inseriti almeno una volta 4 valori consecutivi strettamente maggiori di 10. In tal caso, la funzione dovrà restituire __true__, altrimenti la funzione dovrà restituire __false__.

Attenzione: la funzione dovrà ignorare eventuali valori negativi inseriti.
