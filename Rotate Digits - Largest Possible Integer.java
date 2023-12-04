/*
The program must accept an integer N as the input. 
The program must print the largest possible integer which is obtained by rotating the digits of N in the clockwise direction. 

Boundary Condition(s): 10 <= N <= 10^8

Input Format:  The first line contains N.

Output Format: The first line contains the largest possible integer as per the given condition. 

Example Input/Output 1: 

Input:  2451 

Output: 5124 

Explanation: 

The largest possible integer 5124 is obtained by rotating the digits of 2451 for two times in the clockwise direction. 
So 5124 is printed as the output.

Example Input/Output 2: 

Input:  151614 

Output: 614151

SOLUTION:
*/

import java.util.*;
public class Hello 
{
    public static void main(String[] args) 
    {
		Scanner sc = new Scanner(System.in);
		String t = sc.nextLine();
		int l = t.length(), n = Integer.parseInt(t), z = 0, k = t.length();
		while(l --> 0) 
        {
		    t = t.charAt(k - 1) + t.substring(0, k - 1);
		    n = Integer.parseInt(t);
		    if(n > z) 
               z = n;
		}
		System.out.print(z);
	}
}

/*
PY3:
a = input().strip()
p = []
for i in range(len(a)):
    a = a[-1] + a[:-1]
    p.append(int(a))
print(max(p))    

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int temp = a;
    int i = 0;
    while(a / 10 != 0)
    {
        a /= 10;
        i++;
    }
    a = temp;
    int s = temp;
    do
    {
        if(temp > s)
        s = temp;
        temp = temp / 10 + ((temp % 10) * pow(10, i));
       
    }
    while(temp != a);
    printf("%d", s);
    return;
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    string maxx = "0";
    for(int i = 0; i < s.size(); i++)
    {
        maxx = max(maxx,s);
        char x = s[s.size() - 1];
        s.insert(s.begin(), x);
        s.pop_back();
    }
    cout<<maxx;
}
*/
