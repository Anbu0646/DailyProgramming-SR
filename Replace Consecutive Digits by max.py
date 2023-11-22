'''
The program must accept a string S containing alphabets and digits as the input.
For each substring X containing only digits in the string S, the program must replace the substring X by the largest digit in it.
Then the program must print the modified string S as the output. 

Boundary Condition(s): 2 <= Length of S <= 100 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  abc132sdfg78909okokok3ok

Output: abc3sdfg9okokok3ok 

Explanation: 

In the given string abc132sdfg78909okokok3ok, The first substring 132 is replaced by the largest digit 3. 
The second substring 78909 is replaced by the largest digit 9. 
The third substring 3 has only one digit so keep as it is.
So abc3sdfg9okokok3ok is printed as the output. 

Example Input/Output 2:

Input:  123562A

Output: 6A

SOLUTION:
'''

a, l = input(), []
for i in a:
    if i.isalpha():
        if len(l) != 0:
            print(max(l), end = '')
            l = []
        print(i, end = '')
    else:
        l.append(int(i))
if len(l) != 0:
    print(max(l))
  
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    int l;
    scanf("%s%n", s, &l);
    for(int i = 0; i < l; i++)
    {
        if(isdigit(s[i]))
        {
            int m = s[i] - 48;
            for(int j=  i + 1; j <= l; j++)
            {
                if((!isdigit(s[j])) || j == l)
                {
                    i = j - 1;
                    break;
                }
                int k = s[j] - 48;
                if(m < k) 
                   m=k;
            }
            printf("%d", m);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[101];
    scanf("%s", a);
    int n = strlen(a);
    int flag = 0, max = 0;
    for(int i = 0; i < n; i++)
    {
        if(flag == 0 && isalpha(a[i]))
        {
            printf("%c", a[i]);
        }
        else if(flag == 1 && isalpha(a[i]))
        {
            printf("%c%c", max, a[i]);
            max = 0;
            flag = 0;
        }
        else if(isdigit(a[i]))
        {
            flag = 1;
            if(a[i] > max)
            {
                max = a[i];
            }
        }
    }
    if(flag == 1)
    {
        printf("%c", max);
    }
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
  string str;
  cin>>str;
  int ind = 0;
  while(ind < str.length())
  {
      if(isalpha(str[ind]))
      {
          cout<<str[ind];
      }
      else
      {
          int maxi = -1;
      
          while(isdigit(str[ind]) and ind < str.length())
          {
              maxi = max(maxi, str[ind] - '0');
              ++ind;
          }
          
          cout<<maxi;
          
          if(ind < str.length()) 
          {
              cout<<str[ind];
          }
       }
      ind++;
    }
}
'''
