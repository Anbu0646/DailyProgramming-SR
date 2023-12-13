/*
The program must accept a string S containing only alphabets as the input. 
The program must print the alphabets of S based on the count of their occurrence. 
If more than one alphabets have the same occurrence count, the program must print the alphabets in the alphabetical order as the output.

Note: The string S is case sensitive. 

Boundary Condition(s): 1 <= Length of S <= 1000

Input Format: The first line contains S. 

Output Format: The first line contains the alphabets of S based on the count of their occurrence. 

Example Input/Output 1: 

Input:  AAAbbbbccccccdddEEE 

Output: cbAEd 

Explanation: 

The count of occurrence of c is 6, so c is printed at first. 
The count of occurrence of b is 4, so b is printed at second.
The alphabets A, d and E have the same count of occurrence 3, so they are printed in alphabetical order.
Hence the output is cbAEd. 

Example Input/Output 2: 

Input:  SkillRack 

Output: klRSaci

SOLUTION:
*/

import java.util.*;
import java.io.*;
public class Hello
{

  public static void main(String[] args)
  {
	    Scanner in = new Scanner(System.in);
	    String str = in.next();
	    System.out.println(order(str));
	}
	private static String order(String str)
	{
	    Map<Character, Integer> h = new HashMap<>();
	    for(char a: str.toCharArray())
	    {
	        h.put(a, h.getOrDefault(a, 0) + 1);
	    }
	    PriorityQueue<Character> p = new PriorityQueue<>((a, b)->
	    {
	        int f1 = h.get(a);
	        int f2 = h.get(b);
	        if(f1 != f2) return Integer.compare(f2, f1);
	        else return Character.compare(a, b);
	    });
	    p.addAll(h.keySet());
	    StringBuilder s = new StringBuilder();
	    while(!p.isEmpty())
	    {
	        s.append(p.poll());
	    }
	     String st = s.toString();
	     return st;
	}
}

/*
C:


CPP:
#include <bits/stdc++.h>
 
using namespace std;

map<int, int> mp;

bool cmp(char a,char b)
{
    
   if(mp[a] == mp[b])
      return a < b;
    else
     return mp[a] > mp[b];
    
}

int main(int argc, char** argv)
{

    string s, tmp;
    cin>>s;
    
    for(auto & it:s)
    {
    
        if(mp[it])
            mp[it]++;
        else
        {
            tmp += it;
            mp[it] = 1;
        }
    }
    
    sort(tmp.begin(), tmp.end(), cmp);
    
    cout<<tmp;
}

PY3:
s = input().strip()
d = {}
for i in s:
    if i not in d:
        d[i] = 1
    else:
        d[i] += 1
d1 = sorted(d.keys(), key = lambda x:(-d[x], x))
print(''.join(d1))


s = list(input())
s.sort()
l = []
for i in s:
    if i not in l:
        l.append(i)
c = []
for i in l:
    c.append(s.count(i))
for i in range(len(l)):
    p = c.index(max(c))
    print(l[p], end = '')
    c.pop(p)
    l.pop(p)
*/
