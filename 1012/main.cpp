#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
     
     double A,B,C;
     double pi = 3.14159;

     cin >> setprecision(1) >> A >> setprecision(1) >> B >> setprecision(1) >> C;

     printf("TRIANGULO: %.3f\n", (A*C/2));
     printf("CIRCULO: %.3f\n", (pi*C*C));
     printf("TRAPEZIO: %.3f\n", (A+B)*C/2);
     printf("QUADRADO: %.3f\n", (B*B));
     printf("RETANGULO: %.3f\n", (B*A));
 
    return 0;
}