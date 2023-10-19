'''
The program must accept a string S as the input. 
The program must rotate all the vowels in the string S in the clockwise direction at their positions 1 time. 
Then the program must print the modified string S as the output. 

Note: At least one vowel is always present in the string S. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified string S. 

Example Input/Output 1: Input: national 

Output: natainol 

Explanation: 

After rotating the vowels in the clockwise direction by 1 time, the string becomes natainol. 
Hence the output is natainol.

Example Input/Output 2: 

Input:  AEIou 

Output: uAEIo

SOLUTION:
'''
s = input().strip()
v = [i for i in s if i in "aeiouAEIOU"]
k = v[len(v) - 1:] + v[:len(v) - 1]
c = 0

for i in s:
    if i not in "aeiouAEIOU":
        print(i, end = "")
    else:
        print(k[c], end = "")
        c += 1
'''        
String = input().strip()
Vow = "aAeEiIoOuU"
String0 = ""

for i in String:
    if i in Vow:
        String0 += i

Len = len(String0) - 1
Modi = String[Len:] + String[:Len]
Count = 0

for j in String:
    if j in Vow:
        print(Modi[Count], end="")
        Count += 1
    else:
        print(j, end="")

C:
#include<stdio.h>
#include<stdlib.h>

int isvow(char c)
{
    c = tolower(c);
    if(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c ==' u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char s[10001];
    scanf("%s", s);
    int l = strlen(s);
    int  a[1001], c = 0;
    
    for(int i=0; i<l; i++)
    {
        if(isvow(s[i]))
        {
            a[c++] = i;
        }
    }
    
    if(c > 0)
    {
        char b=s[a[c-1]];
        for(int i=0; i<c; i++)
        {
            char t = s[a[i]];
            s[a[i]] = b;
            b = t;        
        }
    }
    printf("%s", s);
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string a;
    char c[100001];
    int k = 0;
    cin>>a;
    for(int i = 0; a[i] != '\0'; i++)
    {
        char b = tolower(a[i]);
        if(b == 'a' || b == 'e'|| b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U')
        {
            c[k++] = a[i];
        }
    }
    
    int j = 0;
    
    for(j = 0; a[j] != '\0'; j++)
    {
        if(c[0] == a[j])
        {
            cout<<c[k - 1];
            break;
        }
        cout<<a[j];
    }
    
    int f = 1, s = 0;
    
    for(int i = j + 1; a[i] != '\0'; i++)
    {
        if(c[f] == a[i])
        {
            cout<<c[s];
            s++;
            f++;
        }
        else
        {
            cout<<a[i];
        }
    }
}
'''
