/*
The program must accept two integers X and Y as the input. 
The program must print all the palindromic integers from X to Y as the output. 
If there is no palindromic integers from X to Y then the program must print -1 as the output.

Boundary Condition(s): 1 <= X, Y <= 10^5

Input Format:  The first line contains X and Y separated by a space. 

Output Format: The first line contains the palindromic integers from X to Y separated by a space or -1. 

Example Input/Output 1:

Input:  120 191 

Output: 121 131 141 151 161 171 181 191 

Example Input/Output 2: 

Input:  455 463 

Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, f = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        int n = i, num = 0;
        while(n != 0)
        {
            int r = n % 10;
            num = num * 10 + r;
            n /= 10;
        }
        if(num == i)
        {
            printf("%d ", i);
            f = 1;
        }
    }
    if(f == 0)
    printf("-1");
}

/*
PY3:
f = True
x, y = map(int, input().strip().split())
for i in range(x, y + 1):
    t = str(i)
    if t == t[::-1]:
        print(t, end = " ")
        f = False
if f:
    print("-1")
*/
