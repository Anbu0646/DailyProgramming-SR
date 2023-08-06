/*
The program must accept N integers and a single digit D. 
Then the program must choose the integers having tenth digit as D and sort those integers among them. 
Finally the program must print the modified N integers as the output. 

Boundary Condition(s): 

2 <= N <= 1000 
1 <= Each integer value <= 10^4 
1 <= D <= 9 

Input Format: 

The first line contains N. 
The second line contains N number of integers. 
The third line contains D. 

Output Format: 

The first line contains modified N integers. 

Example Input/Output 1: 

Input: 

9 
231 991 34 901 33 3 536 9031 83 
3 

Output: 

33 991 34 901 231 3 536 9031 83 

Explanation: 

Here D = 3. 
The integers having 3 as tenth digit are 231 34 33 536 9031.
Sorting these integers, the order is 33 34 231 536 9031. 
Hence the output is 33 991 34 901 231 3 536 9031 83 

Example Input/Output 2: 

Input: 

12 
7 77 87 877 412 71 233 672 201 87 7 70 
7 

Output: 

7 70 87 71 412 77 233 672 201 87 7 877

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  
  for(int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  int d;
  scanf("%d", &d);
  for(int i=0; i<n; i++)
  {
    if(a[i] / 10 % 10 == d)
    {
        for(int j=i + 1; j<n; j++)
        {
            if(a[j] / 10 % 10 == d)
            {
                if(a[i] > a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
    printf("%d ", a[i]);
  }
}

/*
PY3:

n = int(input())
arr = list(map(int,input().split()))
d = int(input())

tenth_digit = []

for num in arr:
    if(num // 10) % 10 == d:
        tenth_digit.append(num)

tenth_digit.sort()

j = 0

for i in range(n):
    if(arr[i] // 10) % 10 == d:
        arr[i] = tenth_digit[j]
        j += 1
print(*arr)

*/
