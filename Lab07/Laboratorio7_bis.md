# Laboratorio 7: array di struct

Gli esercizi che seguono sono strettamente sequenziali e correlati. Lo svolgimento degli stessi deve portare all'implementazione di un _unico_ programma eseguibile.

## Esercizio 1
Il file __buche.dat__ contiene, riga per riga, la descrizione di un numero imprecisato di _cerchi (buche)_, che garantiamo essere disgiunti, sul piano. Ciascun cerchio è descritto da una quadrupla contenente, nell'ordine, le coordinate del centro $(x_c,y_c)$, espresse come razionali in singola precisione, il raggio del cerchio (sempre __float__) e un'etichetta (__char__). 

Definita la t-upla 

__struct buca{ 
    float xc; //Ascissa centro
    float yc; //Ordinata centro
    float r;  //Raggio
    char lab; //Etichetta
    int n_part; //Vedi dopo...
};__

caricare tutti i cerchi descritti nel file __buche.dat__ in  un vettore di __buca__ allocato dinamicamente. Stampare a video il numero di cerchi letti e  la loro descrizione $(x_c,y_c, \text{raggio}, \text{etichetta})$. Il campo __n_part__  verrà riempito in seguito. 

## Esercizio 2
Il file __particelle.dat__  contiene, riga per riga, la descrizione di un numero imprecisato di _punti materiali_ (particelle) sul piano. Ciascuna particella è descritta da una quadrupla $(x,y,c,m)$ dove $x$ e $y$ sono le coordinate della particella, $c$ \`e un intero relativo che indica la carica della particella, e $m$ la sua massa.

Definita la struttura
__struct part{
   float x; //Ascissa particella
   float y; //Ordinata particella
   int c;   //Carica particella
   float m; //Massa particella
};__

caricare tutte le particelle descritte nel file __particelle.dat__ in un vettore di __part__ allocato dinamicamente. Stampare a video il numero di particelle descritte nel file e la descrizione delle prime 3 e delle ultime 3 particelle caricate.


## Esercizio 3

Per ogni cerchio caricato nell'Esercizio 1, contare e stampare a video il numero di particelle che ricadono al suo interno (circonferenza esclusa), aggiornare 
di conseguenza il campo __n_part__. Stampare a video e sul file __risultati.dat__ la descrizione aggiornata dei cerchi, il numero complessivo di particelle che cadono dentro ai cerchi e il numero di particelle che non cadono in nessun cerchio. 

Per lo svolgimento di questo esercizio potrebbe essere utile usare la soluzione dell'Esercizio 6.6, ovvero usare una versione, opportunamente modificata, della funzione

__bool isIn(puntoR2 p, double r)__.

## Esercizio 4

Per ogni cerchio, determinare, stampare a video e registrare sul file __risultati.dat__, già usato nell'esercizio precedente, le coordinate del centro di massa del sistema fatto dalle particelle all'interno del cerchio. Ricordiamo che l'ascissa del centro di massa è definita come 

$x_\text{cm} = \frac{\sum_{i=1}^N x_i m_i}{\sum_{i=1}^N m_i}$,

dove $N$ indica il numero di particelle del sistema di particelle considerato $x_i,m_i, i=1,2,\ldots N$ indicano rispettivamente l'ascissa e la massa dell'$i$-esima particella. 

Lascio alla vostra fantasia la definizione  dell'ordinata del centro di massa...


NOTA: controllate la documentazione di __\<fstream\>__ per capire come aprire un file esistente e appendere nuovo testo.