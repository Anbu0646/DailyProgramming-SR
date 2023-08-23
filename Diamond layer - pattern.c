/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: 

####*#### 
###*-*### 
##*-*-*## 
#*-*-*-*# 
*-*-*-*-* 
#*-*-*-*# 
##*-*-*## 
###*-*### 
####*#### 

Example Input/Output 2: 

Input:  8 

Output:

#######*####### 
######*-*###### 
#####*-*-*##### 
####*-*-*-*####
###*-*-*-*-*### 
##*-*-*-*-*-*## 
#*-*-*-*-*-*-*#
*-*-*-*-*-*-*-* 
#*-*-*-*-*-*-*# 
##*-*-*-*-*-*## 
###*-*-*-*-*### 
####*-*-*-*####
#####*-*-*#####
######*-*###### 
#######*#######


SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            printf("#");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
            if(k<i)
            printf("-");
        }
        for(int j=i+1;j<n;j++)
        {
            printf("#");
        }
        puts("");
        
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        for(int k=i;k<n-1;k++)
        {
            printf("*");
            if(k<n-2)
            printf("-");
        }
        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        puts("");
        
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<(n*2);j++)
        {
            if(j<=(n-i)||j>=((n*2)-(n-i)))
            {
                printf("#");
            }
            else 
            {
                for( k=j;k<(n*2)-(n-i);k++)
                {
                    if(k%2==j%2)
                    printf("*");
                    else
                    printf("-");
                }
                j=k-1;
            }
            
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
     for(int j=1;j<(n*2);j++)
     {
         if(j<=(n-i)||j>=(n*2)-(n-i))
         {
             printf("#");
         }
         else
         {
             for(k=j;k<(n*2)-(n-i);k++)
             {
                 if(k%2==j%2)
                 printf("*");
                 else 
                 printf("-");
             }
             j=k-1;
         }
     }
     printf("\n");
    }
}


PY:
n = int(input())
for i in range(n):
    for j in range(n-i-1):
        print("#",end="")
    for j in range(i+1):
        if j==0:
            print("*",end="")
        else:
            print("-*",end="")
    for j in range(n-i-1):
        print("#",end="")
    print()

for i in range(n-1):
    for j in range(i+1):
        print("#",end="")
    for j in range(n-i-1):
        if j==0:
            print("*",end="")
        else:
            print("-*",end="")
    for j in range(i+1):
        print("#",end="")
    print()
*/
