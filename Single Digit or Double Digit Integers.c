/*
The program must accept N integers as the input. 
The program must print the single digit integers among N integers and then print the two digit integers among N integers as the output. 
If there is no single digit integer then print -1 and if there is no two digit integer then print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 100 
1 <= Each integer value <= 9999 

Input Format:  

The first line contains the integer N. 
The second line contains N integers separated by space(s). 

Output Format: 

The first line contains single digit integers separated by a space or -1. 
The second line contains two digit integers separated by a space or -1. 

Example Input/Output 1: 

Input: 

8 
23 4 78 7 989 73 65 654 

Output: 

4 7 
23 78 73 65 

Explanation: 

The single digit integers are 4 and 7. So they are printed in the first line. 
The two digits integers are 23 78 73 and 65. So they are printed in the second line. 

Example Input/Output 2: 

Input: 

5 
632 456 824 778 856 

Output: 

-1 
-1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, f=0;
    scanf("%d\n", &n);
    char s[1001][1001];
    for(int i=0; i<n; i++)
    {
        scanf("%s ", s[i]);
        if(strlen(s[i]) == 1)
        {
            f = 1;
            printf("%s ", s[i]);
        }
    }
  
    if(f == 0) printf("-1");
    printf("\n");
    f = 0;
  
    for(int i=0; i<n; i++)
    {
        if(strlen(s[i]) == 2)
        {
            f=1;
            printf("%s ", s[i]);
        }
    }
  
    if(f == 0) printf("-1");
    return 0;
}
