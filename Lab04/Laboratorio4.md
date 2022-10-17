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

Scrivere le funzioni __minimoArray__ e __massimoArray__ che preso in ingresso un array di __float__ e un intero che indica il numero di dati presenti nell'array, restituiscano rispettivamente la posizione del minimo e del massimo valore contenuto nell'array.

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

## Esercizio 1
Scrivere un programma che chieda all'utente di inserire un numero intero positivo fino a che l'utente non inserisce effettivamente un numero positivo. Obbligatorio l'uso di un ciclo post-condizionale.

## Esercizio 2
Scrivere un programma che legga in ingresso una sequenza di numeri interi positivi terminata dall'inserimento, da parte dell'utente, dello zero. Il programma, oltre a calcolare la somma e la media aritmetica dei valori inseriti (vedi esercizio 4 settimana 2), dovrà anche calcolare la _varianza del campione_ definita come:
![](varcamp.jpeg) 

## Esercizio 3
Estendere le funzionalità del programma scritto per l'__Esercizio 2__ alla determinazione dei valori validi (>0) più grandi e più piccoli inseriti. Stampare a video anche gli elementi minimo e massimo individuati.

## Esercizio 4
Modificare le funzioni contenute nel file __stat01.C__ sostituendo ai cicli __while__ precondizionali presenti gli equivalenti cicli __for__.

## Esercizio 5
Dichiarato un vettore di 5 interi, modificare l'esercizio 4 in modo tale che:

1. L'utente inserisce 5 dati validi (questa volta >= 18). I dati validi vengano ciascuno memorizzato in una componente del vettore: il primo dato valido nella prima componente del vettore, il secondo dato valido nella seconda, e così via....
2.  Terminato l'inserimento dei dati il programma dovrà calcolare media e deviazione standard dei dati inseriti, insieme a minimo e massimo.
3. Per il calcolo della media e della deviazione standard, usate le funzioni contenute nel file __stat01.C__ (modificato nell'esercizio precedente. Copiate e incollate!)
4. Definite invece due funzioni __myMax__ e __myMin__ che, presi in ingresso un array di interi e la sua dimensione, restituiscano, rispettivamente, il valore massimo e minimo contenuti nel vettore.


__NOTA__: al punto __5.1__ cominciate assumendo che l'utente inserisca solo dati validi. Aggiungere poi un controllo nel luogo opportuno.
__SUGGERIMENTO__: per il controllo, usate il codice prodotto nell'__Esercizio 1__ dentro al __for__.
__ATTENZIONE__ Le funzioni in __stat01.C__ sono definite per vettori di __float__. Modificatele per lavorare su vettori di __int__. E occhio alle divisioni!!!!
