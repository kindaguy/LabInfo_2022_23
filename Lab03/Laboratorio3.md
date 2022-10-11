# Laboratorio 3: selezione, cicli (precondizionale,postcondizionale)

Gli esercizi vanno eseguiti nell'ordine proposto, questa volta. Attenzione alla differenza tra la _varianza del campione_ definita nell'__Esercizio 2__ e la varianza (deviazione standard) definita a lezione e usata negli esercizi __4__ e __5__.

## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e nomefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. Questo consente, tra l'altro, anche a gedit di inferire la tipologia di contenuto del file e evidenziare la sintassi.

## Esercizio 1
Scrivere un programma che stampi a video il modulo (valore assoluto) di un numero razionale (__float__) letto da tastiera.

## Esercizio 2

Scrivere un programma che, chiesti all'utente in ingresso (lettura da tastiera) due numeri razionali:
1. Salvi il valore più piccolo e il più grande rispettivamente in una variabile  di nome __minimo__ e __massimo__ (di tipo __float__).
2. Stampi a video __"Intervallo positivo"__ se l'intervallo __(minimo,massimo)__ è interamente contenuto nel semiasse positivo, __"Intervallo negativo"__ se invece è  contenuto nel semiasse negativo, __"Include zero"__ altrimenti.

## Esercizio 3
Scrivere un programma che
1. Chiede all'utente il valore minimo e massimo di un range di valori interi, diciamo  __a__ e __b__ con __a<b__ (cercate di mettere dentro l'input giusto, alrimenti  invertite __a__ e __b__ come nell'Esercizio 2). A questo punto abbiamo definito un range di valori _validi_ [a,a+1,...,b-1,b].
2. Successivamente alla definizione del range, chiede all'utente di inserire il valore intero, chiamiamolo __val__ finché il valore inserito non è all'interno del range dei valori validi. Una volta acquisito un dato valido, il programma dovrà stampare il valore e la sua distanza dal valore minimo e dal valore massimo. 

## Esercizio 4
Scrivere un programma che legga in ingresso una sequenza di interi positivi terminata dal _valore sentinella_ 0. Il programma dovrà stampare a video il numero di valori inseriti, la loro somma  e la loro media aritmetica.

A tal fine osserviamo che: 
- Servirà una variabile dove registrare il valore letto da tastiera
- Possiamo avvalerci di una variabile _contatore_, inizialmente avente valore 0, per contare il numero di dati immessi.
- Possiamo avvalerci un una variabile _accumulatore_, inizializzata a 0, per contenere la somma (parziale) dei valori immessi.
- Supponiamo, per semplicità, che l'utente non inserisca numeri negativi, quindi non sarà necessario, per ora, controllare la positività dei valori immessi.
- Dovremo prestare attenzione alla terminazione della sequenza: dovremo sicuramente usare un ciclo, ma il primo dato letto da tastiera va letto prima di testare la condizione. Il dato successivo va letto prima di ritestare la condizione.


## Esercizio 5
Modificare il programma definito nell'Esercizio 4 in modo tale che i valori inseriti siano nel range [18,19,...,30] (simuliamo l'inserimento di voti d'esame). Il valore sentinella, che determina la fine dell'acquisizione dei dati è sempre il valore 0.

## Esercizio 6
Modificare il programma al punto precedente considerando che il numero di voti da inserire è questa volta determinato prima di iniziare il caricamento dei voti stessi. Quindi non servirà più l'uso del valore sentinella 0.
In pratica, il programma dovrà chiedere all'utente di inserire il numero __nvoti__ di voti da registrare e poi caricare gli __nvoti__ voti ad uno ad uno controllando, per ogni voto inserito sia valido (vedi Esercizio 5).

## Esercizio 7
Scrivere il codice che implementa l'algoritmo di Euclide per il calcolo del Massimo Comun Divisore (MCD) visto a lezione, con le seguenti specifiche
1. Se anche solo uno degli operandi fosse negativo, il programma dovrà  stampare il messaggio: __Non funziono su numeri negativi__
1. Se anche solo uno dei due numeri è 0, il programma deve stampare: __Operazione non definita__
1. Altrimenti, il programma deve stampare il MCD ottenuto con l'algoritmo 
