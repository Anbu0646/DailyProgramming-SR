/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  4 

Output: 

* * * * 
- * 1 2 *
- - * 3 4 * 
- - - * * * * 

Example Input/Output 2: 

Input:  5  

Output: 

* * * * * 
- * 1 2 3 * 
- - * 4 5 6 
* - - - * 7 8 9 
* - - - - * * * * *

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("- ");
        }
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("%d ",k++);
            }
        }
        printf("\n");
    }

}
