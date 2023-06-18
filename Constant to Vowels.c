/*
The program must accept a string S as the input. 
The program must replace every consonant by the next nearest vowel. If there is no vowel after a consonant then it must be removed from the string. If there is no vowel in S, then print -1 as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the values of S. 

Output Format: The first line contains the string as per the condition or -1. 

Example Input/Output 1:

Input:   request 

Output:  eeuue 

Explanation: 

In the string request, the first vowel after r is e. So the string becomes eequest. 
In the string eequest, the first vowel after q is u.  So the string becomes eeuuest. 
There is no vowel after s and t so they are removed. 
The string becomes eeuue. Hence the output is eeuue 

Example Input/Output 2:

Input:   cry 

Output:  -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

isvowel(char a)
{
    if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u')
       return 1;
    return 0;
}

isconso(char a)
{
    if(a!='a' && a!='e' && a!='i' && a!='o' && a!='u')
       return 1;
    return 0;
}

int main()
{
    char a[100];
    scanf("%s", &a);
    int l = strlen(a), c1 = 0, e = 0;
    for(int i=0; i<l; i++)
    {
        if(isconso(a[i]))
        {
            int flag = 0;
            for(int j = i + 1; j<l; j++)
            {
                if(isvowel(a[j]))
                {
                    a[i] = a[j];
                    c1++;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                e++;
            }
        }
    }
  
    if(c1 == 0)
       printf("-1");
    else 
       for(int i=0; i<l - e; i++)
               printf("%c", a[i]);
}
