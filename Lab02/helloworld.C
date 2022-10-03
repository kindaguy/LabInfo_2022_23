//Direttive a preprocessore (no panic...)
//Questa e` una parte di "preambolo" del programma dove:
//-Si includono/importano gli strumenti che serviranno al nosto programma/codice.
//-Si definiscono costanti letterali (le vedremo)
#include <iostream> //Libreria con funzionalita` input/output tastiera/video


//Sono un commento su una riga (il compilatore mi ignora....)
/*
 Sono un commento su una o piu` righe
 (il compilatore mi ignora...)
 */
//I commenti sono fondamentali per la documentazione del codice.
//Servono sia a chi scrive che a chi legge il codice per 
//capire/ricordare che cosa fa il codice o particolari scelte.


using namespace std; //Rimarra` un mistero, ma va messo....
//Ok...il C++ propone una costellazione di librerie standard (std).
//I nomi delle cose definite in quelle librerie iniziano con 
//std::
//Mettendo il comando qui sopra si puo` omettere l'"std::".
//Diciamo che ci risparmia una fatica, ma non piace ai programmatori
//veri.....


//Qui inizia il programma
int main(){

    //Stampa a video (c standard output)... 
    cout << "Hello world!" << endl; 

    //la concatenazione "Hello world!" <> "acapo" 
    //Senza "using namespace std...."

    //std::cout << "Hello world!" << std::endl;

    return 0;
    //Restituisci zero: altro mistero da risolvere...
    //...ci torniamo....
}
//qui finisce il programma.


