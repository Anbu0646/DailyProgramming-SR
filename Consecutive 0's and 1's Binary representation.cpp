/*
The program must accept an integer N as the input. 
The program must find the binary representation of N and print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^17 

Input Format:  The first line contains N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  463 

Output: 

111 
00 
1111 

Explanation: 

The binary representation of 463 is 111001111. 

Example Input/Output 2:

Input:  81

Output: 

1 
0 
1 
000 
1 

Explanation: 

The binary representation of 81 is 1010001.

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long n;
    cin>>n;

    vector<int> nums;

    while(n > 0)
    {
        nums.push_back(n % 2);
        n /= 2;
    }
    
    reverse(nums.begin(), nums.end());
    cout<<nums[0];
    
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] != nums[i - 1])
        {
            cout<<endl;
        }
        cout<<nums[i];
    }
}

/*
PY3:
N= int(input())
Bin_N = bin(N)[2:]

for i in range(0, len(Bin_N) - 1):
    print(Bin_N[i], end="")
    if Bin_N[i] != Bin_N[i + 1]:
        print()

print(Bin_N[len(Bin_N) - 1])

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int a;
    int x[1234567], i = 0, Digit, y = 5;
    scanf("%ld", &a);
    
    while(a > 0)
    {
        Digit = a % 2;
        x[i] = Digit;
        i++;
        a = a / 2;
    }
    
    for(int j = i - 1; j >= 0; j--)
    {
        if(y == 1)
        {
            if(x[j] != 1)
            {
                printf("\n");
            }
        }
        else if(y == 0)
        {
            if(x[j] != 0)
            {
                printf("\n");
            }
        }
        printf("%d", x[j]);
        y = x[j];
    }
}
*/
