#include <iostream>
#include <fstream>

#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

   double a;

   int appo;

   srand(time(NULL));
   appo = rand();
   a = ((double)appo)/((double)RAND_MAX);

   cout << endl << RAND_MAX << endl;

   cout << appo << endl;
   
   cout << endl << a <<endl;

   return 0;
}