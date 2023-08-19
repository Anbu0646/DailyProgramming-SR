/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Conditions: 1 <= N <= 30 

Input Format:  The first line contains the value of N. 

Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: 

0 1 
0 1 1
0 1 1 2 
0 1 1 2 3 
0 1 1 2 3 5 

Example Input/Output 2: 

Input:  3 

Output: 

0 1
0 1 1
0 1 1 2

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

void fib(int n)
{
    int a=0,b=1,c;
    printf("0 1 ");
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fib(i);
    }
}

/*
PY3:

n = int(input())
lis = [0,1]

for i in range(n):
    print(*lis)
    lis.append(lis[i+2-1]+lis[i+2-2])


n=int(input())
l=[0,1] 
print(*l)
for x in range(1,n): 
    l.append(l[-1]+l[-2])
    print(*l)
*/
