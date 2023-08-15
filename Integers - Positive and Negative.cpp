/*
The program must accept N integers as the input. 
The program must print the integers which have both positive and negative values in the N integers as the output. 
The integers must be printed in the same order as given in the input.

Note:

- There will be at least one integer with both positive and negative values. 
- All the integers are always a nonzero value. 

Boundary Condition(s): 

2 <= N <= 100 
-1000 <= Each integer value <= 1000 

Input Format: 

The first line contains N.
The second line contains N integers separated by a space. 

Output Format: The first line contains a list of integers separated by a space as per the given conditions. 

Example Input/Output 1: 

Input: 

7 
10 -45 26 -10 45 10 31 

Output: 10 -45 -10 45 10 

Explanation: 

The integers 10 and 45 are present in both positive and negative values. 
Hence the output is 10 -45 -10 45 10 

Example Input/Output 2: 

Input: 

6
11 12 26 -12 97 11 

Output: 12 -12

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int, int> mp;
    
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]] = 1;  
    }

    for(int i=0; i<n; i++)
    {
        if(mp[v[i]] && mp[-1 * v[i]])
            cout<<v[i]<<" ";
    }

}

/*
C:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(-1 * a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
}

PY3:

n = int(input())
l = list(map(int,input().split()))
for i in l:
    k = i * -1
    if k in l:
        print(i, end = " ")
*/
