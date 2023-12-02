'''
The program must accept two integers N and K as the input. 
The program must remove the first K zeros in the binary representation of N. 
If the number of zeros is less than K, the program must remove all the zeros in the binary representation of N. 
Then the program must print the decimal equivalent of the modified binary representation of N as the output.

Boundary Condition(s): 

1 <= N <= 10^5 
1 <= K <= 10 

Input Format: 

The first line contains N.
The second line contains K. 

Output Format: The first line contains the decimal equivalent of the modified binary representation of N. 

Example Input/Output 1: 

Input:  5 1 

Output: 3 

Explanation:

The binary representation of 5 is 101. 
After removing the first zero from 101, it becomes 11. 
The decimal equivalent of 11 is 3. 
Hence the output is 3.

Example Input/Output 2:

Input :  8 5 

Output: 1

SOLUTION:
'''

n = int(input())
k = int(input())
s = bin(n)[2:]
s = s.replace('0', '', k)
print(int(s, 2))

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k, a[1001], ind = 0, b[1001], val = 0;
    scanf("%d\n%d", &n, &k);
    while(n > 0)
    {
        a[ind++] = n % 2;
        n /= 2;
    }
    int num = 0, dec = 0, rem = 0;
    for(int i = ind - 1; i >= 0; i--)
    {
        if(a[i] == 0 && k != 0)
        {
            k--;
            continue;
        }
        else
        {
            num = (num * 10) + a[i];
            b[val++] = a[i];
        }
    }
    int j = 0;
    for(int i = val - 1; i >= 0; i--)
    {
        rem = b[i];
        dec += rem * pow(2, j);
        j++;
    }
    printf("%d", dec);
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

#define int long long 

signed main(int argc, char** argv)
{
    int n,k;

    cin>>n>>k;

    vector<int> ans;
    
    while(n)
    {
    
        int x = n%2;
        ans.push_back(x);
        n/=2;
    }

    for(int i = ans.size() - 1; i >= 0 && k > 0; i--)
    {
    
        if(ans[i] == 0)
        {
            ans[i] = -1;
            k--;
        }
    }

    int ns = 0, c = 1;

    for(auto & i:ans)
    {
        if(i == 0 || i == 1)
        {
            ns += (c * i);
            c *= 2;
        }
    }
    
    cout<<ns;
    
}
'''
