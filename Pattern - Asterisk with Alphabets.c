/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 26 

Input Format:  The first line contains the value of N. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 
Output: ***A 
        **ABA 
        *ABCBA 
        ABCDCBA 
        
Example Input/Output 2: 

Input:  7 
Output: ******A 
        *****ABA 
        ****ABCBA 
        ***ABCDCBA 
        **ABCDEDCBA 
        *ABCDEFEDCBA 
        ABCDEFGFEDCBA

SOLUTION:
*/

// ==> JustNothing-Vishal

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; printf("\n"), i++)
    {
        for(int j=1; j<=a-i+1; j++)
        {
            if(j+i<=a) printf("*");
            else
            {
                int al=65;
                for(int k=1;k<=i;k++)
                {
                    printf("%c",al++);
                }
                al--;
                al--;
                for(;al>=65;al--)
                {
                    printf("%c",al);
                }
                
            }
        }
    }
return 0;
}
