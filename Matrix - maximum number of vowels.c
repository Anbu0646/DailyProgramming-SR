/*
The program must accept two character matrices A and B are of same size NxN as the input. 
The program must print the matrix which has the maximum number of vowels as the output. 
If both matrices have the same number of vowels then the program must print the matrix A as the output. 

Note: At least one vowel must be present in both the matrices. 

Boundary Condition(s): 2 <= N <= 50 

Input Format: 

The first line contains the integer N. 
The next N lines contain N characters (matrix A) each separated by a space(s). 
The remaining N lines contain N characters (matrix B) each separated by a space(s). 

Output Format: 

The first N lines contain N characters separated by space(s). 

Example Input/Output 1: 

Input: 

3 
Q  K  e 
v  B  a 
U  I  T 
i  Y  u 
t  z  o 
w  a  E 

Output: 

i  Y  u 
t  z  o
w  a  E 

Explanation: 

The matrix A has 4 vowels ( e, a, U and I). 
The matrix B has 5 vowels ( i, u, o, a and E ). 
The matrix B has more vowels than matrix A. 
Hence the output is 

i  Y  u 
t  z  o 
w  a  E 

Example Input/Output 2: 

Input: 

4 

a  s  d  g  
q  w  e  t  
i  h  j  k 
x  c  v  u 
o  f  g  f
u  r  t  y 
l  k  j  i 
f  d  s  a 

Output: 

a  s  d  g 
q  w  e  t 
i  h  j  k 
x  c  v  u

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
char a[100][100], b[100][100];
int c=0, c1=0, i, j, k, n;
scanf("%d", &n);
  
for(i=0; i<n; i++)
{
    for(j=0;j<n;j++)
    {
        scanf(" %c",&a[i][j]);
        if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u'||a[i][j]=='A'||a[i][j]=='E'||a[i][j]=='I'||a[i][j]=='O'||a[i][j]=='U')
        {
            c++;
        }
    }
}
  
for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    {
        scanf(" %c", &b[i][j]);
        if(b[i][j]=='a' || b[i][j]=='i' || b[i][j]=='e' || b[i][j]=='u' || b[i][j]=='o' || b[i][j]=='A' || b[i][j]=='E' || b[i][j]=='I' || b[i][j]=='O' || b[i][j]=='U')
        {
            c1++;
        }
    }
}

if(c>=c1)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}
else
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%c ", b[i][j]);
        }
        printf("\n");
    }
}
}
