/*
The program must accept a list of integers containing all the divisors of X and all the divisors of Y (X and Y are two positive integers where X >= Y). 
The program must find the integers X and Y from the given list of divisors and print them as the output. 

Boundary Condition(s): 1 <= Each integer value <= 10^4 

Input Format:  The first line contains a list of integers separated by a space. 

Output Format: The first line contains X and Y separated by a space. 

Example Input/Output 1: 

Input:  10 2 8 1 2 4 1 20 4 5 

Output: 20 8 

Explanation: 

The factors of 20 are 1 2 4 5 10 and 20. 
The factors of 8 are 1 2 4 and 8.
So, all the factors of 20 and 8 have occurred in the given list of integers. 
Hence the output is 20 8.

Example Input/Output 2: 

Input:  1 2 3 6 1 2 3 6

Output: 6 6

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)  
{
    vector<int> v;
    int val;
    map<int, int> mp;
    
    while(cin>>val)
    {
        v.push_back(val);
        mp[val]++;
    }
  
    int x = *max_element(v.begin(), v.end());
    int ans = x;
  
    for(auto& it:mp)
    {
        int val = it.first;
        int cnt = it.second;
    
        if(x % val || cnt == 2)
         ans = val;
    }
    cout<<x<<" "<<ans;
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[1001], n = 0, x = 0, y = 0;
    while((scanf("%d", &arr[n])) == 1) 
    {
        if(arr[n] > x)
            x = arr[n];
        n++;
    }
    for(int i=0; i<n; i++)
    {
        if(x % arr[i] != 0 && arr[i] > y)
        {
            y = arr[i];
        }
    }
    if(y == 0)
        y = x;
    printf("%d %d", x, y);
}

PY3:
l = [int(k) for k in input().split()]
l.sort()
x = max(l)
t = x
k = 0
l.remove(t)
v = l.copy()
for i in range (len(l) - 1, -1, -1):
    if t != l[i] and x % l[i] == 0:
        t = l[i]
        v.remove(l[i])
print(x, max(v))
*/
