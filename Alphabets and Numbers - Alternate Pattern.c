/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100

Input Format:  The first line contains the value of N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: 

*a*b*c*d* 
-1-2-3-4- 
*e*f*g*h*
-5-6-7-8- 

Example Input/Output 2: 

Input:  7 

Output:

*a*b*c*d*e*f*g* 
-1-2-3-4-5-6-7- 
*h*i*j*k*l*m*n*
-8-9-10-11-12-13-14-
*o*p*q*r*s*t*u* 
-15-16-17-18-19-20-21- 
*v*w*x*y*z*a*b*

SOLUTION:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    char c = 'a';
    int x = 1;
  
    scanf("%d", &n);
  
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<2*n + 1; j++) 
        {
            if(i%2 == 0) 
            {
                if(j%2 == 0) 
                   printf("*");
                else 
                   printf("%c", c++);
                if(c == 'z' + 1) 
                   c = 'a';
            }
            else 
            {
                if(j%2 == 0) 
                   printf("-");
                else 
                   printf("%d", x++);
            }
        }
        printf("\n");
    }
}

/*
q=int(input());a=97;b=1
for x in range(q):
    if x%2:
        for y in range(q):
            print("-"+str(b),end="")
            b+=1
        print("-")
    else:
        for y in range(q):
            if a>122:
                a=97
            print("*"+chr(a),end="")
            a+=1
        print("*")
*/
