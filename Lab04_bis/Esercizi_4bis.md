# Laboratorio 4 "bis":   funzioni
Questa sessione di laboratorio è dedicata allo svolgimento di esercizi sulle funzioni: dichiarazione, definizione, uso. Useremo anche funzioni atte al caricamento di array (side effects).

Il completamento degli esercizi qui sotto elencati è un buon indicatore della vostra comprensione degli argomenti fino ad ora trattati nel corso.

## Esercizio 1
Scrivere un programma che dichiari un vettore di 20 elementi interi (__int__), una variabile intera __quanti__ e due valori interi __min__ e __max__.

Il programma dovrà chiedere all'utente di inserire da tastiera i valori da assegnare a __min__ e __max__ e poi delegare ad una funzione il compito di caricare i valori inseriti dall'utente.

Nello specifico, il caricamento dovrà essere delegato ad una funzione

__int caricaVoti(int v[], int nmax, int min, int max)__

che prende in ingresso un array di interi (__int v[]__), un intero __nmax__ che contiene il numero massimo di voti inseribili dall'utente (pari alla dimensione del vettore),  e i valori __min__ e __max__ che definiscono l'intervallo dei volti validi.

La funzione dovrà occuparsi del caricamento dei voti, incluso il controllo dell'inserimento di voti validi (vedi funzione __leggiValidi__ discussa la settimana scorsa). La funzione dovrà restituire il numero di voti inseriti e, per side effect, i voti (che saranno stati registrati nell'array passato come parametro attuale al posto del parametro formale __int v[]__). Verificare il funzionamento della funzione stampando a video (dal __main__) il numero di voti caricati e tutti i voti caricati.

## Esercizio 2

Estendere il programma definito nell'Esercizio 1 includendo il calcolo (e la stampa a video) del voto medio e della deviazione standard dei voti. Ricordate che queste funzioni le avete già definite svolgendo gli esercizi della settimana scorsa.

## Esercizio 3

Implementare la funzione:

__int eliminaSwap(int v[], int pos, int ndati)__

che preso in ingresso un vettore di interi __v__, la posizione __pos__ dell'elemento da eleminare, e il numero __ndati__ di dati presenti nel vettore, elimini l'elemento in posizione __pos__ sovrascrivendo l'ultimo dato presente nel vettore (in posizione __ndati-1__). La funzione deve restituire:

- Il numero di dati aggiornato se la posizione passata è valida (__0<=pos<= ndati-1__).
- -1 altrimenti

Chi chiama la funzione (__main__?) deve registrare la dimensione dei dati aggiornata in una variabile e stampare a video il messaggio 

-"Elemento in posizione ... eliminato", se l'eliminazione ha avuto successo
-"Posizione non valida"  altrimenti.


## Esercizio 4

Implementare la funzione 

__int eliminaShift(int v[], int pos, int ndati)__

che elimini l'elemento in posizione __pos__  spostando a sinistra tutti gli elementi in posizione __pos+1, pos+2,...,ndati-1__ a sinistra di una posizione (secondo metodo di eliminazioe visto a lezione). Il valore restituito dalla funzione, e la stampa da parte della funzione chiamante (__main__?) deve essere lo stesso che nell'esercizio precedente.


## Esercizio 5

Usando la funzione definita nel file __carica_file.C__ (copiatela e incollatela!), una volta caricato un vettore di __float__ di dimensione, in memoria, di 300 elementi, usare le funzioni 

- __float media(float v[], int ndati)__
- __float devstd(float v[], int ndati)__

che calcolino, rispettivamente, la media e la deviazione standard di una _n-upla_ __v__ contenente __ndati__ dati, per determinare la media e la deviazione standard del vettore dei dati.

Per vostra informazione:

- i dati su file sono 100.
- la media vale: -0.406854
- la deviazione standard vale (circa): 3.8688

Fatto questo, eliminare dal vettore dei dati tutti gli elementi _outliers_ ovvero quegli elementi che distano dalla media piu`di 3 volte la deviazione standard. A tal fine potreste usare la funzione __isOutlier__ definita per la soluzione dell'Esercizio 6 della settimana scorsa ovvero (per chi avesse la memoria breve):

## Esercizio 6 (settimana 4....)

Definire una funzione __isOutlier__ che, preso in ingresso un valore intero __val__ e due valori __float__ __media__ e __standardDev__, restituisca

- __true__ se __|val-media|>3*standardDev__
-  __false__ altrimenti

P.S.: di che tipo è il valore restituito dalla funzione?
P.P.S.: __|a| = fabs(a)__ (__fabs__ definita in __cmath__).


Sempre per vostra informazione: gli outliers sono 2.... e per sicurezza, quando eliminate un elemento, stampatene a video il valore....