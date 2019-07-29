#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <math.h>
 
using namespace std;

int main() {

     int B;
     cin >> B;
     
     printf("%i:", B/3600);
     B -= (B/3600)*3600;
     printf("%i:", B/60);
     B -= (B/60)*60;
     printf("%i\n", B);

    return 0;
}
 
