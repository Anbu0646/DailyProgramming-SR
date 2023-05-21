/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 

1 <= N <= 50 

Input Format: 

The first line contains the value of N. 

Output Format: 

The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: 

1 2 3 4 
2 * * 3 
3 * * 2 
4 3 2 1 

Example Input/Output 2: 

Input:  5 

Output: 

1 2 3 4 5 
2 * * * 4 
3 * * * 3 
4 * * * 2 
5 4 3 2 1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, j, n, a[100][100], m, k;
  scanf("%d", &n);
  
  for(i=1, k=n; i<=n; i++, k--)
  {
    for(j=1, m=n; j<=n; j++, m--)
    {
      if(i==1)
        printf("%d ", j);
      else if(i==n)
        printf("%d ", m);
      else if(j==1)
        printf("%d ", i);
      else if(j==n)
        printf("%d ", k);
      else
        printf("* ");
    }
  printf("\n");
  }
}
