/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format: 

The first line contains the value of N. 

Output Format: 

The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 3 

Output: 

0 0 1 
0 2 1 
3 2 1 

Example Input/Output 2: 

Input: 4 

Output: 

0 0 0 1 
0 0 2 1 
0 3 2 1 
4 3 2 1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d" , &n);
    for(int i=1; i<=n; printf("\n") , i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j <= (n - i))
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", (n - j + 1));
            }
        }
    }
}

/*
n = int(input())
m = [0]*n
for i in range(1,n+1):
    m[-i] = i
    print(*m)
*/
