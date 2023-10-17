/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 50 

Input Format:  The first line contains N. 

Output Format: The N lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:

Input: 5 

Output: 

1 5 2 4 3 3 4 2 5 1 
* 1 4 2 3 3 2 4 1 * 
* * 1 3 2 2 3 1 * * 
* * * 1 2 2 1 * * * 
* * * * 1 1 * * * *

Example Input/Output 2: 

Input: 4

Output: 

1 4 2 3 3 2 4 1 
* 1 3 2 2 3 1 *
* * 1 2 2 1 * *
* * * 1 1 * * *

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int a = n;
  
    for(int i=1; i<=n; i++)
    {
        if(i != 1)
        {
            for(int j=1; j<=i - 1; j++)
                cout<<"*"<<" ";
        }
      
        for(int j=1, k=a; j<=a, k>=1; j++, k--)
            cout<<j<<" "<<k<<" ";
        
        a--;
      
        if(i != 1)
        {
            for(int j=1; j<=i - 1; j++)
                cout<<"*"<<" ";
        }
      
        cout<<endl;
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, l;
    
    scanf("%d", &l);
    for(int i=0; i<l; i++)
    {
        x = 1;
        y = l - i;
        
        for(int j=0; j<i; j++)
        {
            printf("* ");
        }
        
        while(x <=l - i && y >= 1)
        {
            printf("%d ", x);
            x++;
            printf("%d ", y);
            y--;
        }
        
        for(int j=0; j<i; j++)
        {
            printf("* ");
        }
        
        puts("     ");
    }
}

PY3:
n = int(input()) 
a = 1 ; b = 2 ; k = n - 1

def call(n):
    l = []
    for i in range(1, n + 1):
        l.append(i) 
        l.append(n - i + 1)
    return l
print(*call(n))

for i in range(n - 1):
    print((i + 1) * "* ", end = "")
    print(*call(k), end = " ")
    print((i + 1) * "* ", sep = "")
    k -= 1
*/
