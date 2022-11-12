/*

The program must accept the value of a string S as the input. The program must reverse all the words in S except the first and the last word of the string. Then the program must print the modified string value as the output. 

Boundary Condition(s): 5 <= Length of S <= 999 

Input Format:  The first line contains the value of S. 
Output Format: The first line contains the modified string value. 


Example Input/Output 1: 

Input:  Hi how are you 
Output: Hi woh era you 

Example Input/Output 2: 

Input:  I am fine 
Output: I ma fine

SOLUTION:

*/
// => @VikV
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[1000][1000];
    int n=0;
    while(scanf("%s ", ch[n++])>0);
    for(int i=0; i<n; i++)
    {
        int len=strlen(ch[i]);
        for(int j=0; ch[i][j]!='\0'; j++)
        {
            if(i==0 || i==n-2)
                printf("%c", ch[i][j]);
            else
                printf("%c", ch[i][len-j-1]);
        }
    printf(" ");
    }
}
