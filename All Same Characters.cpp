/*
The program must accept a string S as the input.
The program must print YES if all the characters in the string S are same. 
Else the program must print NO as the output. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains YES or NO. 

Example Input/Output 1: 

Input:  aaaaaaaaaaaa 

Output: YES 

Example Input/Output 2: 

Input:  bbbbbbbbbbbbcccccccc 

Output: NO

SOLUTION:
*/



/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char S[1001];
    scanf("%s", S);
    int Len = strlen(S), Flag = 1;
    
    for(int i=1; i<Len; i++)
    {
        if(S[i] != S[0])
        {
            Flag = 0;
            break;
        }
    }
    
    printf("%s", (Flag == 1) ? "YES" : "NO");
}
*/
