#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
     
     string A;
     cin >> A;
     double B;
     cin >> setprecision(2) >> B;
     double C;
     cin >> setprecision(2) >> C;

     printf("TOTAL = R$ %.2f\n", (B+(C*.15)));
 
    return 0;
}