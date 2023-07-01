/*
The program must accept a string S as the input. 
The program must split the string S into substring values by removing all the vowels in the string S. 
Then the program must print all the substring values in the order of occurrence separated by a hyphen. 

Note: At least one consonant is always present in the string S. 

Boundary Condition(s):  1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 

Output Format: The first line contains all the substring values in the order of occurrence separated by a hyphen as per the given condition. 

Example Input/Output 1: 

Input:  Forests 

Output: F-r-sts 

Explanation: 

There are three substring values after removing the vowels in the string "Forests". 
Hence the output is F-r-sts. 

Example Input/Output 2: 

Input:  ACTIVITIES 

Output: CT-V-T-S

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int isvowel(char d)
{
    d = tolower(d);
    return d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u';
}

int main()
{
    char s[1001];
    scanf("%s", s);
  
    for(int i=0; s[i]; )
    {
        if(isvowel(s[i]))
        {
            int p = i;
            while(isvowel(s[i]) && i<strlen(s))
            {
               i++;
            } 
            if(!(p == 0 || i == strlen(s))) 
                 printf("-");
        }
        else 
        {
            printf("%c", s[i]);
            i++;
        }
    }
    return 0;
}
/*
n = input().strip()
a = 'aeiouAEIOU'

for j in range(len(n)):
    if n[j] in a and j == 0:
        continue
    if n[j] in a and j == len(n) - 1:
        continue
    elif n[j] in a and n[j - 1] not in a:
        print("-", end = "")
    elif n[j] in a and n[j - 1] in a:
        continue
    else:
        print(n[j], end = "")


ALITER:

import re
s = input()
print('-'.join(re.split('[aeiouAEIOU]+', s)).strip('-'))

*/
