/*
The program must accept two integer arrays of size M and N as the input.
The program must print the largest integer in both the array at the same position starting from the end.
If M is greater than N, the M-N integers have no pairs so such integers are printed as it is as the output. 

Boundary Condition(s): 

1 <= N <= M <= 100 
1 <= Each integer value <= 10^5

Input Format:

The first line contains M and N separated by a space. 
The second line contains M integers separated by a space. 
The third line contains N integers separated by a space. 

Output Format: 

The first line contains the largest integers in both the array at the same position starting from the end. 

Example Input/Output 1:

Input: 

6 4 
10 20 30 40 50 60
99 30 26 100 

Output: 100 50 40 99 20 10 

Explanation:

The largest integer between 60 and 100 is 100, so it is printed. 
The largest integer between 50 and 26 is 50, so it is printed. 
The largest integer between 40 and 30 is 40, so it is printed.
The largest integer between 30 and 99 is 99, so it is printed. 
The integer 20 has no pair, so 20 is printed. 
The integer 10 has no pair, so 10 is printed. 

Example Input/Output 2: 

Input: 

5 5 
10 20 30 40 50 
99 25 30 10 77

Output: 77 40 30 25 99

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int m,n;
    cin>>m>>n;
    int arr1[m], arr2[n];
    for(int i=0; i<m; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
    if(m > n)
    {
        int dif = m - n;
        for(int i = n - 1; i>=0; i--)
        {
            if(arr1[i + dif] > arr2[i])
            {
                cout<<arr1[i + dif]<<" ";
            }
            else
            {
                cout<<arr2[i]<<" ";
            }
        }
        for(int i = m - n - 1; i>=0; i--)
        {
            cout<<arr1[i]<<" ";
        }
    }
    else
    {
        int dif = n - m;
        for(int i = m - 1; i>=0; i--)
        {
            if(arr2[i + dif] > arr1[i])
            {
                cout<<arr2[i + dif]<<" ";
            }
            else
            {
                cout<<arr1[i]<<" ";
            }
        }
        for(int i = n - m - 1; i>=0; i--)
        {
            cout<<arr2[i]<<" ";
        }
    }
    
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i = n - 1;i>=0; i--) scanf("%d", &a[i]);
    for(int j = m - 1; j>=0; j--) scanf("%d", &b[j]);
    
    int l = n > m ? n : m;
    
    if(n >= m)
    {
        int i = 0;
        while(i < n)
        {
            if(i < m && a[i] < b[i]) printf("%d ", b[i]);
            else printf("%d ", a[i]);
            i++;
        }
    }
    else
    {
        int i = 0;
    }
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int arr1[x], arr2[y];
    for(int i=0; i<x; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<y; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    if(x > y)
    {
        int j = y - 1;
        for(int i = x - 1; i>=0; i--)
        {
            if(j < 0)
                break;
            if(arr1[i] > arr2[j])
            {
                printf("%d ", arr1[i]);
            }
            else
                printf("%d ", arr2[j]);
            j--;
        }
        int v = x - y;
        for(int i = v - 1; i>=0; i--)
            printf("%d ", arr1[i]);
    }
    if(x < y)
    {
        int j = x - 1;
        for(int i = y - 1; i>=0; i--)
        {
            if(j < 0)
                break;
            if(arr2[i] > arr1[j])
                printf("%d ", arr2[i]);
            else
                printf("%d ", arr1[i]);
            j--;
            int v = y - x;
            for(int i = v - 1; i>=0; i--)
                printf("%d", arr2[i]);
        }
    }
    if(x == y)
    {
        for(int i = x - 1; i>=0; i--)
        {
            if(arr1[i] > arr2[i])
                printf("%d ", arr1[i]);
            else
                printf("%d ", arr2[i]);
        }
    }
}

PY3:
m, n = input().split()
m = int(m); n = int(n)
a = [int(k) for k in input().split()]
b = [int(k) for k in input().split()]
a.reverse()
b.reverse()
for i in range(0, max(m, n)):
    x=0; y=0
    if i < len(a):
        x = a[i]
    if i < len(b):
        y = b[i]
    print(max(x, y), end = " ")
*/
