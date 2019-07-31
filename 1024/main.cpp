#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h> 

using namespace std;
  
#define DEST_SIZE 1000

int main() {
     
    int rep;
    //cin >> rep;
    scanf("%i",&rep);

    char L[rep][DEST_SIZE];
    
    for(int z = 0 ; z < rep ; z ++)
    {
        char B[DEST_SIZE];
        setbuf(stdin, 0);
        fgets(B, 1000, stdin);

        int limit = strlen(B);

        for(int i = 0; B[i] != '\0'; i++)
        {
            if((B[i]>='A'&&B[i]<='Z')||(B[i]>='a'&&B[i]<='z'))
            {
                B[i] += 3;
            }
        }

        char clone[DEST_SIZE];
        strcpy(clone, B);
        
        for(int i = 0; B[i] != '\0'; i++)
        {
            B[i] = clone[limit-i-2];
        }

        for(int i = (limit-1)/ 2; B[i] != '\0'; i++)
        {
            B[i] -= 1;
        }

        B[limit] = '\n';

        strcpy(L[z], B);

        //cout << B << endl;
    }
    for(int z = 0 ; z < rep ; z ++)
    {
        cout << L[z] << endl;
    }
    return 0;
}