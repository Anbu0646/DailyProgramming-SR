/*
The program must accept an expression a*b+c-d*e as the input. 
The program must evaluate the expression with the precedence of arithmetic operators (+, - and *). 
Then the program must print the result as the output. 

Boundary Condition(s): 1 <= Each integer value <= 10^3 

Input Format: The first line contains the expression a*b+c-d*e. 

Output Format: The first line contains an integer. 

Example Input/Output 1: 

Input:  5*4+32-12*10 

Output: 1200 

Example Input/Output 2: 

Input:  15*2+10-20*2 

Output: -240
  
SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d*%d+%d-%d*%d", &a, &b, &c, &d, &e);
    
    int x = b + c;
    int y = x - d;
    int z = a * y;
    int w = z * e;
    printf("%d", w);

}

/*
PY3:

ac = list(input().split('*'))
print(int(ac[0])*eval(ac[1])*int(ac[2]))
*/
