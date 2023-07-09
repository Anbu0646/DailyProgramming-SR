/*
The program must accept N integers as the input. 
The program must print the integer X from the given N integers so that the maximum possible sum of remaining integers (except the integer X) is a multiple of 10. 
If there is no such integer to print, the program must print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 100
1 <= Each integer value <= 10^5 

Input Format: 

The first line contains N. 
The second line contains N integers separated by space(s). 

Output Format: The first line contains the integer based on the given conditions. 

Example Input/Output 1: 

Input: 

5 
30  47  7  80  3 

Output: 7 

Explanation: 

The sum of the given 5 integers is 167. 
The maximum possible sum is 160 which is obtained by the sum of all the integers except 7. 
Hence 7 is printed as output. 

Example Input/Output 2: 

Input: 

8 
23  43  2  54  4  47  72  5 

Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
  
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
  
    int max = 0, x = 0;

    for(int i=0; i<n; i++)
    {
        if(sum - a[i] > max && (sum - a[i]) % 10 == 0)
        {
           max = sum - a[i];
           x=a[i];
        }
    }
  
    if(x > 0)
    {
       printf("%d", x);
    }
    else
    {
       printf("-1");
    }
}

/*
PY3:

x=int(input())
a=list(map(int,input().split()))
y=sum(a)
a.sort()
for i in a:
    if((y-i)%10==0):
        print(i)
        exit()
print(-1)
*/
