/*
The program must accept all the possible pairs of positive integers except one pair, where the sum of two integers in each pair is equal to N as the input. 
The program must print the missing pair of integers which gives the sum N as the output. 

Note: The integers in each pair are always sorted in ascending order. 

Boundary Condition(s): 1 <= Each integer value <= 1000 

Input Format: The first line contains a list of pairs separated by a space, where each pair contains two integers separated by a comma and enclosed within parentheses. 

Output Format: The first line contains two integers separated by comma and enclosed within parentheses. 

Example Input/Output 1: 

Input:  (1,4) 

Output: (2,3)

Explanation: 

The two possible pairs that give the sum 5 are (1,4) and (2,3). 
Here, the missing pair is (2,3). 
So (2,3) is printed as the output. 

Example Input/Output 2: 

Input:  (10,10) (4,16) (1,19) (2,18) (7,13) (6,14) (9,11) (3,17) (5,15) 

Output: (8,12) 

Example Input/Output 3: 

Input:  (3,3) (2,4)

Output: (1,5)

SOLUTION:
*/

import java.util.*;
public class Hello 
{
    public static void main(String[] args) 
    {
		    Scanner sc = new Scanner(System.in);
		    String t[] = new String[2];
		    int total = 0, i = 0;
		    Set<Integer> set = new HashSet<>();
		    
        while(sc.hasNext()) 
        {
		        t = sc.next().replaceAll("[()]", "").split(",");
		        if((i++) == 0) total += Integer.parseInt(t[0]) + Integer.parseInt(t[1]);
		        set.add(Integer.parseInt(t[0]));
		    }
      
		    for(i = 1; i <= total / 2; i++) 
        {
		        if(!set.contains(i)) 
            {
		            System.out.print("(" + i + "," + (total - i) + ") ");
		        }
		    }
	  }
}

/*
PY3:
l = input().split()
p = []
k = []
for x in l:
    t = tuple(map(int, x[1:-1].split(',')))
    p.append(t)
    k.append(t[0])
s = sum(p[0])
for i in range(1, s//2 + 1):
    if i not in k:
        t = '(' + str(i) + ','+str(s - i) + ')'
        print(t)
        exit(0)

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

    map<int,int>mp;

    char ch;
    int a, b, mi = INT_MAX, mx = INT_MIN, sum = 0;
    
    while(cin>>ch>>a>>ch>>b>>ch)
    {
       mp[a]++;
       mp[b]++;
       sum = a + b;
    }
    
    for(int i = 1; ;i++)
    {
        if(mp[i] == 0)
        {
            cout<<"("<<i<<", "<<sum - i<<")";
            break;
        }
    }
}

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, ar[1001] = {0}, s = 0;
    while(scanf("(%d,%d) ", &x, &y) > 0)
    {
        s = x + y;
        ar[x]++;
    }
    for(int i = 1; i <= 1001; i++)
    {
        if(ar[i] == 0)
        {
           printf("(%d, %d)", i, abs(i - s));
           return 0;
        }
    }
}
*/
