/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 4 <= N <= 100 

Input Format:  The first line contains the value of N. 

Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 7 

Output: 

# * * * * * # 
* * - - - * * 
* - * - * - * 
* - - * - - * 
* - * - * - * 
* * - - - * * 
# * * * * * # 

Example Input/Output 2: 

Input: 8 

Output: 

# * * * * * * # 
* * - - - - * * 
* - * - - * - * 
* - - * * - - * 
* - - * * - - * 
* - * - - * - * 
* * - - - - * * 
# * * * * * * #

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
  
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n - 1)
            {
                if(i == j || i + j == n - 1)
                   printf("#");
                else
                   printf("*");
            }
            else if(i == j || i + j == n - 1)
                 printf("*");
            else
                 printf("-");
        }
        printf("\n");
    }
}
/*

PY3:

n = int(input())
x, y = 1, n - 2

for i in range(n):
    if i == 0 or i == n - 1:
        print('#' + '*' * (n - 2) + '#')
    else:
        for j in range(n):
            if j == x or j == y or j == 0 or j == n - 1:
                print('*', end = '')
            else:
                print('-', end = '')
        print()
        x += 1
        y -= 1
  */
