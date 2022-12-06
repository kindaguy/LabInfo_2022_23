#include "acaso.h"

void initRand(){
    srand(time(NULL));
}

int acaso(int min, int max){

    return rand()%(max-min+1)+min;
}