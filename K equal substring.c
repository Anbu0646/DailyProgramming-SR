/*
The program must accept a string S and an integer K as the input. The program must print yes if the string can be rearranged and divided into K equal substring values. Else the program must print no as the output. 

Note: S contains lowercase alphabets. 

Boundary Condition(s): 

1 <= Length of S <= 1000 
1 <= K <= 50 

Input Format:  The first line contains S and K separated by a space.

Output Format: The first line contains yes or no. 

Example Input/Output 1: 

Input:  rtraddttrada 3 

Output: yes 

Explanation: 

The string can be rearranged as tradtradtrad and divided into three equal substring values. Hence yes is printed. 

Example Input/Output 2: 

Input:  aazzez 2 

Output: no

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[1008];
    int x;
    scanf("%s %d" , s , &x);
    int f[123] = {0};
  
    for(int i=0 , l=strlen(s) ; (i < l) ; (i++))
    {
        f[s[i]]++;
    }
  
    for(int i=0 , l=strlen(s) ; (i < l) ; (i++))
    {
        if(f[s[i]]%x != 0)
        {
            printf("no");
            exit(0);
        }
    }
  
    printf("yes");
    return 0;
}
