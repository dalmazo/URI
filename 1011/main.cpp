#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
     
     double i;
     double pi = 3.14159;

     cin >> i;

     printf("VOLUME = %.3f\n", ( (4.0/3.0) * pi * i*i*i));
 
    return 0;
}