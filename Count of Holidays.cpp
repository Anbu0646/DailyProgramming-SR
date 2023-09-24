/*
The program must accept an integer N representing the number of days as the input. 
The program must print the minimum and maximum possible number of holidays present in the given N days if saturday and sunday are holidays.

Hint: The first day in the given N days can be any one among the 7 week days. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The first line contains the minimum and maximum possible number of holidays separated by a space.

Example Input/Output 1: 

Input:  10 

Output: 2 4 

Explanation: 

The minimum possible number of holidays 2 is obtained if the 1st day starts from Monday. 
The maximum possible number of holidays 4 is obtained if the 1st day starts from Saturday. 
Hence the output is 2 4.

Example Input/Output 2: 

Input:  7

Output: 2 2

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int x = 0, j = 0;
  
    for(int i=0; i < n && j < 7; i++, j++)
    {
        if(j >= 5)
        {
            x++;
        }
        if(j == 6)
        {
            j = -1;
        }
    }
  
    cout<<x<<' ';
  
    j = 5, x = 0;
  
    for(int i=0; i < n && j < 7; i++, j++)
    {
        if(j >= 5)
        {
            x++;
        }
        if(j == 6)
        {
            j = -1;
        }
    }
  
    cout<<x;
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   scanf("%d", &n);
   int h = 0, h1 = 0;
   int n1 = n, a = 1;
   for(int i=1; i<=n; i++)
   {
     if(a >= 8)
     {
        a = 1;
     }
     if(a == 6 || a == 7)
     {
        h++;
     }
     if(a == 1 || a == 2)
     {
        h1++;
     }
     a++;
     
   }
   printf("%d %d", h, h1);
}

PY3:
n = int(input())
a = ["Sat","Sun","Mon","Tue","Wed","Thu","Fri"]
kk = []
for i in range(7):
    k = i 
    c = 0
    for j in range(n):
        if k > 6:
            k = 0
        if a[k] == "Sat" or a[k] == "Sun":
            c += 1
        k += 1
    kk.append(c)
print(min(kk), max(kk))
*/
