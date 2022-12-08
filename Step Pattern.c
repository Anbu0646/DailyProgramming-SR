/*

The program must accept a string S and an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 2 <= Length of S <= 100 
                       2 <= N <= Length of S 

Input Format:  The first line contains the string S. 
               The second line contains the integer N. 
               
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  abcdefghijk 
        3 
Output: a 
        *b 
        **c 
        *d 
        e 
        *f 
        **g 
        *h 
        i 
        *j 
        **k 
        
Example Input/Output 2: 

Input:  accelerate 
        8 
Output: a 
        *c 
        **c 
        ***e 
        ****l 
        *****e 
        ******r 
        *******a 
        ******t 
        *****e

SOLUTION:

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    int n, c=0;
    scanf("%s\n%d", &s, &n);
    
    for(int i=0; i<strlen(s); i++)
    {
        for(int j=1, k=c; j<=c || k<0; j++, k++)
        {
                printf("*");
        }
    (c==n - 1)?(c=-(n - 2)):c++;
    printf("%c\n", s[i]);
    }
    
    return 0;
}


