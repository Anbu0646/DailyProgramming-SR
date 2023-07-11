/*
The program must accept three string values S1, S2 and S3 containing only alphabets. 
For any given position, if the count of vowels is more than the count of consonants then the program must print V. 
Else if the count of vowels is less than the count of consonants then the program must print C. Else the program must print E as the output. 

Boundary Condition(s): 1 <= Length of S1, S2, S3 <= 100 

Input Format: 

The first line contains S1. 
The second line contains S2. 
The third line contains S3. 

Output Format: 

The first line contains the string value. 

Example Input/Output 1: 

Input: 

elephant 
orange 
mango 

Output: VCVCCVCC 

Explanation: 

1st postion - 2 vowels and 1 consonant. So V is printed. 
2nd postion - 1 vowel and 2 consonants. So C is printed. 
3rd postion - 2 vowels and 1 consonant. So V is printed. 
4th postion - 3 consonants. So C is printed. 
5th postion - 1 vowel and 2 consonants. So C is printed. 
6th postion - 2 vowels. So V is printed. 
7th postion - 1 consonant. So C is printed. 
8th postion - 1 consonant. So C is printed. 

Example Input/Output 2: 

Input: 

apple 
create 
profess 

Output: CCVCVEC

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
    string s1, s2, s3;
    
    cin >> s1 >> s2 >> s3;
    
    for(int i=0; i < s1.size() || i < s2.size() || i < s3.size(); i++)
    {
        int vc = 0, cc = 0;
      
        if(i < s1.size())
        {
           if(isVowel(s1[i]))
           {
              vc++;
           }  
           else
           {
              cc++;
           }
        }
      
        if(i < s2.size())
        {
           if(isVowel(s2[i]))
           {
              vc++;
           }
           else
           {
              cc++;
            }
        }
      
        if(i < s3.size())
        {
           if(isVowel(s3[i]))
           {
              vc++;
           }
           else
           {
              cc++;
           }
        }
      
        if(vc < cc)
        {
            cout<<"C";
        }
        else if(vc > cc)
        {
            cout<<"V";
        }
        else
        {
            cout<<"E";
        }
    }
return 0;
}

/*
PY3:

s=input().strip()
c=input().strip()
st=input().strip()
for i in range(max(len(s),len(c),len(st))):
    x,y=0,0
    if i<len(s) and s[i] in 'aeiouAEIOU':
        x+=1
    elif i<len(s):
        y+=1
    if i<len(c) and c[i] in 'aeiouAEIOU':
        x+=1
    elif i<len(c):
        y+=1
    if i<len(st) and st[i] in 'aeiouAEIOU':
        x+=1
    elif i<len(st):
        y+=1
    print('V' if x>y else 'C' if x<y else 'E',end='')


arr = [input().strip() for _ in range(3)]

l = 0
for i in arr:
    if len(i) > l:
        l = len(i)

vow = 'aeiouAEIOU'
for i in range(l):
    v = 0
    c = 0
    
    if i < len(arr[0]): 
        if arr[0][i] in vow:
            v += 1
        else:
            c += 1
    
    if i < len(arr[1]):
        if arr[1][i] in vow:
            v +=1
        else:
            c += 1
    
    if i< len(arr[2]):
        if arr[2][i] in vow:
            v += 1
        else:
            c +=1
    
    if v>c:
        print("V",end="")
    elif v == c:
        print("E",end="")
    else:
        print("C",end="")
*/
