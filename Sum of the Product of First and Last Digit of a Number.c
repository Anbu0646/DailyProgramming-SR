/*
The program must accept two integers N1 and N2 with the same number of digits as the input. 
The program must print the sum of the product of the first digit of N1 and the last digit of N2, product of the second digit of N1 and second digit from last of N2 and so on. 

Boundary Condition(s): 1 <= N1, N2 <= 10^8 

Input Format: The first line contains the integer N1 and N2 separated by a space. 

Output Format: The first line contains the integer as per the given condition. 

Example Input/Output 1: 

Input:  1928  2136 

Output: 51 

Explanation: 

The sum of the products are calculated as below: 

(1x6) + (9x3) + (2x1) + (8x2)  = 6 + 27 + 2 + 16  =  51 

Hence the output is 51. 

Example Input/Output 2: 

Input:  68  79 

Output: 110

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[1000], s[10000];
    
    scanf("%s %s", &a, &s);
    
    int h = strlen(s), m = 0;
  
    for(int i = 0, j = h - 1; i<h, j>=0; i++, j--)
    {
        m += (a[i] - 48) * (s[j] - 48);
    }
  
    printf("%d", m);
}

/*
PY3:

a, b = input().strip().split()
b = b[::-1]
s = 0

for i in range(len(a)):
    s += (int(a[i]) * int(b[i]))

print(s)
*/
