'''
The program must accept N integers as the input. 
The program must swap every two odd integers in their positions among the N integers.
The program must print the revised values of N integers as the output. 
If the number of odd integers in the given N integers is odd then the program must keep that last odd integer as it is. 

Boundary Condition(s): 

2 <= N <= 1000 
1 <= Each integer value <= 10^5

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains the revised values of N integers separated by a space. 

Example Input/Output 1: 

Input: 

7 
22 23 51 56 69 53 29 

Output: 22 51 23 56 53 69 29 

Explanation:

After swapping the first two odd integers 23 and 51 in the given 7 integers, the integers become 22 51 23 56 69 53 29.
After swapping the last two odd integers 69 and 53 in the given 7 integers, the integers become 22 51 23 56 53 69 29. 
Hence the output is 22 51 23 56 53 69 29.

Example Input/Output 2: 

Input: 

5 
3 4 7 21 89 

Output: 7 4 3 89 21

SOLUTION:
'''

n = int(input())
li = list(map(int, input().split()))
a = -1
b = -1
for i in range(n):
    if li[i] % 2 == 1:
        if a == -1:
            a = i
        else:
            b = i
            li[a], li[b] = li[b], li[a]
            a, b = -1,-1
print(*li)


'''
C:
#include<stdio.h>
#include<stdlib.h>

int a[10001];

void swap(int s, int e)
{
    int t = a[s];
    a[s] = a[e];
    a[e] = t;
}

int main()
{
    int n, f = 0, s, e;
    scanf("%d ", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        if(a[i] % 2 != 0 && f == 0)
        {
            s = i;
            f = 1;
        }
        else if(a[i] % 2 != 0 && f == 1)
        {
            e = i;
            swap(s, e);
            f = 0;
        }
    }

    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    
}

CPP:
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, t;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int o[n], d = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            o[d] = i;
            d++;
        }  
    }
    
    if(d % 2 != 0)
    {
       d -= 2;
    }
  
    for(int i = 0; i < d; i += 2)
    {
      t = a[o[i]];
      a[o[i]] = a[o[i + 1]];
      a[o[i + 1]] = t;
    }
    
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
'''
