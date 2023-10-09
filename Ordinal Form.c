/*
The program must accept an integer N as the input.
The program must print the integer N in the ordinal form as the output. 

Boundary Condition(s): 1 <= N <= 1000

Input Format:  The first line contains N.

Output Format: The first line contains N in ordinal form.

Example Input/Output 1:

Input:  96 

Output: 96th 

Explanation: 

The ordinal form of 96 is 96th. 
Hence the output is 96th. 

Example Input/Output 2: 

Input:  1 

Output: 1st

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Unit_Digit = N % 10;
    if((N % 100) > 4 && (N % 100) <= 20)
    {
        printf("%dth", N);
    }
    else if(Unit_Digit == 1)
    {
        printf("%dst", N);
    }
    else if(Unit_Digit == 2)
    {
        printf("%dnd", N);
    }
    else if(Unit_Digit == 3)
    {
        printf("%drd", N);
    }
    else
    {
        printf("%dth", N);
    }
    return 0;
}

/*
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    if(n>=4 and n<20) cout<<n<<"th";
    else if(n==1 or n%10==1) cout<<n<<"st";
    else if(n==2 or n%10==2) cout<<n<<"nd";
    else if(n==3 or n%10==3) cout<<n<<"rd";
    else cout<<n<<"th";

}

PY3:
n = int(input())
s = 'th'
if n % 10 == 1 and n != 11:
    s = 'st'
elif n % 10 == 2 and n != 12:
    s = 'nd'
elif n % 10 == 3 and n != 13:
    s = 'rd'
print(n, s, sep = '')

*/
