/*
The program must accept an integer N as the input. The program must print the fibonacci series in the reverse order as the output. 

Boundary Condition(s): 5 <= N <= 85 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains the fibonacci series separated by a space. 

Example Input/Output 1: 

Input:  5 
Output: 3 2 1 1 0 

Example Input/Output 2: 

Input:  12 
Output: 89 55 34 21 13 8 5 3 2 1 1 0 


SOLUTION:

C:

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long int a[n];
    a[0]=0,a[1]=1;
    for(int i=2; i<n; a[i]=a[i-1]+a[i-2], i++);
    for(int i=n-1; i>=0; printf("%lld ",a[i--]));
}

/*
PYTHON:

#GoodBoyzCODINGforDAILYCHALLENGE:
n=int(input())
l=[0]*n
l[0], l[1] = 0, 1
for i in range(2, n):
        l[i]=l[i - 1]+l[i - 2]
print(*l[::-1])
*/
