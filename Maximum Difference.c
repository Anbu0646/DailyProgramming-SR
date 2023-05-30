/*
The program must accept N integers as the input. The program must print two integers among the N integers whose difference is maximum as the output. The two integers must be printed in ascending order. 

Boundary Condition(s): 

2 <= N <= 10^5 
1 <= Each integer value <= 10^5 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: 

The first line contains two integers separated by a space. 

Example Input/Output 1: 

Input: 

4 
3 3 4 5 

Output: 3 5 

Explanation: 

The difference between 3 and 5 is 2. 
The difference between 3 and 4 is 1. 
The difference between 4 and 5 is 1. 
Hence 3 and 5 are printed. 

Example Input/Output 2: 

Input: 

6 
23 45 12 46 24 13 

Output: 12 46

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
  int n, l = 0;
  scanf("%d", &n);
  int a[n], v, v1;
  
  for(int i=0; i<n; i++)
      scanf("%d", &a[i]);
  v = INT_MAX;
  v1 = INT_MIN;
     
  for(int j=0; j<n; j++)
  {
      if(a[j] < v)
      {
         v = a[j];
      }
      if(a[j] > v1)
         v1 = a[j];
  }
  
  printf("%d %d", v, v1);
}
/* PYHTON:
N = int(input())
Arr = list(map(int, input().split()))
Arr.sort()
print(Arr[0], Arr[-1], sep=" ")
*/
