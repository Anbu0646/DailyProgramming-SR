/*
The program must accept N integers as the input. 
The program must print the integers which are having the same digit among the N integers as the output.
If there is no such integer, the program must print -1 as the output. 

Boundary Condition(s):

1 <= N <= 100 
1 <= Each integer value <= 10^8 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains the integers which are having the same digit separated by a space or -1. 

Example Input/Output 1:

Input:

4 
87 222 9999 1 

Output: 222 9999 1 

Explanation: 

All digits in 222 are 2. 
All digits in 9999 are 9. 
The only digit in 1 is 1. 
Hence the output is 222 9999 1.

Example Input/Output 2:

Input:

5
887 56566 122 1000 56 

Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int samedigit(int num)
{
    int last = num % 10;
    while(num > 0)
    {
        int d = num % 10;
        if(d != last)
        {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
  
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
  
    int f = 0;
  
    for(int i = 0; i < n; i++)
    {
        if(samedigit(arr[i]))
        {
            printf("%d ", arr[i]);
            f = 1;
        }
    }
  
    if(f == 0)
       printf("-1");
}

/*
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, x;
    cin>>n;
    int fl = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>x;
        int t = x, f = 0;
        while(t != 0)
        {
            int c = t % 10;
            if(c != (x % 10))
            {
                f = 1;
                break;
            }
            t /= 10;
        }
        if(f == 0)
        {
            fl = 1;
            cout<<x<<" ";
        }
    }
    if(fl == 0)
    {
        cout<<"-1";
    }
}



PY3:
n = int(input())
l = list(map(str, input().split()))
f = 0
for i in l:
    if len(list(set(i))) == 1:
        print(i, end = " ")
        f = 1
if f == 0:
    print("-1")
*/
