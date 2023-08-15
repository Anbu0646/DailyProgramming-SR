/*
A string S representing the email of a user is passed as the input. 
The program must secure the email by masking vowels and digits with asterisk * and print the resulting masked string value M as the output.

Boundary Condition(s): 5 <= Length of S <= 100 

Input Format:  The first line contains S. 

Output Format: The first line contains M. 

Example Input/Output 1: 

Input:  your5name_007@gmail.com 

Output: y**r*n*m*_***@gm**l.c*m 

Example Input/Output 2: 

Input:  AS34DFq65werx7cm0v@red@rediffmail.com 

Output: *S**DFq**w*rx*cm*v@r*d@r*d*ffm**l.c*m

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int isvowel(char c)
{
    c = tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char Email[101];
    scanf("%s", Email);
    
    for(int i=0; i<strlen(Email); i++)
    {
        if(isvowel(Email[i]) || isdigit(Email[i]))
        {
            Email[i] = '*';
        }
    }
    
    for(int i=0; i<strlen(Email); i++)
    {
        printf("%c", Email[i]);
    }
}

/*
CPP:

PY3:
*/
