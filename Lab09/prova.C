#include "../TamaLib/libstatTama.h"
#include <iostream>

using namespace std;


int main(){

   float v[5] = {1,2,3,4,5};

   float m;

   m = media(v,5);

   cout << endl << "Media " << m << endl;

}