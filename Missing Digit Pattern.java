/*
The program must accept an integer N as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Note: All the digits in N are non-zero digits. 

Boundary Condition(s): 11 <= N < 10^4

Input Format:  The first line contains N.

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  651

Output: 51 51 51 51 51 51
        61 61 61 61 61 
        65 

Example Input/Output 2: 

Input:  9845 

Output: 845 845 845 845 845 845 845 845 845 
        945 945 945 945 945 945 945 945 
        985 985 985 985 
        984 984 984 984 984

SOLUTION:
*/

import java.util.*;
public class Hello
{
    public static void main(String[] args) 
    {
		Scanner s = new Scanner(System.in);
		char[] str = s.next().toCharArray();
		for(int i = 0; i < str.length; i++, System.out.println())
		{
		    for(int j = 0; j < (str[i] - '0'); j++)
		    {
		        for(int k = 0; k < str.length; k++)
		        {
		            if(k != i)
		                System.out.print(str[k]);
		        }
		        System.out.print(" ");
		    }
		}
	}
}

/*
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
        string s, tmp;
        cin>>s;
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            tmp = s.substr(0, i) + s.substr(i + 1);
            int c = s[i] - '0';
            while(c--)
            {
              cout<<tmp<<" ";
            }
             cout<<endl;
        }
}


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
        char s[100001];
        scanf("%s", s);
        long int x, y, t = 0;
        for(int i = 0; s[i] !='\0'; i++)
        {
            for(int j = 0; s[j] != '\0'; j++)
            {
                if(i == j)
                {
                    x = s[i] - '0';
                }
                else
                {
                    y = s[j] - '0';
                    t = t * 10 + (y);
                }
            }
            
            for(int i = 1; i <= x; i++)
            {
                printf("%ld ", t);
            }
            
            t = 0, x = 0, y = 0;
            printf("\n");
        }
}

PY3:

a = input().strip()
for i in range(len(a)):
    print(int(a[i]) * (a[:i] + a[i + 1:] + " "))
*/
