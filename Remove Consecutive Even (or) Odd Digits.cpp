/*
The program must accept an integer N as the input. 
The program must remove the last occurring consecutive odd digits of N if the last digit of N is odd. Else the program must remove the last occurring consecutive even digits of N. 
Finally, the program must print the modified integer N as the output. 

Note: At least one odd digit and one even digit are always present in the integer N. 

Boundary Condition(s):  100 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains the modified N. 

Example Input/Output 1: 

Input:  2315642 

Output: 2315 

Explanation: 

Here N=2315642. 
The last digit of 2315642 is even. 
After removing the last occurring consecutive even digits of 2315642.
Now the integer becomes 2315. 
Hence the output is 2315.

Example Input/Output 2: 

Input:  92423 

Output: 9242

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int even(int n)
{
    int last = n % 10;
    while(last % 2 == 0)
    {
        n = n / 10;
        last = n % 10;
    }
    return n;
}

int odd(int n)
{
    int l = n % 10;
    
    while(l % 2 == 1)
    {
        n = n / 10;
        l = n % 10;
    }
    
    return n;
}

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int jk = n % 10;
    
    if(jk % 2 == 0)
    {
        even(n);
        cout<<even(n);
    }
    else
    {
        odd(n);
        cout<<odd(n);
    }
    
    return 0;
}

/*
PY3:
n = int(input());
if n % 2 != 0:
    while(n % 2 != 0):
        n = n // 10;
    print(n);
else:
    while(n % 2 == 0):
        n = n // 10;
    print(n);


    
N = int(input())
Unit_Digit = N % 10
Is_Odd = Unit_Digit % 2 == 1
Value = N
Count = 0
while Value:
    Value_Now = Value % 10
    if Value_Now % 2 == Is_Odd:
        Count += 1
    else:
        break
    Value //= 10
print(N//10**(Count))


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n, i;
    int flag = 0;
    scanf("%llu", &n);
    if(n % 2 == 0)
    {
        for(i=n; i>0; i /= 10)
        {
            if(i % 2 == 0)
            {
                flag = 1;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        for(i=n; i>0; i /= 10)
        {
            if(i % 2 != 0)
            {
                flag=1;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n", i);
}
*/
