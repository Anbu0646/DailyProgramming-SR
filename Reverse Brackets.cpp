/*
The program must accept a string S as the input. The program must reverse the characters between the brackets '(' and ')' in S. 
Then the program must remove the brackets and print the modified string S as the output.

Note: The string S always contains only one pair of brackets in the order '(' and ')'. 

Boundary Condition(s): 4 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains modified string S. 

Example Input/Output 1: 

Input:  foo(labt)l 

Output: football 

Explanation: 

The characters within the brackets are "labt". 
After reversing those characters, the string becomes football. 
Hence the output is football. 

Example Input/Output 2: 

Input: MO(NSOON) 

Output: MONOOSN

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int a, b; //index of ()
    cin>>s;
    
    //finding indexes
    for(int i=0; i<s.length(); i++) 
    {
        if(s[i] == '(') 
        {
           a = i;
        }
        if(s[i] == ')') 
        {
            b = i;
        }
    }
    //cout<<a<<"\n"<<b;
    for(int i=0; i<s.length(); i++) 
    {
        int temp;
        if(i>a && i<b) 
        {
            temp = s[a + 1];
            s[a + 1] = s[b - 1];
            s[b - 1] = temp;
            //cout<<s[a+1]<<" "<<s[b-1];
            a++;
            b--;
        }
    }
    
    for(int i=0; i<s.length(); i++) 
    {
        if(s[i] == '(' || s[i] == ')') 
        {
            continue;
        }
        else 
        {
            cout<<s[i];
        }
    }
}

/*
PY3:
String = input().strip()
Bracketed_string = String[String.index('(') + 1:String.index(')')][::-1]
print(String[:String.index('(')] + Bracketed_string + String[String.index(')') + 1:])

C:
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
   char ar[1004];
   scanf("%[^\n]s",ar);
   int start,end;
   for(int i=0;i<strlen(ar);i++)
   {
       if(ar[i]=='(')
       {
           start=i;
       }
       else if(ar[i]==')')
       {
           end=i;
       }
   }
   for(int i=0;i<start;i++)
   {
       printf("%c",ar[i]);
   }
   for(int i=end-1;i>=start+1;i--)
   {
     printf("%c",ar[i]);  
   }
  
   for(int i=end+1;i<strlen(ar);i++)
    {
           printf("%c",ar[i]);
    }
   
}
*/
