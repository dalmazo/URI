#include <iostream>
 
using namespace std;
 
int main() {
     
     double A;
     scanf("%2lf",&A);
     double B;
     scanf("%2lf",&B);

     if(A > 10)
     {
         A = 10;
     }
     if(B > 10)
     {
         B = 10;
     }

     double MEDIA = (A*3.5+B*7.5)/11;

     printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}