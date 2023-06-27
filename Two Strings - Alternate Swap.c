/*
The program must accept two string values S1 and S2 as the input. 
The program must swap the given pair of characters diagonally in S1 and S2.
Then the program must print the modified string values of S1 and S2 as the output. 

Boundary Condition(s): 

1 <= Length of S1 <= 100 
1 <= Length of s2 <= 100 

Input Format: 

The first line contains the string S1. 
The second line contains the string S2. 

Output Format: 

The first line contains the modified string S1. 
The second line contains the modified string S2. 

Example Input/Output 1: 

Input:

abcdef 
mnopqr

Output: 

nmporq 
badcfe 

Example Input/Output 2: 

Input: 

abcdefg 
mnopqrs 

Output: 

nmporqg 
badcfes 

Example Input/Output 3: 

Input: 

abcdefghijk 
mnopqrs 

Output: 

nmporqgsijk 
badcfeh 

Example Input/Output 4: 

Input: 

abcdefg 
mnopqrstuvw 

Output: 

nmporqt 
badcfesguvw 

Example Input/Output 5: 

Input: 

a 
z 

Output: 

a 
z

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[1000], b[1000];
    scanf("%s %s", a, b);
    int x = strlen(a), y=strlen(b);
    int c = 0, d = 0;
    
    while(c<x && d<y)
    {
        if(d != y - 1)
        {
          char t = a[c];
          a[c] = b[d+1];
          b[d+1] = t;
        }
        if(c != x - 1)
        {
          char t = b[d];
          b[d] = a[c + 1];
          a[c + 1] = t;
        }
        
        c += 2;
        d += 2;
    }
    printf("%s\n%s", a, b);
}

/*
a = [i for i in input().strip()]
b = [i for i in input().strip()]

for i in range(0, len(a), 2): 
    if i + 1<len(b) and i + 1 < len(a):
        a[i], a[i + 1], b[i], b[i + 1] = b[i + 1], b[i], a[i + 1], a[i]
    elif i < len(b) and i + 1 < len(a): 
        a[i + 1], b[i] = b[i], a[i + 1]
    elif i < len(a) and i + 1 < len(b): 
        a[i], b[i + 1] = b[i + 1], a[i]
print(*a, sep='') 
print(*b, sep='')
*/
