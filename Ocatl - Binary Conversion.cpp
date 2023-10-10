/*
The program must accept an integer N representing the octal representation of an integer X as the input. 
The program must print the binary representation of X as the output.

Note: N is always a valid octal representation.

Boundary Condition(s): 1 <= N <= 10^6

Input Format:  The first line contains N. 

Output Format: The first line contains the binary representation of X. 

Example Input/Output 1: 

Input:  14 

Output: 1100 

Explanation: 

14 is the octal representation of 12. 
So the binary representation of 12 is 1100. 
Hence the output is 1100.

Example Input/Output 2:

Input:  11

Output: 1001

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s, res;
    cin>>s;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '0') res += "000";
        else if(s[i] == '1') res += "001";
        else if(s[i] == '2') res += "010";
        else if(s[i] == '3') res += "011";
        else if(s[i] == '4') res += "100";
        else if(s[i] == '5') res += "101";
        else if(s[i] == '6') res += "110";
        else res += "111";
    }
    long int k = stol(res);
    cout<<k;

}

/*
PY3:
N = input()
N = int(N, 8)
print(bin(N)[2:])

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 0, c = 0;
    while(n > 0)
    {
        x = x + ((n % 10) * pow(8, c));
        c++;
        n /= 10;
    }
    int a[30], i = 0;
    while(x > 0)
    {
        a[i] = x % 2;
        x /= 2;
        i++;
    }
    for(int j = i - 1; j>=0; j--)
    printf("%d", a[j]);
    
}
*/
