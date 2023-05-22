/*
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Note: The length of S is always odd. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format: 

The first line contains the string S. 

Output Format: 

The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  apple 

Output: 

apple 
*ppl* 
**p** 

Example Input/Output 2: 

Input:  program 

Output: 

program 
*rogra* 
**ogr** 
***g***

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%s ", s);
  
    for(int i=0; i<=strlen(s)/2; i++)
    {
        for(int j=0; j<strlen(s); j++)
        {
            if(j>=i && j<=strlen(s) - i - 1) 
               printf("%c", s[j]);
            else 
               printf("*");
        }
        printf("\n");
    }

}
