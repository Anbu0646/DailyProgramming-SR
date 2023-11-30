'''
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 50 

Input Format:  The first line contains N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  4 
Output: * * * 1 * * *
        * * 2 1 2 * * 
        * 3 2 1 2 3 * 
        4 3 2 1 2 3 4 
        * 3 2 1 2 3 * 
        * * 2 1 2 * *
        * * * 1 * * *

Example Input/Output 2:

Input:  5 

Output: * * * * 1 * * * *
        * * * 2 1 2 * * *
        * * 3 2 1 2 3 * * 
        * 4 3 2 1 2 3 4 * 
        5 4 3 2 1 2 3 4 5 
        * 4 3 2 1 2 3 4 *
        * * 3 2 1 2 3 * *
        * * * 2 1 2 * * * 
        * * * * 1 * * * *

SOLUTION:
'''

n = int(input())
x = n - 1
y = 1

for i in range(n * 2 - 1):
    for j in range(x):
        print('* ', end = "")
    for k in range(y, 0, -1):
        print(k, end = " ")
    for k in range(2, y + 1):
        print(k, end = " ")
    for j in range(x):
        print('* ', end = "")
    print()
    if i < n - 1:
        x -= 1
        y += 1
    else:
        x += 1
        y -= 1
           
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int a = 0; a < n - i; a++)
        {
            printf("* ");
        }
        for(int j = i; j > 0; j--)
        {
            printf("%d ", j);
        }
       
       for(int k = 2; k <= i; k++)
       {
           printf("%d ", k);
       }
       for(int b = 0; b < n - i; b++)
       {
           printf("* ");
       }
        printf("\n");
    }
    
    
    for(int i = 1; i < n; i++)
    {
        for(int a = 0; a < i; a++)
        {
            printf("* ");
        }
        
        for(int j = n - i; j > 0; j--)
        {
            printf("%d ", j);
        }
        for(int k = 2; k < n - i + 1; k++)
        {
            printf("%d ", k);
        }
        
        for(int b = 0; b < i; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

CPP:

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv)
{
       int n, i, j, m, k;
       cin >> n;
       n = n - 1;
       for(i = -n; i <= n; i++)
       {
           if(i < 0) k = n + i;
           else k = n - i;
           for(j = -n; j <= n; j++)
           {
               if(j >= -k && j <= k)
               {
                   cout << abs(j) + 1 << " ";
               }
               else
               {
                   cout << "* ";
               }
           }
           cout << "\n";
       }
}
'''
