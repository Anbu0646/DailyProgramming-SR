/*
The program must accept a string S as the input. The program must print yes if the first half of the string is equal to the second half of the string. 
Else the program must print no as the output. 

Note: If the length of the string is odd ignore the character in the middle. 

Boundary Condition(s): 1 <= Length of the string <= 1000 

Input Format:  The first line contains the string S. 
Output Format: The first line contains either yes or no. 

Example Input/Output 1: 

Input:  dumdum 
Output: yes 

Explanation: Both the first and second half of the string is same so yes is printed. 

Example Input/Output 2: 

Input:  YelYe 
Output: yes 

Example Input/Output 3: 

Input:  tellet 
Output: no


SOLUTION:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int len=strlen(s);
    if(len%2==1)
    {
        for(int i=0, j=len/2+1; i<len/2, j<len; i++, j++)
        {
            if(s[i]!=s[j])
            {
                printf("no");
                return 0;
            }
        }
        printf("yes");
    }
    else
    {
        for(int i=0, j=len/2;i <len/2, j<len; i++, j++)
        {
            if(s[i]!=s[j])
            {
                printf("no");
                return 0;
            }
        }
        printf("yes");
    }
}
