/*
The program must accept a string S where the length of S is always a multiple of 4 as the input. 
The program must split the string S into four equal parts.
Then the program must reverse the characters in each part. 
Finally, the program must print the modified four equal parts of the string S as the output.

Boundary Condition(s): 4 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  paraacetoaminophenol 

Output: aarap aotec ponim loneh 

Explanation: 

The four equal parts of the string S are paraa cetoa minop and henol. 
After reversing the characters in the four parts, they become aarap aotec ponim and loneh. 
Hence the output is aarap aotec ponim loneh 

Example Input/Output 2: 

Input:  FAST

Output: F A S T

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
  
    if(s.length() % 4 == 0)
    {
        int r = s.length()/4;
        for(int i = 0; i < s.length(); i += r)
        {
            string c = s.substr(i, r);
            reverse(c.begin(), c.end());
            cout << c << " ";
        }
    }

}





#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int n = s.length();
    int k = n / 4;
    for(int i=0;i<n;i+=k)  
    {
        for(int j = i + (k - 1); j >= i; j--)
        {
            cout<<s[j];
        }
        cout<<" ";
    }
}
/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1001];
    scanf("%s ", str);
    int len = strlen(str);
    int k = len / 4;
    int m = 0, s = 0, l = 0;
    for(int i=0; i<4; i++)
    {
       
      m = l;
      l = l + k;
      for(int j=l - 1; j >= m; j--)
      {
        printf("%c", str[j]);  
      }
      printf(" ");
    }
}

PY3:
n = input().strip();
t = len(n)//4;
for i in range(0, len(n), t):
    print(n[i:i + t][::-1], end = " ");
*/
