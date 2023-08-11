/*
The program must accept N dates in the format DD/MM/YYYY as the input. 
The program must print the historically oldest date among the N dates as the output. 

Note: All the N dates are valid. 

Boundary Condition(s): 2 <= N <= 100 

Input Format: 

The first line contains N. 
The next N lines each contain a date in the format DD/MM/YYYY. 

Output Format: 

The first line contains the historically oldest date among the N dates. 

Example Input/Output 1: 

Input: 

5 
02/04/2000 
14/11/1996 
02/11/1996 
24/12/1996 
22/12/2018 

Output: 02/11/1996 

Explanation: 

The oldest date among the 5 dates is 02/11/1996. 
Hence the output is 02/11/1996 

Example Input/Output 2: 

Input: 

4 
29/01/1997
13/07/1996 
24/01/1999 
30/08/1990 

Output:30/08/1990

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a = 32, b = 13, c = 20000;
  
    for(int i=0; i<n; i++) 
    {
        int a1,b1,c1;
        scanf("%d/%d/%d",&a1,&b1,&c1);
        if(c1<c)
        {
          a = a1;
          b = b1;
          c = c1;
        }
        else if(c == c1 && b1<b)
        {
          a = a1;
          b = b1;
          c = c1;
        }
        else if(c == c1 && b == b1 && a1<a)
        {
          a = a1;
          b = b1;
          c = c1;
        }
    }
  
    printf("%.2d/%.2d/%.4d", a, b, c);
} 

/*
PY3:

n=int(input())
ds=[]
for i in range(n):
    d=input()
    day,month,year=map(int,d.split('/'))
    ds.append((year,month,day,d))
ds.sort()
print(ds[0][3])

*/
