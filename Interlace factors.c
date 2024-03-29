/*
The program must accept two integers X and Y as the input. 
The program must print the factor(s) of X interlaced with the factor(s) of Y in ascending order as the output. 
If some factors of X or Y are not having their pairs to interlace then print those factors in ascending order as the output. 

Boundary Condition(s): 1 <= X, Y <= 10^8 

Input Format:  The first line contains the values of X and Y separated by a space. 
Output Format: The first line contains the factors of X and Y separated by a space as per the given conditions. 

Example Input/Output 1: 

Input:  100 24 
Output: 1 1 2 2 4 3 5 4 10 6 20 8 25 12 50 24 100 

Explanation: The factors of 100 are 1 2 4 5 10 20 25 50 and 100. The factors of 24 are 1 2 3 4 6 8 12 and 24. So they are printed in interlaced manner as given below. 
             1 1 2 2 4 3 5 4 10 6 20 8 25 12 50 24 100 
             
Example Input/Output 2: 

Input:  50 121 
Output: 1 1 2 11 5 121 10 25 50

SOLUTION:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int x, y;
    scanf("%ld %ld", &x, &y);
  
    int a[1001], b[1001], c1=0, c2=0;
  
    for(int i=1; i<=x; i++)
    {
        if(x%i == 0)
          a[c1++] = i;
    }
  
    for(int i=1; i<=y; i++)
    {
        if(y%i==0)
          b[c2++] = i;
    }
  
    int l=0, m=0; 
  
    while(l<c1 || m<c2)
    {
        if(l < c1)
          printf("%d ", a[l++]);
        if(m < c2)
          printf("%d ", b[m++]);
    }
}
