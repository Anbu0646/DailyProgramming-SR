/*
The program must accept N integers and an integer K as the input.
The program must print the smallest integer among all the K-digit integers in the given N integers as the output.
If there is no K-digit integer then the program must print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 100
1 <= Each integer value <= 10^8
1 <= K <= 9

Input Format:  

The first line contains N and K separated by a space. 
The second line contains N integers separated by a space. 

Output Format: 

The first line contains the smallest K-digit integer among the N integers or -1. 

Example Input/Output 1: 

Input: 

7 2 
32 458 98 12 805 8 2 

Output: 12 

Explanation: 

The 2-digit integers among the 7 integers are 32 98 and 12. 
Here 12 is the smallest 2-digit integer. So 12 is printed as the output. 

Example Input/Output 2: 

Input: 

5 3 
15 1011 74 7 99 

Output: -1

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

void small(int n, int x, int ar[])
{
    int c = 100000000000000000, l = 0;
    for(int i=0; i<n; i++)
    {
        string k = to_string(ar[i]);
        if(k.length() == x)
        {
            l = 1;
            if(ar[i] <= c)   
               c = ar[i];
        }
    }
    
    if (l)
        cout<<c;
    else
        cout<<-1;
}

int main(int argc, char** argv)
{
    int n, x;
    cin>>n>>x;
    int ar[n];
    for(int i=0; i<n; i++)    
        cin>>ar[i];
    small(n, x, ar);
}

/*
C:
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int nod(int n)
{
    int x = 0;
    while(n != 0)
    {
        x++;
        n /= 10;
    }
    return x;
}

int main()
{
    int n, k, l = INT_MAX;
    scanf("%d %d", &n, &k);
    int a[n], i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(nod(a[i]) == k)
        {
            if(a[i] < l)
                l = a[i];
        }
    }
    if(l < INT_MAX)
        printf("%d", l);
    else
        printf("-1");
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int N, K;
  scanf("%d %d", &N, &K);
  int s = -1;
  for(int i=0; i<N; i++)
  {
      int num;
      scanf("%d", &num);
      if(num >= pow(10, K - 1) && num < pow(10, K))
      {
          if(s == -1 || num < s)
          {
              s = num;
          }
      }
  }
  printf("%d\n", s);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, K, f = 0;
    scanf("%d %d", &N, &K);
    int arr[N], min = pow(10, K) + 1;
    for(int i=0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<N; i++)
    {
        int D = arr[i], cnt = 0;
        while(D != 0)
        {
            cnt++;
            D /= 10;
        }
        if(cnt == K)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                f = 1;
            }
        }
    }
    if(f == 0)    
    {
        printf("-1");
        exit(0);
    }
    printf("%d", min);
}


#include<stdio.h>
#include<stdlib.h>

int len(int n)
{
    int res  =0;
    for(res = 0; n!=0; n/=10, res++);
    return res;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    int small = -1;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(len(arr[i]) == k)
        {
            if(small == -1)
            {
                small = arr[i];
            }
            else if(arr[i] < small)
            {
                small = arr[i];
            }
        }
    }
    printf("%d",small);
}

PY3:
N, K = map(int, input().split())
Arr = list(map(str, input().split()))
Arr_1 = []

for i in Arr:
    if len(i) == K:
        Arr_1.append(int(i))

print(min(Arr_1) if len(Arr_1) > 0 else -1)
*/
