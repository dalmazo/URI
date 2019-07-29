#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <math.h>
 
using namespace std;

void cedula( int val, int *pont ) {

     int i;

     i = *pont/val;
     *pont -= i*val;

     printf("%i nota(s) de R$ %i,00\n", i, val);
}

int main() {
     
    void cedula(int, int*);

     int B;
     cin >> B;
     
     printf("%i\n", B);

     cedula(100, &B);
     cedula(50, &B);
     cedula(20, &B);
     cedula(10, &B);
     cedula(5, &B);
     cedula(2, &B);
     cedula(1, &B);
    
    return 0;
}
 
