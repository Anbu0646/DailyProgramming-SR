/*
The program must accept two string values S1 and S2 are of equal length as the input.
The program must print the common substring which is having the maximum length and occurring at the same position in both string values. 
If there is more than one such substring then print the first occurring one as the output. 

Note: At least one character is always present at the same position in both string values.

Boundary Condition(s): 1 <= Length of S1, S2 <= 1000

Input Format:  

The first line contains S1. 
The second line contains S2.

Output Format: The first line contains the common substring which is having the maximum length and occurring at the same position in both string values. 

Example Input/Output 1: 

Input:  

skillrack 
SkillRack 

Output: kill 

Explanation: 

There are two substrings kill and ack occurring at the same position in both string values. 
skillrack SkillRack Here the substring kill is having the maximum length. 
So kill is printed as the output.

Example Input/Output 2:

Input: 

abcxxyzmn 
abdxyzkmn 

Output: ab

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

string maxlength(string &s1, string &s2, int i, int len, string &ans, string &temp)
{
    if(i == len)
    {
        if(temp.size() > ans.size())
            ans = temp;
        return ans;
    }
  
    if(s1[i] == s2[i])
        temp += s1[i];
  
    if(s1[i] != s2[i])
    {
        if(temp.size() > ans.size())
            ans = temp;
        temp = "";
    }
  
    return maxlength(s1, s2, i + 1, len, ans, temp);
}

int main(int argc, char** argv)
{
    string s1, s2, ans = "", temp = "";
    getline(cin, s1);
    getline(cin, s2);
    
    cout<<maxlength(s1, s2, 0, s1.size(), ans, temp);
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[1001], s2[1001];
    scanf("%s\n%s", s1, s2);
    int start = 0, end = 0, big = 0;
    
    for(int i = 0; i < strlen(s1); i++)
    {
        int c = 0, e = 0;
        for(int j = i; j < strlen(s1); j++)
        {
            if(s1[j] == s2[j])
            {
                c++;
                e = j;
            }
            else
            {
                break;
            }
        }
        if(c > big)
        {
            big = c;
            start = i;
            end = e;
        }
    }
    
    for(int i = start; i <= end; i++)
    {
        printf("%c", s1[i]);
    }
}


PY3:
a = input().strip()
b = input().strip()
s = ""
for i in range(len(a)):
    for j in range(i + 1, len(a) + 1):
        if(a[i:j] == b[i:j] and (j - i) > len(s)):
            s = a[i:j]
print(s)
*/
