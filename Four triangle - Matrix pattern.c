/*
The program must accept an even integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 4 <= N <= 50 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input: 4

Output:

* * * +
# * + + 
# # - +
# - - - 

Example Input/Output 2:

Input:  6

Output: 

* * * * * +
# * * * + + 
# # * + + +
# # # - + +
# # - - - + 
# - - - - -

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n/2;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf("# ");
        }
        for(int j=i+i;j<n-1;j++)
        {
            printf("* ");
        }
        for(int z=0;z<=i;z++)
        {
            printf("+ ");
        }
        puts("");
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=n/2;j>i;j--)
        {
            printf("# ");
        }
        for(int k=0;k<=i+i;k++)
        {
            printf("- ");
        }
        for(int z=i;z<(n/2)-1;z++)
        {
            printf("+ ");
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
    int n;
    scanf("%d",&n);
    int k=0;
    int u=1;
    int fi=n/2-1;
    int z=1;
    int d=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("# ");
        }
        for(int l=0;l<d;l++)
        {
            printf("* ");
        }
        if(i>=n/2)
        {
            for(int h=0;h<z;h++)
            {
                printf("- ");
            }
        }
        
        for(int o=0;o<u;o++)
        {
            printf("+ ");
        }
        d-=2;
      
        if(i<fi)
        {
            u++;
        }
        if(i>=fi)
        {
            u--;
        }
    
        if(i<n/2)
        {
            k++;
        }
        if(i>=n/2){
            k--;
        }
        if(i>=n/2)
        {
            z+=2;
        }
        printf("\n");
    }

}


PY3:
n = int(input())
for i in range(n//2):
    if i!=0:
        for j in range(i):
            print('#',end=" ")
    for j in range((2*((n//2)-i))-1):
        print("*",end=" ")
    for j in range(i+1):
        print("+",end=" ")
    print()
    
for i in range(n//2):
    for j in range((n//2)-i):
        print("#",end=" ")
    
    for j in range((2*i)+1):
        print("-",end=" ")
    for j in range((n//2)-i-1):
        print("+",end=" ")
    print()
*/
