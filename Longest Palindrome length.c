/*
The program must accept a string S as the input. 
The program must print the length of the longest palindrome that can be formed with the consonants in the string S as the output. 

Note: 

At least one consonant must be present in the string S. 
The string S contains only lower case alphabets. 

Boundary Condition(s): 1 <= Length of S <= 10^4 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the length of the longest palindrome in the string S. 

Example Input/Output 1: 

Input:  abcdeedb 

Output: 5 

Explanation: The longest palindrome can be formed with bbddc (The order can be any but the length is 5). 

Example Input/Output 2: 

Input:  racecar 

Output: 4

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int isVowel(char c)
{
    if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char s[10001], s1[10001];
    scanf("%s", s);
    int l = strlen(s), index = 0;
    
    for(int i=0; i<l; i++)
    {
        if(isVowel(s[i]))
        {
            s1[index++] = s[i];
        }
    }
    
    int l1 = strlen(s1), count = 0;
    
    for(int i=0; i<l1; i++)
    {
        if(isalpha(s1[i]))
        {
            for(int j=0; j<l1; j++)
            {
                if(j != i && s1[i] == s1[j])
                {
                    s1[i] = '1';
                    s1[j] ='1';
                    count += 2;
                    break;
                }
            }
        }
    }
    
    for(int i=0; i<l1; i++)
    {
        if(isalpha(s1[i]))
        {
            count += 1;
            break;
        }
    }
    
    printf("%d", count);
}

/*

PY3:

s = input()
con = ""

for i in s:
    if i not in "aeiouAEIOU":
        con += i
        
ss=set()

for j in con:
    if j not in ss:
        ss.add(j)
    else:
        ss.remove(j)
        
if len(ss) != 0:
    print(len(con) - len(ss) + 1)
else:
    print(len(con))


def leng(t):
    x = [n for n in t.lower() if n not in "aeiou"]
    y= {n:x.count(n) for n in set(x)}
    z = sum(n%2!=0 for n in y.values())
    if z<=1: return len(x)
    else: return len(x)-(z-1)

print(leng(input()))
*/
