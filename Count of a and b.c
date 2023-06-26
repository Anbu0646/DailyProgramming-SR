/*
The program must accept a string which will contain only a and b and generate the output based on the continuous count of a or b as described in Example Input/Output section. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string. 
Output Format: The first line contains the count of a and b as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  aababbaaabbbb 

Output: 2a 1b 1a 2b 3a 4b 

Example Input/Output 2: 

Input:  bbb 

Output: 3b

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int c = 0;
    char s[108];
    scanf("%s", s);
    char ch = s[0];
  
    for(int i=0, l=strlen(s) ; (i < l) ; i++)
    {
        if(s[i] == ch)
        {
            c++;
        }
        else
        {
            printf("%d%c", c, s[i-1]);
            c = 1;
            ch = s[i];
        }
    }
  
    printf("%d%c", c, ch);
}

/*
x = input().strip()
p = x[0]
t = 0
for i in x:
    if p==i:
        t += 1
    else:
        print(str(t)+p,end='')
        t=1
        p=i
print(str(t)+p)
*/
