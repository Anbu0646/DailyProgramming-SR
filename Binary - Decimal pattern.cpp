/*
The program must accept an integer N as the input. 
The program must print the binary-decimal pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^16

Input Format:  The first line contains the value of N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  1142 

Output: 

1  1  1  1 
0  0  1  1 
0  0  1  0 
0  0  1  0 

Example Input/Output 2: 

Input: 

121 

Output: 

1 1 1  
0 1 0

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string n;
    cin >> n;
    
    while(1)
    {
        int c = 0;
        for(int i=0; i<n.length(); i++)
        {
            if(n[i] != '0')
            {
                n[i] = n[i] - 1;
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            if(n[i] != '0')
            {
                c++;
            }
        }
        if(c == 0)
        {
            break;
        }
        cout << endl;
    }
}

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
  char s[16];
  scanf("%s", s);
  int l = 0;
  
  for(int i=0; i<strlen(s); i++)
      l = (s[i] - '0') > l ? (s[i] - '0') : l;

  for(int i=0; i<l; i++)
  {
      for(int j=0; j<strlen(s); j++)
      {
          printf("%d", i < (s[j] - '0') ? 1:0);
      }
    printf("\n");
  }
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1000];
    int max=0,d;
    scanf("%s",s);
    for(int i=0;s[i];i++)
    {
        if(s[i]-'0'>max)
        {
            max=s[i]-'0';
        }
        
    }
    while(max>0)
    {
        for(int i=0;s[i];i++)
        {    
            d=s[i]-'0';
            if(d>0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            d--;
            s[i]=d+'0';
        }
            printf("\n");
        max--;
    }
}


PY3:

n = input().strip()
k = int(max(list(n)))

for i in range(k):
    for j in n:
        if i < int(j):
            print("1", end="")
        else:
            print("0", end="")
    print()
*/
