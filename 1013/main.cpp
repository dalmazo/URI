#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
int main() {
     
     int A,B,C;
     
     cin >> A >> B >> C;

     int maior = (A+B + abs(A-B))/2;

     maior = (maior+C + abs(maior-C))/2;

     printf("%i eh o maior\n", maior);
 
    return 0;
}