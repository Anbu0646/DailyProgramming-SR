'''
The program must accept a character matrix of size RxC as the input. 
The program must print the first occurring vowels from the top in each column of the matrix as the output.

Note: At least one vowel is always occurred in each column of the matrix. 

Boundary Condition(s): 2 <= R, C <= 100 

Input Format: 

The first line contains R and C separated by a space. 
The next R lines, each contains C characters separated by a space. 

Output Format: The first line contains the first occurring vowels from the top in each column of the matrix. 

Example Input/Output 1: 

Input:

4 4 
H N L A 
y S I O 
h a O # 
e F @ a 

Output: eaIA 

Explanation: 

The first occurring vowels from the top in each column of the matrix are highlighted below. 

H N L A 
y S I O 
h a O # 
e F @ a 

So eaIA is printed as the output.

Example Input/Output 2: 

Input: 

3 7 
o f w
$ w E 
d t v
M i O 
i 1 2
E e @ 
R O u 

Output: oEeiOEu

SOLUTION:
'''

r, c = map(int,input().split())
m = [list(map(str,input().split())) for i in range(r)]
v = "aeiou"
s = []

for i in range(c):
    for j in range(r):
        if m[j][i].lower() in v:
            s.append(m[j][i])
            break
            
s = "".join(s)
print(s)

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[101][101];
    int r, c;
    scanf("%d %d", &r, &c);
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%s", &a[i][j]);
        }
    }
    
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(voe(a[j][i]) == 1)
            {
                printf("%c", a[j][i]);
                break;
            }
        }
    }
}

int voe(char *c)
{
    c = tolower(c);
    if( c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u')
    {
        return 1;
    }
    return 0;
}



CPP:
#include <bits/stdc++.h>
 
using namespace std;

int vowel(char f)
{
    char t = tolower(f);
    return t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u';
}

int main(int argc, char** argv)
{
  int m, n;
  cin>>m>>n;
  vector<vector<char>>vp;  
  
  for(int i = 0; i < m; i++)
  {
    vector<char>temp;
    for(int j = 0; j < n; j++)
    {
        char t;
        cin>>t;
        temp.push_back(t);
    }
    vp.push_back(temp);
    temp.clear();
  }
  
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
        if(vowel(vp[j][i]))
        {
            cout<<vp[j][i];
            break;
        }
    }
  }
}
'''
