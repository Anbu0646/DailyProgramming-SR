/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the value of N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 3 

Output: 

1 * 2 * 3 
* 1 * 2 *  
* * 1 * *   

Example Input/Output 2: 

Input: 6

Output: 

1 * 2 * 3 * 4 * 5 * 6   
* 1 * 2 * 3 * 4 * 5 *
* * 1 * 2 * 3 * 4 * * 
* * * 1 * 2 * 3 * * *  
* * * * 1 * 2 * * * *  
* * * * * 1 * * * * * 

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
        int x = 1;
        
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        
        for(int k=0; k<n - i; k++)
        {
            if(k == n - i - 1)
               printf("%d",x);
            else
               printf("%d*", x);
               x++;
        }
        
        for(int h=0; h<i; h++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
Aliter:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int n = 1, p = 0, f = (2 * N) - 2;
    
    for(int i=0; i<N; i++)
    {
        n = 1;
        for(int j=0; j<(2 * N) - 1; j++)
        {
            if(p <= j && j <= f)
            {
                if( (i % 2 != 0 && j % 2 != 0) || (i % 2 == 0 && j % 2 == 0) )
                {
                    printf("%d", n++);
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf("*");
            }
        }
        
        p += 1;
        f -= 1;
        printf("\n");
    }
}


PY3:

n=int(input())
k=[str(i) for i in range(1,n+1)]
c=0
for i in range(n,0,-1):
    print("*"*c+"*".join(k[:i])+"*"*c) 
    c+=1


a=int(input())
s=1
b=(a*2)-1
for i in range(0,a):
    for j in range(0,i):
        print("*",end="")
    for k in range(0,b-(i*2)):
        if(k%2==0):
            print(s,end="")
            s+=1
        else:
            print("*",end="")
    for m in range(0,i):
        print("*",end="")
    s=1
    print()

n=int(input())
lst=[]
for i in range(n):
    temp=[]
    for j in range(1,n+1-i):
        temp.append(j)
    lst.append(temp)
for i in range(n):
    for j in range(i):
        print('*',end="")
    print(*lst[i],sep="*",end="")
    for j in range(i):
        print('*',end="")
    print()
*/
