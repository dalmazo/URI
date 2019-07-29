#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <math.h>
 
using namespace std;

int main() {

     int B;
     cin >> B;
     
     printf("%i ano(s)\n", B/365);
     B -= (B/365)*365;
     printf("%i mes(es)\n", B/30);
     B -= (B/30)*30;
     printf("%i dia(s)\n", B);

    return 0;
}
 
