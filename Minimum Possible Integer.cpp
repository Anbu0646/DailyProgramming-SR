/*
The program must accept two integers N and K as the input. 
The program must print the minimum possible integer X which can be obtained by modifying at most K digits in N as the output. 

Note: The number of digits in N and X should be equal without any leading zeros. 

Boundary Condition(s): 

1 <= N <= 10^7 
1 <= K <= 7 

Input Format:  

The first line contains N. 
The second line contains K. 

Output Format: The first line contains X. 

Example Input/Output 1: 

Input:  

51528 
3 

Output: 10028 

Explanation: 

The minimum possible integer is obtained by modifying the first three digits of 51528. 
The first digit of 51528 is changed to 1. 
The second digit of 51528 is changed to 0. 
The third digit of 51528 is changed to 0.
Hence the output is 10028. 

Example Input/Output 2: 

Input:  

10504 
2 

Output: 10000

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    int k;
    cin>>n>>k;
    for(int i=0; n[i] && k; i++)
    {
        if(i==0 && n[i] != '1')
        {
            n[i] = '1';
            k--;
        }
        else if(i > 0 && n[i] != '0')
        {
            n[i] = '0';
            k--;
        }
    }
    cout<<n;
}
/*
C:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1001];
    int k ,count=0;
    scanf("%s",str);
    scanf("%d",&k);
    for(int i=0;i<strlen(str);i++){
        if(i==0 && str[i]!='1' && count < k){
            str[i]='1';
            count++;
        }
        else if(i>0 && str[i]!='0' && count <k){
            str[i]='0';
            count++;
        }
    }
    printf("%s",str);
}

PY3:

N = input().strip()
K = int(input().strip())
st = 10 ** (len(N)-1)
while(len(str(st))==len(N)):
    di=0
    F = str(st)
    for i in range(len(N)):
        if(N[i]!=F[i]):
            di+=1
    if(di<=K):
        print(st)
        break
    st+=1
*/
