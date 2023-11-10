'''
The program must accept a string S as the input. 
The program must print the substring values of S in reverse order as the output. 

Boundary Condition(s): 2 <= Length of S <= 100 

Input Format: The first line contains S. 

Output Format: The first line contains the substring values of S in reverse order. 

Example Input/Output 1: 

Input: Brick 

Output: kckickrickBrick 

Explanation: 

In the string "Brick", the last one character is k. So k is printed. 
The last two characters are c and k. So ck is printed. 
The last three characters are i c and k. So ick is printed. 
The last four characters are r i c and k. So rick is printed. 
The last five characters are B r i c and k. So Brick is printed. 

Example Input/Output 2: 

Input: dolphin 

Output: ninhinphinlphinolphindolphin

SOLUTION:
'''

S = input().strip()
for i in range(len(S)):
     print(S[-(i + 1):], end = "")

'''
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int l = s.length() - 1;
    int c = 0;
    while(c < s.length())
    {
        cout<<s.substr(l, s.length());
        l--;
        c++;
    }
}

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
  char s[100];
  scanf("%s", s);
  int n = strlen(s);
  for(int i = n - 1; i >= 0; i--)
  {
     for(int j = i; j < strlen(s); j++)
     {
        printf("%c", s[j]);
     }
  }

}
'''
