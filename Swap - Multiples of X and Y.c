/*
The program must accept N integers and two integers X and Y as the input. 
The program must swap the first occurring mutiple of X and the last occurring multiple of Y among the N integers. 
Then the program must print modified values of the N integers as the output. 

Note: At least one multiple of X and Y are always present in the N integers. 

Boundary Condition(s): 

2 <= N <= 100 
1 <= X, Y <= 100 1 <= Each integer value <= 10^8 

Input Format:  

The first line contains the value of N. 
The second line contains the value of N integers separated by space(s). 
The third line contains the value of X and Y separated by space(s). 

Output Format: 

The first line contains the modified value of N integers as per the conditions. 

Example Input/Output 1: 

Input: 

10 
13 28 76 34 86 77 18 92 57 10 
7 11 

Output: 

13 
77 76 34 86 28 18 92 
57 10

Explanation: 

The first occurring multiple of 7 among the 10 integers is 28.
The last occurring multiple of 11 among the 10 integers is 77. 
So these two values are swaped in their positions. 
Hence the output is 13 77 76 34 86 28 18 92 57 10 

Example Input/Output 2:

Input: 

7 
234 435 75 2345 6 435 875 
5 5 

Output: 

234 875 75 2345 6 435 435

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    scanf("%d %d",&x,&y);
    
    int s, h;
    
    for(int i=0; i<n; i++)
    {
        if(a[i] % x == 0)
        {
            s = i;
            break;
        }
    }
    
    for(int j=n - 1; j>=0; j--)
    {
        if(a[j] % y == 0)
        {
            h = j;
            break;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if(i == s)
        {
            printf("%d ", a[h]);
        }
        else if(i == h)
        {
            printf("%d ", a[s]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
}

/*
PY3:

N = int(input())
Arr = list(map(int, input().split()))
x, y = map(int, input().split())
A, B, C, D = 0, 0, 0, 0

for i in range(0, N):
    if Arr[i] % x == 0:
        A = Arr[i]
        B = i
        break

for i in range(0, N):
    if Arr[i] % y == 0:
        C = Arr[i]
        D = i

for i in range(0, N):
    if Arr[i] == C and D == i:
        print(A, end=" ")
    elif Arr[i] == A and B == i:
        print(C, end=" ")
    else:
        print(Arr[i], end=" ")
*/
