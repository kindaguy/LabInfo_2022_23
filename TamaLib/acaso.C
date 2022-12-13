#include "acaso.h"

void initRand(){
    srand(time(NULL));
}

int acaso(int min, int max){

    return rand()%(max-min+1)+min;
}

float acaso(float min,float max){
    return (max-min)*((float)rand()/RAND_MAX) + min; 
}

double acaso(double min,double max){
    return (max-min)*((double)rand()/RAND_MAX) + min; 
}