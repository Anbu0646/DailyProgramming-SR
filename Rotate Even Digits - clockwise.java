/*
The program must accept an integer N as the input. 
The program must rotate the even digits of N in their positions by 1 time in the clockwise direction. 
Then the program must print the modified integer N as the output. 

Boundary Condition(s): 100 <= N <= 10^18

Input Format:  The first line contains N. 

Output Format: The first line contains the modified integer N.

Example Input/Output 1:

Input:  5233487 

Output: 5433827 

Example Input/Output 2: 

Input:  1002 

Output: 1020 

Example Input/Output 3: 

Input:  400352

Output: 2354 

Explanation: 

After rotating the even digits of 400352 in their positions by 1 time in the clockwise direction, the integer becomes 002354.
Now the leading zeros in 002354 have been removed and it is printed as output.

SOLUTION:
*/

import java.util.*;
public class Hello 
{
    public static void main(String[] args) 
    {
		    Scanner sc = new Scanner(System.in);
		    String s = sc.next(),ans="";
		    ArrayList<Character> al = new ArrayList<>();
		    int l = 0;
		    
        for(int i = 0; i < s.length(); i++)
		    {
		        if((s.charAt(i) - '0') % 2 == 0)
		            al.add(s.charAt(i));
		    }
      
		    Collections.rotate(al, al.size() - 1);
		    
        for(int i = 0; i < s.length(); i++)
		    {  
		        if((s.charAt(i) - '0') % 2 != 0)
		        {
		            ans += s.charAt(i);
		        }
		        else
		        {
		            ans += al.get(l++);
		        }
		    }
      
		    System.out.print(Long.parseLong(ans));
	  }
}

/*
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;

    char prev = '#';
    int ind = -1, n = s.size();


    for(int i = n - 1; i >= 0; i--)
    {
        if((s[i] - '0') % 2 == 0)
        {
            if(ind == -1)
            {
              ind = i;
              prev = s[i];
            }
            else
            {
              swap(prev, s[i]); 
            }
         }
    }
    
    if(ind != -1)
       s[ind]  = prev;

    long long ans=0;

    for(auto& it:s)
    {
        ans = 1ll * ans * 10 + (it - '0');
    }

    cout<<ans;

}


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[10^18], t, k, d;
    scanf("%s", s);
    long long int x = strlen(s) - 1, c = 0, y = 0;
    for(long long int i = x; i >= 0; i--)
    {
         int z = s[i] - '0';
         if(z % 2 == 0)
         {
            if(c == 0)
            {
                c = 1;
                k = i;
            }
            for(long long int j = i - 1; j >= 0; j--)
            {
                int a = s[j] - '0';
                if(a % 2 == 0)
                {
                    d = s[j];
                    if(y == 0)
                    {
                       t = s[j];
                       s[j] = s[i];
                    }
                    else
                    {
                        s[j] = t;
                        t = d;
                    }
                    
                    y = 1;
                    break;
                }
              }
          }
      }
      if(c  ==  0)
      {
          printf("%s", s);
          return 0;
      }
      
      s[k] = t, c = 0;
      for(long long int i = 0; s[i] != '\0'; i++)
      {
          if(s[i] != '0' && c == 0)
          {
              c = 1;
          } 
          if(c == 1) 
             printf("%c", s[i]);
      }
}


PY3:
n = input()
temp = []
for i in n:
    if int(i) % 2 == 0:
        temp.append(i)
if len(temp) > 0:
    temp.append(temp.pop(0))
ans = ""
for i in n:
    if int(i) % 2 == 1:
        ans += i
    else:
        ans += temp.pop(0)
print(int(ans))
*/
