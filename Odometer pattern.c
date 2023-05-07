/*
The program must accept an integer N as the input. The program must print the odometer pattern for N as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^9 

Input Format:  The first line contains the integer N. 

Output Format: The lines contain the odometer pattern for N as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  529 

Output: 

000 
100 
200 
300 
400 
500
510 
520 
521 
522 
523 
524 
525 
526 
527 
528 
529 

Example Input/Output 2: 

Input:  31002 

Output: 

00000 
10000 
20000 
30000 
31000 
31001 
31002

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char qw[100];
    scanf("%s", qw);
    
    int l = strlen(qw);
    int val[l];
  
    for(int i=0; i<l; i++) 
      val[i] = 0;
  
    for(int i=0; i<l; i++)
    {
        int t = qw[i] - '0';
        
        for(int j = (i==0) ? 0 : 1; j<=t; j++)
        {
            val[i] = j;
          
            for(int k=0;k<l;k++)
            {
                printf("%d",val[k]);
            }
        printf("\n");
        }
    }
}
