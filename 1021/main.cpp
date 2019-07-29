#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <math.h>
 
using namespace std;

void cedula( double val, double *pont ) {

     int i;

     i = *pont/val;
     *pont -= i*val;

     printf("%d nota(s) de R$ %.2f\n", i, val);
}

void moeda( double val, double *pont ) {

     int i;

     i = floorf(*pont/val);
     *pont -= i*val;

     printf("%d moeda(s) de R$ %.2f\n", i, val);
}

int main() {
     
    void cedula(double, double*);
    void moeda(double, double*);

     double B;
     cin >> setprecision(2) >> B;
     
     printf("NOTAS:\n");

     cedula(100, &B);
     cedula(50, &B);
     cedula(20, &B);
     cedula(10, &B);
     cedula(5, &B);
     cedula(2, &B);

     printf("MOEDAS:\n");

     moeda(1, &B);
     moeda(.50, &B);
     moeda(.25, &B);
     moeda(.10, &B);
     moeda(.05, &B);
     moeda(.01, &B);

    return 0;
}
 
