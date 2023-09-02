/*
The program must accept N integers as the input. 
The program must print the maximum possible even sum among the N integers as the output.

Boundary Condition(s): 

2 <= N <= 100 
1 <= Each integer value <= 1000 

Input Format:  The first line contains N. The second line contains N integers separated by a space. 

Output Format: The first line contains the maximum possible even sum. 

Example Input/Output 1: 

Input: 

4 
1 2 3 1 

Output: 6 

Explanation: 

The possible even sum values are 6 (1+2+3), 4 (1+3 or 1+2+1), 2 (1+1 or 2). 
Here the maximum even sum is 6. 
Hence the output is 6.

Example Input/Output 2: 

Input: 

5 
10 5 40 25 15 

Output: 90

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int k, o = 0, e = 0, m = 1001;
    
    while(cin>>k)
    {
        k & 1 ? ((o += k), (m = min(k, m))) : (e += k);
    }
    cout<<(e + (o & 1 ? (o - m) : o));
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N], sum = 0;
    
    for(int i=0; i<N; i++)
    {
        scanf("%d ", &arr[i]);
        sum += arr[i];
    }
    
    if(sum % 2 == 0)
    {
        printf("%d", sum);
        return 0;
    }
    
    int ans = 0;
    
    for(int i=0; i<N; i++)
    {
        if(arr[i] % 2 != 0 && sum - arr[i] > ans)
        {
            ans = sum - arr[i];
        }
    }
    printf("%d", ans);
}

PY3:
n = int(input())
l = sorted(list(map(int,input().strip().split())))
if sum(l)%2:
    s = sum(l)
    for i in l:
        if i%2:
            s-=i
        if not s%2:
            break
    print(s)
else:
    print(sum(l))
*/
