/*
The program must accept an integer N as the input.
The program must form an integer X by removing exactly one digit from N so that X is divisible by 8. 
The program must print YES if it is possible to form the integer X. 
Else the program must print NO as the output. 

Boundary Condition(s): 10 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains YES or NO.

Example Input/Output 1: 

Input:  3454 

Output: YES 

Explanation: 

After removing the tenth digit 5, the integer becomes 344. 
Here, the integer 344 is divisible by 8.
So YES is printed as the output.

Example Input/Output 2: 

Input:  79

Output: NO

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,out;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        out = s.substr(0, i) + s.substr(i + 1);
        int x = stoi(out);
        if(x != 0 && x % 8 == 0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int n, d = 0;
    scanf("%lld", &n);
    long long int arr[1000], r[1000], j = 0, k = 0;
    while(n > 0)
    {
        arr[j] = n % 10;
        j++;
        n = n / 10;
    }
    for(int i=j - 1; i>=0; i--)
    {
        r[k] = arr[i];
        k++;
    }
    for(int i=0; i<k; i++)
    {
        d = 0;
       for(int p=0; p<k; p++)
       {
           if(i != p)
           {
               d = (d * 10) + r[p];
           }
       }
       if(d % 8 == 0 && d != 0)
       {
           printf("YES");
           return;
       }
    }
    printf("NO");
}

PY3:
N = input().strip()
for i in range(0, len(N)):
    Integer = int(N[:i] + N[i + 1:])
    if Integer % 8 == 0 and Integer != 0:
        print("YES")
        exit()
print("NO")
*/
