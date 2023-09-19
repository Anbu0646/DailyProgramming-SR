/*
The program must accept a string S with spaces as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= Length of S <= 100

Input Format:  The first line contains S. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  Very Useful One 

Output: 

V 
Ve 
Ver
Very 
U 
Us
Use
Usef
Usefu
Useful
O 
On
One

Example Input/Output 2: 

Input:  skill is power 

Output: 

s 
sk
ski
skil
skill
i 
is
p 
po
pow
powe 
power

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin, s);
    string k = "";
    vector<string> nums;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            nums.push_back(k);
            k = "";
        }
        else
        {
            k += s[i];
        }
    }
    nums.push_back(k);

    for(int i=0; i<nums.size(); i++)
    {
        string y = "";
        for(int j=0; j < nums[i].size(); j++)
        {
            y += nums[i][j];
            cout<<y<<endl;
        }
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1000];
    while(scanf("%s", s) > 0)
    {
        for(int i=0; i<strlen(s); i++)
        {
            for(int j=0; j<=i; j++)
            {
                printf("%c", s[j]);
            }
            printf("\n");
        }
    }

}

PY3:
a = input().split()
for w in a:
    for i in range(len(w)):
        print(w[:i + 1])
*/
