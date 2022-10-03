#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   float a = 12345678.0f;
   float b = 123456789.0f;

   cout << endl << "a= " << setprecision(10) << a << endl;
   cout << endl << "b= " << setprecision(10) << b <<endl;

   cout << endl << a+0.1f << endl;
   cout << endl << 1.23f << endl;
   return 0;
}