/*
The program must accept an integer value N and remove digits from the end till an odd digit is in the tenth digit position. 
N will contain atleast two digits. 

Boundary Condition(s):  10 <= N <= (2^31)-1 

Input Format:  The first line contains N. 

Output Format: The first line contains the integer value having tenth digit as an odd digit. 

Example Input/Output 1: 

Input:  12345 

Output: 1234 

Example Input/Output 2: 

Input:  2357

Output: 2357 

Example Input/Output 3: 

Input:  592468 

Output: 592

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
        int n;
        cin>>n;
        while(n != 0)
        {
            int k = (n/10) % 10;
            if(k % 2 != 0)
            {
                cout<<n;
                break;
            }
            n /= 10;
        }
}

/*
PY3:

N = input().strip()

for i in range(len(N) - 2, -1, -1):
    if(int(N[i]) % 2 != 0):
        Index = i
        break

print(N[:Index + 2])


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(((n/10) % 10) % 2 != 1)
    {
        n /= 10;
    }
    printf("%d", n);
}
*/
