/*
The program must accept two integers X and Y as the input. The program must print all the integers from X to Y which do not have continuously repeated digits that is the digits are repeated and all the digits in the number are same. 

Boundary Condition(s): 1 <= X <= Y X <= Y <= 1000000 

Input Format:  The first line contains the values of X and Y separated by space(s). 
Output Format: The first line contains the integers from X to Y which do not have continuously repeated digits. 

Example Input/Output 1: 

Input:  5 15 
Output: 5 6 7 8 9 10 12 13 14 15 

Explanation: The integers from 5 to 15 are 5 6 7 8 9 10 11 12 13 14 15 Here the integer with repeated digits is 11 Hence the output is 5 6 7 8 9 10 12 13 14 15 


Example Input/Output 2: 

Input:  1 50 
Output: 1 2 3 4 5 6 7 8 9 10 12 13 14 15 16 17 18 19 20 21 23 24 25 26 27 28 29 30 31 32 34 35 36 37 38 39 40 41 42 43 45 46 47 48 49 50


Solution:
C:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, y, f=1;
    scanf("%d %d", &x, &y);
    for(int i=x; i<=y; i++)
    {
        int p=i;
        int q=i%10;
        f=1;
        while(p>0 )
        {
            int s=p%10;
            if(q!=s)
            	f=0;
        p/=10;
        }
    if(i<10)
        printf("%d ",i);
    if(f==0)
        printf("%d ",i);
    }
}
/*

PYTHON:

x,y = map(int, input().split())
for i in range(x, y + 1):
    if (i > 9 and len(set(str(i))) == 1):
        continue
    print(i, end=' ')
*/
