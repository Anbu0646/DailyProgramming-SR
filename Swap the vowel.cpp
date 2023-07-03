/*
The program must accept two string values S1 and S2 containing only alphabets. 
The number of vowels in S1 will always be equal to the number of vowels in S2. 
The program must replace the vowels in S2 with the vowels in S1 in the same order of occurrence and vice versa.
Finally, the program must print the modified string values S1 and S2 as the output. 

Boundary Condition(s): 1 <= Length of S1, S2 <= 100 

Input Format: 

The first line contains the string S1. 
The second line contains the string S2. 

Output Format: 

The first line contains the modified string S1. 
The second line contains the modified string S2.

Example Input/Output 1: 

Input: 

apple 
mango 

Output: 

applo 
mange 

Explanation: 

The vowels in "apple" are a and e. 
The vowels in "mango" are a and o.
So they are interchanged in the same order of occurrence.
Hence the output is applo mange.

Example Input/Output 2: 

Input: 

pollute 
elephant 

Output: 

pelleta 
oluphent

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main(int argc, char** argv)
{
    string s1, s2;
    cin>>s1>>s2;
    int j = 0;
  
    for(int i=0; i<s1.size(); i++)
    {
        if(isVowel(s1[i]))
        {
            
            while(!isVowel(s2[j]))
            {
                j++;
            }
            
            swap(s1[i], s2[j]);
            j++;
        }
    }
  
    cout<<s1<<endl<<s2;
  
}

/*
PY3:

a = input().strip()
b = input().strip()
x = [i for i in a if i in "aeiouAEIOU"]
y = [i for i in b if i in "aeiouAEIOU"]
for i in a:
    if i in "aeiouAEIOU":
        print(y.pop(0),end="")
    else:
        print(i,end="")
print()
for i in b:
    if i in "aeiouAEIOU":
        print(x.pop(0),end="")
    else:
        print(i,end="")

C:

#include<stdio.h>
#include<stdlib.h>

int fun(char a)
{
    char x = tolower(a);
    if(x == 'a' || x == 'e' || x == 'i'|| x == 'o' || x == 'u')
       return 1;
    else
       return 0;
}

int main()
{
    
    char a[1000], b[1000];
    scanf("%s %s", a, b);
    char av[1000], bv[1000];
    int avv = 0, bvv = 0;
    int x = strlen(a), y = strlen(b);
    
    for(int i=0; i<x; i++)
    {
        if(fun(a[i]))
        {
            av[avv++] = a[i];
        }
    }
    
    for(int i=0;i<y;i++) 
    {
        if(fun(b[i]))
        {
            bv[bvv++] = b[i];
        }
    }
    
    int c = 0, d = 0;
    
    for(int i=0; i<x; i++)
    {
        if(fun(a[i]))
        {
            printf("%c", bv[c++]);
        }
        else
            printf("%c", a[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<y; i++)
    {
        if(fun(b[i]))
        {
            printf("%c", av[d++]);
        }
        else
            printf("%c",b[i]);
    }
    
}





#include<stdio.h>
#include<stdlib.h>

int isVowel(char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

void swap(char *x, char *y) {
    char t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    char s1[101], s2[101];
    scanf("%s\n%s", s1, s2);
    int i = 0, j = 0;
    while(i<strlen(s1)) 
    {
        if(isVowel(s1[i])) 
        {
            if(isVowel(s2[j])) 
            {
                swap(&s1[i], &s2[j]);
                i++;
            }
            j++;
        }
        else 
        {
            i++;
        }
    }
    printf("%s\n%s", s1, s2);
}

*/
