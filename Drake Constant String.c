/*
Drake has a string S consisting of lower case alphabets. 
He wants to write a program which will traverse each alphabet in the string S and print the number of consonants from that specific position till the end of the string S.

Boundary Condition(s): 1 <= Length of S <= 10^5 

Input Format:  The first line contains S. 
Output Format: The first line contains N integer values (separated by a space) representing the consonants count. 

Example Input/Output 1: 

Input:  telegraph 
Output: 6 5 5 4 4 3 2 2 1 

Explanation: from t to h - 6 consonants. 
             from the first e to h - 5 consonants. 
             from l to h - 5 consonants.
             from the second e to h - 4 consonants. 
             from g to h - 4 consonants. 
             from r to h - 3 consonants.
             from a to h - 2 consonants. 
             from p to h - 2 consonants. 
             from h to h - 1 consonant.
             
SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char S[100001];
    scanf("%s", S);
    int c=0;
    
    for(int i=0; S[i]; i++)
    {
        S[i]=tolower(S[i]);
        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
            c+=1;
    }
    
    for(int i=0;S[i];i++)
    {
        printf("%d ", c);
        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
            c--;
    }
}
