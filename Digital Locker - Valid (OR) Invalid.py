'''
The program must accept two string values U and P as the input. 
U represents the username of a digital locker and P represents its password. 
The program must print VALID if the password does not contain any characters from the username U.
Else the program must print INVALID as the output. 

Boundary Condition(s): 

5 <= Length of U <= 50 
4 <= Length of P <= 20

Input Format: 

The first line contains U. 
The second line contains P. 

Output Format: The first line contains either VALID or INVALID. 

Example Input/Output 1:

Input: 

uit047@demo 
srack123 

Output: VALID

Explanation:

Here the password srack123 does not contains any characters from the username uit047@demo.
So VALID is printed as the output. 

Example Input/Output 2:

Input: 

AVNG007_bk47 
o7st0ct2o19

Output: INVALID

SOLUTION:
'''

s1 = input()
s2 = input()
ctr = 0
for i in s2:
    if i in s1:
        ctr += 1
        break
if(ctr != 0):
    print("INVALID")
else:
    print("VALID")

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char u[51], p[21];
    scanf("%s\n %s", u, p);
    for(int i = 0; i < strlen(u); i++)
    {
        for(int j = 0; j < strlen(p); j++)
        {
            if(u[i] == p[j])
            {
                printf("INVALID");
                return 0;
            }
        }
    }
    printf("VALID");
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s, x;
    
    cin>>s>>x;
    
    int f = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(x.find(s[i]) == string::npos) 
           f = 1;
        else
        {
            f = 0;
            break;
        }
    }
    
    if(f) cout<<"VALID";
    else cout<<"INVALID";
    
}
'''
