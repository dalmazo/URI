#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <math.h>
 
using namespace std;
 
int main() {
     
     double x1, x2, y1, y2;
     
     cin >> setprecision(1) >> x1 >> setprecision(1) >> y1;
     cin >> setprecision(1) >> x2 >> setprecision(1) >> y2;

     printf("%.4f\n", sqrt(pow(x2-x1,2) + pow(y2-y1,2)));
 
    return 0;
}