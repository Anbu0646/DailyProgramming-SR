/*
The program must accept N integers as the input. 
The program must remove the trailing zeros for all the N integers. 
Then the program must print the smallest integer among the N modified integers as the output. 

Boundary Condition(s): 

1 <= N <= 100 
1 <= Each integer value <= 10^8 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: 

The first line contains the smallest integer among the N modified integers. 

Example Input/Output 1: 

Input: 

5 
150 2000 50 8800 24 

Output: 2 

Explanation: 

After removing the trailing zeros in the five integers, the integers become 15 2 5 88 24. 
Now the smallest integer is 2. 
So 2 printed as the output. 

Example Input/Output 2: 

Input:

4 
10 19 457 1000000 

Output: 1

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int a[n], k, p;
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        k = a[i];
        while(k > 0)
        {
            p = k % 10;
            if(p == 0)
            {
                k /= 10;
                a[i] = k;
            }
            else
            {
                k = 0;
            }
        
        }
    }
    
    int s = a[0];
    
    for(int i=1; i<n; i++)
    {
        if(a[i] < s)
        {
            s = a[i];
        }
    
    }
    
    cout<<s;
}

/*
PY3:
N = int(input())
Arr = list(map(int, input().split()))
Arr_1 = []
for i in Arr:
    j = str(i).rstrip('0')
    Arr_1.append(int(j))
print(min(Arr_1))

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, x, min = 100000001;
    scanf("%d ", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &x);
        if(x == 10)
        {
            printf("1");
            exit(0);
        }
        while((x % 10) == 0)
        {
            x /= 10;
        }
        if(min > x)
        min = x;
    }
    printf("%d", min);
}
*/
