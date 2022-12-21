/*
The program must accept a string value S as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= S <= 100 

Input Format:  The first line contains the string S. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  happy 
Output: h 
        p a 
        * y p 
        
Example Input/Output 2: 

Input:  orange 
Output: o 
        a r 
        e g n
        
SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%s", s);
    for(int i=0, x=0, l=1, m=0; s[x]!='\0'; printf("\n"), m+=l, l++, i++)
    {
        for(int k=m+i, n=0; n<=i; n++, k--)
        {
            if(isalpha(s[k])) 
            {
              printf("%c ", s[k]);
              x++;
            }
            else 
              printf("* ");
        }
    }
}
