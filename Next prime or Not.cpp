/*
The program must accept two prime numbers X and Y as the input.
The program must print YES if Y is the next immediate prime number of X. 
Else the program must print NO as the output. 

Boundary Condition(s):  2 <= X < Y <= 10^6

Input Format:  The first line contains X and Y separated by a space. 

Output Format: The first line contains YES or NO. 

Example Input/Output 1:

Input:  2 3 

Output: YES 

Example Input/Output 2: 

Input:  7 11

Output: YES 

Example Input/Output 3: 

Input:  13 19 

Output: NO

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;


bool isPrime(int n)
{
    if(n == 1) 
       return 0;
    
    if(n == 2 or n == 3) 
       return 1;
    
    if(n % 2 == 0 or n % 3 == 0) 
       return 0;
    
    for(int i = 5; i * i <= n; i += 2)
    {        
        if( n%i == 0 or n%(i+2) == 0) 
            return 0;   
    }
    
    return 1;
}

int main(int argc, char** argv)
{
    int x,y;
    
    cin>>x>>y;
    
    int k;
    for(int i = x + 1; i <= y; i++)
    {
        if(isPrime(i))
        {
            k = i;
            break;
        }
    }
    
    if(y == k) 
       cout<<"YES";
    else cout<<"NO";

    return 0;    
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int f = 1;
    for(int i=x; i<=y; i++)
    {
        int c = 0;
        for(int j=1; j<=i; j++)
        {
            if(i % j == 0)
            {
                c++;
            }
        }
        if(c == 2 && i != x && i != y)
        {
            f = 0;
            break;
        }
    
    }
    if(f == 1)
    {
        printf("YES");
    }
    else
    {    
        printf("NO");
    }
    return 0;
}

PY3:
X, Y = map(int, input().split())
Index = 0
for i in range(X + 1, X*100):
    Count = 0
    for j in range(1, i):
        if i % j == 0:
            Count += 1
    if Count == 1:
        Index = i
        break
print( "YES" if Index == Y else "NO")
*/
