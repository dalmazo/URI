#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
int main() {
     
     int A;
     double B;
     
     cin >> A;
     cin >> setprecision(1) >> B;

     printf("%.3f km/l\n", A/B);
 
    return 0;
}