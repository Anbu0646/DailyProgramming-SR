/*
The program must accept N integers as the input. 
The program prints yes if the integers are sorted in ascending order based on the number of digits in it.
Else the program prints no as the output. 

Boundary Conditions: 

1 <= N <= 100
1 <= Each integer value <= 10^8 

Input Format: 

The first line contains the value of N. 
The second line contains the N integers separated by space(s). 

Output Format: 

The first line contains either yes or no. 

Example Input/Output 1: 

Input: 

5 
9  12  56  20  850 

Output: yes 

Explanation: 

The number of digits in 9 is 1. 
The number of digits in 12 is 2. 
The number of digits in 56 is 2. 
The number of digits in 20 is 2. 
The number of digits in 850 is 3. 
Hence the integers are sorted in ascending order based on the number of digits. 
So yes is printed as the output. 

Example Input/Output 2: 

Input: 

6 
20  50  18  110  99  147 

Output: no

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a, t = 0;
  
  scanf("%d", &a);
  
  char ch[100];
  
  for(int i=0; i<a; i++)
  {
      scanf("%s", ch);
      int l = strlen(ch);
      if(l >= t)
      {
          t = l;
      }
      else
      {
          printf("no");
          return 0;
      }
  }
  printf("yes");
}
/*
PY3:

ac = int(input())
ti = [len(i) for i in list(input().split())]
print('yes' if ti == sorted(ti) else 'no')



n=int(input())
l=list(input().split())
for i in range(n-1):
    if(len(l[i])>len(l[i+1])):
        print('no')
        exit()
print('yes')

CPP:

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    long int n, x;
    cin>>n;
    
    vector<int>vp;
    
    for(int i=0; i<n; i++)
    {
        cin>>x;
        int c = 0;
        
        while(x > 0)
        {
            c++;
            x /= 10;
        }
        
        vp.push_back(c);
    }
    
    vector<int>v = vp;
    sort(v.begin(), v.end());
    
    if(v == vp)
       cout<<"yes";
    else 
       cout<<"no";
}

*/
