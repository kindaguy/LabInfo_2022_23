# Laboratorio 6: allocazione dinamica, struct, myArrayT


## Esercizio 1
Il file __misure.dat__ contiene un numero non precisato di misure razionali (in singola precisione). Contare e stampare a video il numero di dati registrati sul file. Caricare quindi i dati in un vettore allocato dinamicamente di dimensione pari al numero di dati su file.

Tutte queste operazioni devono delegate a due funzioni. La prima

__int contaDati(char nomefile[])__

deve restituire il numero di dati presenti su file (-1 in caso di problemi); la seconda

__float * caricaDati(char nomefile[], int dim)__

deve invece:
- Allocare dinamicamente un vettore di dimensione __dim__,
- Inserire nel vettore i valori presenti su file,
- Restituire l'indirizzo del vettore allocato (__NULL__ se qualcosa va storto).

## Esercizio 2

Definire una funzione:

__float *caricaDatiFile(char nomefile[], int *pDim)__

che, usando le funzioni __contaDati__ e __caricaDati__ definite nell'esercizio precedente, si occupi di:

- caricare i dati in un vettore di __float__ allocato dinamicamente, e restituire l'indirizzo di inizio dell'array stesso in uscita.
- registrare il numero dei dati (ovvero la lunghezza dell'array) per riferimento sulla variabile intera passata per riferimento (indirizzo) alla funzione stessa.

## Esercizio 3

Dichiarata la struttura: 

__struct myArrayFloat{__
    __int size;__
    __int used;__
    __float *raw;__
__};__

modificare la funzione dell'esercizio precedente in modo tale che, preso in ingresso il nome del file, resituisca un __myArrrayFloat__ opportunamente inizializzato con i valori del file __misure.dat__. Altrimenti detto la funzione avrà _signature_

__myArrayFloat caricaDatiFile(char nomefile[])__

e restituirà una __struct__ di tipo __myArrayFloat__ con:

- campo __dim__: numero di dati sul file.
- campo __used__: numero di dati su file. Infatti l'array è dimensionato per contenere esattamente i dati su file.
- campo __raw__: contiene indirizzo dell'array allocato dinamicamente e contenente i dati. 
     

## Esercizio 4

Usando una variabile

__myArrayFloat dati__

inizializzata attraverso la funzione __caricaDatiFile("misure.dat")__ [vedi esercizio precedente], calcolare la media e la deviazione standard dei dati ed eliminare gli _outliers_. Stampare a video:
- il numero (__nBad__) e il valore dei dati eliminati ,
- il numero (__nGood__) di dati sopravvissuti alla pulizia,
- il vettore dei dati ripuliti.

## Esercizio 5

Resize: una delle operazioni più ricorrenti quando si manipolano dati è l'eliminazione degli elementi e, quando necessario, la riduzione (resize verso il basso) degli array che contengono i dati per evitare di lasciare posizioni vuote.

Provate a implementare l'operazione di resize verso il basso riversando gli __nGood__ dati non outliers ottenuti nell'esercizio precedente in un vettore di dimensione __nGood__:
1- allocando un nuovo vettore di dimensione __nGood__
2- ricopiando i primi __nGood__ dati dal vecchio vettore dei dati al nuovo.
3- eliminando il vecchio vettore (quello di dimensione __nGood+nBad__ per intenderci
4- assegnando al campo __raw__ di __dati__ l'indirizzo del nuovo vettore.

## Esercizio 6

Il file "puntiPiano.dat" contiene un numero non precisato di coordinate del punti sul piano cartesiano. Ciascun punto è descritto su una riga da due valori razionali in doppia precisione, il primo indica l'ascissa, il secondo l'ordinata. Una volta determinato e stampato a video il numero di punti descritti nel file, contare il numero di punti che cadono dentro ad una circonferenza di raggio unitario centrata nell'origine del piano O=(0,0). Per svolgere l'esercizio potrebbe essere utile definire la t-upla

__struct puntoR2{double x; double y};__

e definire una funzione 

__bool isIn(puntoR2 p, double r)__

che restituisce __true__ se il punto si trova all'interno della circonferenza di centro nell'origine e raggio __r__, false altrimenti. 



