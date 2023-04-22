/*
The program must accept a string S and an integer N as the input. 
The program must print the first N characters of S if it contains more consonants than the number of consonants in the last N characters of S as the output. 
Else the program must print the last N characters of S as the output. 
If both the first N and last N characters contain the same number of consonants then the program must print the entire string without any modifications as the output. 

Boundary Condition(s): 2 <= Length of string <= 100 
                       1 <= N <= Length of string 
                       
Input Format:  The first line contains S and N separated by a space.
Output Format: The first line contains the string as per the given condition. 

Example Input/Output 1: 

Input:  tamarind 4 
Output: rind

Explanation: There are 2 consonants in the first 4 characters. There are 3 consonants in the last 4 characters. Hence the last 4 characters are printed. 

Example Input/Output 2: 

Input:  basic 2 
Output: basic

SOLUTION:
*/


#include<stdio.h>
#include<stdlib.h>

int checkconsonants(char s)
{
    s = tolower(s);
    if(!(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'))
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    char S[101];
    int N, count_1 = 0, count_2 = 0;
    
    scanf("%s %d", &S, &N);
    
    int len = strlen(S);
    
    for(int i=0; i<N; i++)
    {
        if(checkconsonants(S[i]))
        {
            count_1 += 1;
        }
    }
    
    for(int i=len-N; i<len; i++)
    {
        if(checkconsonants(S[i]))
        {
            count_2 += 1;
        }
    }
    
    if(count_1 > count_2)
    {
        for(int i=0; i<N; printf("%c", S[i++]));
    }
    else if(count_2 > count_1)
    {
        for(int i=len - N; i<len; printf("%c", S[i++]));
    }
    else
    {
        printf("%s", S);
    }
    
    return 0;
}
