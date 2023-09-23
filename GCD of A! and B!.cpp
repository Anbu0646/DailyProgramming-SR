/*
The program must accept two integers A and B as the input. 
The program must print the GCD (Greatest Common Divisor) of A! and B! as the output. 

Note: A! represents the factorial of A. B! represents the factorial of B. 

Boundary Condition(s): 1 <= A, B <= 20 

Input Format:  The first line contains A and B separated by a space. 

Output Format: The first line contains the GCD of (A!) and (B!). 

Example Input/Output 1: 

Input:  4 3 

Output: 6

Explanation:

4! = 4 x 3 x 2 x 1 = 24 
3! = 3 x 2 x 1 = 6 
The GCD of 24 and 6 is 6. 
So 6 is printed as the output. 

Example Input/Output 2: 

Input:  4 5 

Output: 24

SOLUTION:
*/

#include <iostream>

long long int gcd(long long int a, long long int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

int main() 
{
    long long int x, y, a = 1, b = 1;
    cin >> x >> y;

    for (long long int i = 1; i <= x; i++) 
    {
        a *= i;
    }

    for (long long int i = 1; i <= y; i++) 
    {
        b *= i;
    }

    cout << gcd(a, b) << endl;

    return 0;
}


/*
PY3:
import math
a, b = map(int,input().split())
m = math.factorial(a)
n = math.factorial(b)
print(math.gcd(m,n))

C:
#include<stdio.h>
#include<stdlib.h>

long long int gcd(long long int a, long long int b)
{
    return b==0 ? a : gcd(b, a % b);
}
int main()
{
    long long int x, y, a = 1, b = 1;
    scanf("%lld %lld", &x, &y);
    for(long long int i=1; i<=x; i++) a *= i;
    for(long long int i=1; i<=y; i++) b *= i;
    printf("%lld", gcd(a, b));
    return 0;
}
*/
