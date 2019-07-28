#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
     
     int i[4];
     float f[2];

     cin >> i[0] >> i[1] >> setprecision(2) >> f[0];
     cin >> i[2] >> i[3] >> setprecision(2) >> f[1];

     printf("VALOR A PAGAR: R$ %.2f\n", ((i[1]*f[0])+(i[3]*f[1])));
 
    return 0;
}