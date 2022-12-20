# Laboratorio 10: Ordinamento e dintorni

Partiamo da un semplice esercizio sull'uso dei riferimenti/alias. Discutiamo poi l'implementazione del MergeSort per l'ordinamento di un vettore di dati semplici (__int__). Applicheremo quindi algoritmi di ordinamento a vettori di t-uple: questo ci consentirà di toccare con mano l'ordinamento per chiave, e verificare che una volta implementato un algoritmo di ordinamento per un tipo di dato, lo stesso può essere adattato ad altri tipi di dato con modifiche minime.



## Esercizio 1 
Implementare la funzione 
__void scambia(int &ra, int &rb)__
che usa _parametri formali_ di tipo _riferimento_ per scambiare i valori contenuti nelle due variabili passate come _parametri attuali_. Verificarne il funzionamento.

NOTA: potrebbe essere utile aggiungere alla nostra libreria  di funzioni diverse specializzazioni di __scambia__ su diversi tipi.

## Esercizio 2

La libreria tamaSorting(.h, .C) implementa, tra le altre, la funzione di ordinamento _SelSort_ discussa a lezione e (sperabilmente) implementata anche da voi. Insieme a _SelSort_, la libreria implementa anche la funzione ausiliaria 
__void scambia(int *pa, int *pb)__
che conosciamo bene, e che implementa lo scambio del contenuto di due variabili passate per riferimento usando i puntatori. 

Modificare la funzione _SelSort_ (mia o vostra) in modo tale che usi la funzione __scambia__ definita nell'Esercizio 1.

## Esercizio 3

Discutiamo insieme un'implementazione di _MergeSort_ (ricorsivo) per l'ordinamento di un vettore di interi. La funzione ordinerà il vettore in ordine non decrescente ovvero permutando gli elementi dell'array in modo tale che __v[i] <= v[j]__ per __i < j__.

__Proposta__: definite una funzione __MergeSortInv__ che ordini un array di interi in ordine non crescente, ovvero permutando gli elementi dell'array in modo tale che __v[i] >= v[j]__ per __i < j__.
Riflessione: dove va modificato il codice del MergeSort originale?


# Macro-esercizio (stile tema d'esame)

## Esercizio 4
Il file __sfere.dat__ contiene la descrizione di insieme di sfere. Per ciascuna sfera, il file riporta il diametro reale (in mm) e il colore, indicato da un carattere (’b’ per blu, ’g’ per giallo, ’r’ per rosso). Il file contiene quindi un numero __non precisato__ di coppie (diametro, colore).

Il file __sfera.h__ contiene invece la definizione della struttura (t-upla) __sfera__.

Caricare le informazioni sulle sfere contenute in __dati.dat__ in un vettore di __sfera__ allocato dinamicamente. Stampare a video la descrizione delle prime 3 e delle ultime 3 sfere caricate. Attenzione: alcuni campi delle t-uple rimangono non inizializzati. Poco male, le useremo più avanti.

Attenzione: il file __sfera.h__ può essere incluso in tutti i file che usano la struttura sfera. Notate lo strano codice che "incapsula" la definizione della struttura....

## Esercizio 5
Ordinare il vettore delle sfere in ordine di diametro effettivo non decrescente. Stampare a video la descrizione delle prime e delle ultime 3 sfere nel vettore ordinato.

Usare uno degli algoritmi di ordinamento che avete a disposizione (selection sort implementato da voi, selection sort/mergesort implementato da me e disponibile nella cartella). Meditate: In quale punto vanno cambiati i codici? Ricordate: vale l'assegnamento tra due t-uple dello stesso tipo.

## Esecizio 6

Il file __tolleranze.dat__ contiene delle terne che indicano il colore (con lo stesso carattere ’b’, ’g’ o ’r’ usato nel file sfere.dat), il diametro nominale e la tolleranza (limite superiore del valore assoluto dello scarto tra il diametro reale di una sfera e il suo diametro nominale). Completare i campi delle sfere caricate usando i dati contenuti nel file __tolleranze.dat__. Per intenderci: nel campo __exact__ inserire il valore del diametro nominale delle sfere di colore corrispondente, nel campo __atoll__ la tolleranza e nel campo __discr__ il la differenza (con segno) tra il diametro reale (__diam__) e il diametro nominale (__exact__).

Questo esercizio richiede di ragionare un attimo.

## Esercizio 7

Eliminare dal vettore delle sfere tutte le sfere aventi diametro reale distante (in valore assoluto __fabs()__) dal diametro nominale più della tolleranza. Si tratta di "riciclare"  il codice per la scrematura già discusso qualche lab fa. Stampare a video:
1. Il numero delle sfere eliminate.
2. La descrizione delle sfere elimuinate.

## Note

1. Nell'economia degli esercizi proposti, potrebbe essere conveniente scrivere una funzione per la stampa (ben formattata) delle sfere.

2. Si tratta ovviamente di un macro-esercizio, che si concretizzerà in un solo __main__ che farà diverse cose. Incapsulare ciascun esercizio in una funzione/procedura, che eventualmente ne richiami altri.

3. Attenzione, sempre, ad inizializzare i contatori.

4. Cercate di mettere le funzioni/procedure in un file separato in modo tale da esercitarvi con la compilazione separata. Provate ad usare il __make__ e il __makefile__.

5. Come vi verrà chiesto in sede di esame, predisponete la soluzione del macro-esercizio creando una cartella __Cognome_matricola__ dove Cognome è il vostro cognome, matricola è la vostra matricola (ad es. __Tamacelli_123456__), che dovrà contenere tutti i file necessari alla compilazione del programa (file contenente il mail e le librerie), un makefile che consenta di compilare ed eseguire il programma tramite i comandi __make compila__ e __make esegui__ rispettivamente e i file di dati necessari all'esecuzione dell'esercizio stesso. Tutti i nomi dei file aperti dal programma dovranno riferirsi al path locale (per intenderci, dovrete usare cose tipo __file_in.open("dati.dat")__. 
# ...e buone feste a tutti voi!!!!