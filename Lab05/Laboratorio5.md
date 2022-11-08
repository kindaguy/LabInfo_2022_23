# Laboratorio 5: caricamento dati da file e allocazione dinamica di array

Il caricamento/la scrittura di dati da/su file richiede l'uso di uno strumento nuovo: gli __fstream__, o _file stream_. Il caricamento di dati da file, inoltre, può essere facilitato dall'uso di array dinamicamente allocati di dimensione determinata a runtime.

Nota metodologica: nelle slides delle lezioni 5 e 6 trovate la documentazione di ___tutti___ gli strumenti che vi servono per questa sessione di laboratorio.


## Esercizio 1 (Ciclo Spoletini)

Il file __dati.dat__ contiene un numero non precisato di dati razionali (__float__). Scrivere un programma che determini il numero di dati presenti su file implementando il _ciclo Spoletini_ visto a lezione. ATTENZIONE: il programma non dovrà caricare i dati da nessuna parte, solo deteminare il numero di valori scritti su file (sono 100...ed è lo stesso file di dati da cui caricavate i dati la volta scorsa...).

Ricordatevi che uno stream va chiuso quando si è finito di usarlo (con l'istruzione __.close()__).

## Esercizio 2
Modificate la soluzione dell'Esercizio 1 in modo tale che i dati scritti nel file __dati.dat__ vengano copiati, uno alla volta, nel file __dati_copia.dat__. A tal file usare un __ofstream__. Ricordate che spazi e "a capo" dovete gestirli voi...


## Esercizio 3

Estendere il programma definito nell'Esercizio 1 includendo il caricamento effettivo dei dati. Quello che dovete fare, una volta determinato il numero di dati da caricare è:

- Allocare dinamicamente un vettore di float di __ndati__ componenti, dove __ndati__ è il numero determinato nell'esercizio precedente.

- Aprire nuovamente lo stream di input sul file __dati.dat__ e caricare i dati nell'array allocato dinamicamente.

- Chiudere lo stream di input

ATTENZIONE: per quanto i nostri programmi siano semplici e non possano fare danni eccessivi, ricordatevi che i vettori allocati dinamicamente devono essere allocati dal programma stesso quando non servono più. Quindi prendete l'abitudine di scrivere una __delete [] vett__ (dove __vett__ è il nome che  dato alla variabile __float *__ in cui registrerete l'indirizzo dell'array) subito dopo l'istruzione __new vett....__, in modo tale da non dimenticavene. Tutte le istruzioni che fanno uso del vettore dovranno essere inserite tra  __new__ e  __delete []__.

## Esercizio 4

Come discusso a lezione, una volta creati gli array dinamici si usano come gli array statici che abbiamo usato fino al laboratorio scorso. Giusto per convincervi, usate le funzioni:

- __float media(float v[], int ndati)__
- __float devstd(float v[], int ndati)__

definite nel laboratorio scorso per calcolare la media e la deviazione standard dei dati caricati nell'esercizio precedente. Considerato che i dati sono gli stessi della volta scorsa, dovreste ottenere gli stessi risultati.

## Esercizio 5

Usate la funzione __isOutlier__ definita per la soluzione dell'Esercizio 6 della settimana 4 (e usata ancora nel laboratorio scorso) per determinare ed eliminare dal vettore dei dati gli outliers. Stampate a video il numero di elementi eliminati e la dimensione del campione a seguito della scrematura dei dati "cattivi". Indicheremo nel seguito con __nclean__ il numero di dati sopravvissuti alla scrematura.

Fatto questo:

- Allocate dinamicamente un vettore di __nclean__ elementi __float__.
- Copiate tutti gli elementi del vettore dei dati nel nuovo vettore.
- Deallocate il vecchio vettore.
- Stampate i dati contenuti nel nuovo vettore nel file __dati_clean.dat__.

NOTA: abbiamo visto due algoritmi per l'eliminazione di un elemento da un array. Considerando che il vettore dei dati non presenta una struttura particolare (per esempio, non è ordinato), usate quello che preferite.

## Esercizio 6

Il file __dati_header.dat__ ha il seguente formato:

- il primo valore è un numero intero, che indica il numero, diciamo _n_ di valori __float__ che seguono
- _n_ valori __float__

Scrivere un programma che carichi i dati in un vettore di __float__ allocato dinamicamente di dimensione _n_. Notate che in questo caso non è necessario l'uso del _ciclo Spoletini_ per la determinazione del numero di dati nel file, considerato che questa informazione viene fornita dal file stesso. 