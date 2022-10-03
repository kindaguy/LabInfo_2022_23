# Laboratorio 2: Hello world, overflow, precisione

In questo laboratorio scriveremo alcuni semplici programmi in C++. 

## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e monefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. Questo consente, tra l'altro, anche a gedit di inferire la tipologia di contenuto del file e evidenziare la sintassi.

## Esercizio 0
Scrivete un programma che, letto in ingresso il vostro numero di matricola, stampi a video il messaggio

__Benvenuto `<matricola> `__

## Esercizio 1

Completate il programma contenuto nel file __letturaTastiera.C__.
In particolare
1. provate a leggere e a stampare un numero razionale e a registrarlo in un contenitore intero (variabile __int__).
1. provate a leggere un numero razionale dopo aver fatto il punto precedente.

## Esercizio 2
1. Scrivere un programma che, letto da tastiera un numero intero, stampi a video il numero successivo e il numero precedente a quello fornito in ingresso.
1. Immettete come input 2147483647. Sommate 1, registrate il valore ottenuto nella variabile intera __int c__ e stampate il risultato.
1. Sottraete 1 a __c__ e stampate il risultato.

Discutiamone....

## Esercizio 3
1. Scrivere un programma che, registrato un valore letto in ingresso in una variabile di tipo __float__ stampi a video il numero letto incrementato di 0.1.
1. Immettere come input il valore 12345 e controllare il risultato.
1. Immettere come input il valore 123456 e controllare il risultato.

## Esercizio 4
Scrivere un programma che legga in ingresso due numeri interi e li memorizzi nelle variabili __int a__ e __int b__ rispettivamente.

Stampare a video __a+b__, __a-b__, __a*b__ e __a/b__. Cosa osserviamo? 
Provate poi a stampare il risultato delle seguenti operazioni:
1. (1.0*a)/b
2. 1.0*(a/b)
3. a/(1.0*b)
Cosa osservate?

## Esercizio 5

Nella vita bisogna prendere decisioni e comportarsi di conseguenza...

Scrivere un programma che legge in ingresso un numero, diciamo __x__, intero e stampi a video il messaggio __"il numero è positivo"__ se __x>=0__ o __"il numero è negativo"__ altrimenti.

NOTA: si tratta di un argomento non introdotto. Provate a controllare il documento a questo link https://en.cppreference.com/w/cpp/language/if e vedete cosa riuscite ad evincere...

