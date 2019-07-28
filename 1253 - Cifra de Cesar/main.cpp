#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h> 

using namespace std;
  
int main() {
     
    int rep;
    cin >> rep;
    
    for(int z = 0 ; z < rep ; z ++)
    {
        char B[50];
        cin >> B;

        int A;
        cin >> A;

        for(int i = 0; B[i] != '\0'; i++)
        {
            if(B[i] - A < 65)
            {
                B[i] += 26;
            }

            B[i] -= A;
        }


        cout << B << endl;

    }
    return 0;
}