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
        string B;
        string clone;
        cin.getline(B,100);
        cout << endl;

        clone = B;

        int size = sizeof(B)/sizeof(B[0]);

        for(int i = 0; i < size/2; i++)
        {
            clone[i] = B[i+(size/2)];
            clone[size-i] = B[(size/2)-i-1];

            cout << clone << endl;
        }

        cout << clone << endl;
    }
    return 0;
}