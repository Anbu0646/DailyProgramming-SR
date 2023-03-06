/*
The program must accept a positive odd integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 999

Input Format:  The first line contains the value of N.
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input:  5 
Output: 1 * 3 2 1 
        2 * 4 * *
        3 4 5 4 3 
        * * 4 * 2
        1 2 3 * 1 
        
Example Input/Output 2: 

Input:  7 
Output: 1 * * 4 3 2 1
        2 * * 5 * * *
        3 * * 6 * * *
        4 5 6 7 6 5 4
        * * * 6 * * 3
        * * * 5 * * 2 
        1 2 3 4 * * 1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int r=n, c=n, f=0, f1=0, l=n-1, m=n/2;
    for(int i=0;i<r;i++)
    {
        int k=i+1;
        for(int j=0; j<c; j++)
        {
            if((j==0 && i<r/2))
                printf("%d ", k);
            else if(j==c/2)
            {
                if(i<=r/2)
                    printf("%d ", k);
                else
                    printf("%d ", l--);
            }
            else if(j==c-1 && i>r/2)
            {
                printf("%d ", m--);
            }
            else if(i==0 && j>c/2)
            {
                int a;
                if(f==0)
                {
                    a=k-1;
                    f=1;
                }
                printf("%d ", --a);
            }
            else if(i==r/2)
            {
                if(j<c/2)
                    printf("%d ", k);
                else 
                {
                    int a;
                    if(f==1)
                    {
                        a=k-1;
                        f=0;
                    }
                    
                printf("%d ",--a);
                }
            }
            else if(i==r-1 && j<c/2)
                printf("%d ", j+1);
            else
                printf("* ");
            k++;    
        }
        printf("\n");
    }

}
