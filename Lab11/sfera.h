//Direttiva a preprocessore:
//Verifica se la costante __SFERA_H__ è definita
#ifndef __SFERA_H__
//Se non è definita entra nel suo corpo (tutto quello che)
//precede #endif

//Questo comado definisce la costanten __SFERA_H__
#define __SFERA_H__

struct sfera{
  float diam;
  char col;
  float exact;
  float atoll;
  float discr;
};

//Fine del corpo dell'#ifndef.
#endif

//Questa costruzione consente di evitare di definire la
//struttura sfera più volte.