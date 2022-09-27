# Laboratorio 1: Linux, filesystem, shell e comandi di base
In questo laboratorio introdurremo il sistema operativo Linux e l'organizzazione dell'informazione all'interno del calcolatore (_filesystem_). Introdurremo poi l'assoluto protagonista delle nostre sessioni di lavoro, la _shell di sistema_, e alcuni dei comandi fondamentali per l'uso quotidiano della shell (muoversi all'interno del filesystem, creare, cancellare files, lanciare programmi).

## Esercizio 1 (cd,ls)
1. Portarsi alla radice (_root_) del filesystem usando il comando  
__cd /__  
Attenzione allo spazio tra __cd__ e __/__
1. Visualizzatre (listare __ls__) il contenuto della cartella __/__ tramite il comando  
__ls__
1. Visualizzare più dettagli sul contenuto della cartella con usando l'opzione __-l__  
__ls -l__
1. Percorrere l'albero delle directory fino a portarsi nella propria _home directory_ usando il comando  
__`cd <nomedirectory> `__  
il numero di necessario di volte.
1. Tornare alla _root_ e poi tornare nella propria home "velocemente"  tramite il comando  
__cd `~`__

## Esercizio 2 (touch, rm)
1. Nella vostra _home directory_ create una cartella _Laboratorio1_ con il comando  
__mkdir Laboratorio1__
1. Controllate che la cartella sia stata creata (__ls__)
1. Spostatevi nella cartella _Laboratorio1_ e create una cartella _Appo_
1. Controllata la presenza di _Appo_, create all'interno di _Appo_ due files di nome _pippo.dat_ e _poldo.dat_ usando il comando  
__touch `<nomefile> `__  
Il comando __touch `<nomefile> `__ crea un file di nome _nomefile_ se il file non è presente. Se il file è già presente, ne aggiorna solo la data di ultima modifica, lasciando tutto il resto invariato. Controllare usando il comando __ls -l__
1.Rimuovete il file _pippo.dat_ attraverso il comando  
__rm pippo.dat__  
Controllate l'effettiva eliminazione del file.
1. Spostatevi nella directory contenente la directory _Appo_ (__cd ..__) e cancellate _Appo_ usando il comando  
__rm -r Appo__  
L'opzione __-r__ consente di rimuovere _ricorsivamente_ la cartella e il suo contenuto. 

ATTENZIONE: il comando __rm__ cancella definitivamente il file. Non lo sposta nel _Cestino_. Un file/directory cancellato con __rm__ è pertanto definitivamente perso!

## Esercizio 3 (cp,mv)

1. All'interno della directory _Laboratorio1_ create un file _primo.C_. Fatto questo, copiate il file _primo.C_ in _primo2.C_ usando il comando  
__cp primo.C primo2.C__
1. Rinominate il file _primo2.C_ in _secondo.C_ usando il comando  
__mv primo2.C secondo.C__
1. Spostate il file _secondo.C_ nella vostra _home_ usando il comando  
__mv secondo.C ../__  

# Eserczio 4 (ssh,scp)
Per completare questo esercizio è  necessario essere registrati al Laboratorio di Calcolo (LdC) del Dipartimento di Fisica. Chi non l'avesse ancora fatto è pregato di provvedere seguendo le istruzioni fornite sul sito Ariel del corso.

1. Collegarsi a (una) macchina del LdC con il comando  
__ssh `<usermame>@tolab.fisica.unimi.it`__  
Vi verrà richesta la password (attenzione: quando digitate non vedrete niente. Non è  un errore, è voluto). Collegati al laboratorio eseguite i comandi proposti negli Esercizi 1,2,3.
1. Concludete la sessione remota digitando __exit__ da termimale.
1. Copiate il file _secondo.C_ nella vostra _home_ nella cartella _Laboratorio1_ sulla macchina remota (in LdC) usando il comando  
__scp secondo.C `<username>@tolab.fisica.unimi.it:~`__  
Nota: i ":" servono e il simbolo  __`~`__ indica la vostra _home_ 

## Nota
Potete trovare altri comandi e opzioni, insieme ad un breve riassunto di quanto visto oggi nel documento "Il mio primo giorno in Laboratorio di Calcolo" sul sito Ariel del corso.
