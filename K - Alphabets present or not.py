'''
The program must accept a string S and an integer K as the input. 
The program must print YES if the first K lower case alphabets are present atleast once in the string S. 
Else the program must print NO as the output. 

Boundary Condition(s): 

1 <= Length of S <= 100 
1 <= K <= 26

Input Format: 

The first line contains S.
The second line contains K. 

Output Format: The first line contains either YES or NO. 

Example Input/Output 1: 

Input:  

afehijklmnopzqrcstuvdwxgyb 
5

Output: YES 

Explanation: 

Here K = 5. 
The first 5 lower case alphabets are a b c d e, which are present in the string afehijklmnopzqrcstuvdwxgyb. 
So YES is printed. 

Example Input/Output 2: 

Input: 

BdbAarCst 
3

Output: NO

SOLUTION:
'''

s = input()
n = int(input())
c = 0
l = 'abcdefghijklmnopqrstyvwxyz'

for i in range(n):
    if l[i] in s:
        c += 1
if n == c:
    print("YES")
else:
    print("NO")

'''
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin, s);
    int sum;
    cin>>sum;
    int len = s.length();
    int c = 0;
    int freq[26] = {0};
    
    for(int i = 0; i < len; i++)
    {
        if(islower(s[i]))
        {
            freq[s[i] - 'a']++;
        }    
    }
    
    for(int i = 0; i < sum; i++)
    {
        if(freq[i] >= 1)
        {
            c++;
        }
    }
    
    if(c == sum)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    int k = 0, p = 97;
    
    for(int i = 0; i < n; i++)  
    {
        for(int j = 0; j < strlen(s); j++)
        {
            int h = s[j];
            if(p == h)
            {
                k++;
                break;
            }
        }
        
        p++;
        
    }
    
    if(n == k)
    {
        printf("YES");
    }
    else
    {  
        printf("NO");
    }
}
'''
