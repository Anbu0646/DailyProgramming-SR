/*
Given a positive integer N as an input, the program must check if N can be expressed as 2^K+1 or 2^K-1 (where K is a positive integer) and print K as the output. 
If N cannot be expressed as 2^K+1 or 2^K-1, the program must print No as the output. 

Boundary Condition(s): 3 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains the value of K or No. 

Example Input/Output 1: 

Input:  17 

Output: 4 

Explanation: 

17 = 2^4 + 1, here K=4 which is printed as the output. 

Example Input/Output 2: 

Input:  19 

Output: No 

Example Input/Output 3: 

Input:  31

Output: 3

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, c = 0, k = 0, f = 0, s = 0, d, g, i;
    scanf("%d ", &n);
    d = n - 1;
    g = n + 1;
    i = 1;
    
    while(d!=i && i<=d)
    {
        i = i * 2;
        c++;
        if(i == d)
        {
            f = 1;
        }
    }
    
    i = 1;
    while(g!=i && i<=g)
    {
        i = i * 2;
        k++;
        if(g == i)
        {
            s = 1;
        }
    }
    if(f == 1)
    {
        printf("%d", c);
    }
    else if(s == 1)
    {
        printf("%d", k);
    }
    else
    {
        printf("No");
    }
}


/*
PY3:

n=int(input())
k=0
while (2**k)+1<n:
    k+=1
if (2**k)+1==n or (2**k)-1==n:
    print(k)
else:
    print('No')


def check2kp1(n):
    power=0
    b = 0
    while b<n:
        b=2**power+1
        if b==n:
            return [True, power]
        power+=1
    return [False,-1]
def check2km1(n):
    power=0
    b = 0
    while b<n:
        b = 2**power-1
        if b==n:
            return [True, power]
        power+=1
    return [False,-1]
        
a=int(input())
b1=check2kp1(a)
b2=check2km1(a)
if b1[0] and b1[1]>0:
    print(b1[1])
elif b2[0] and b2[1]>0:
    print(b2[1])
else:
    print("No")

    
*/
