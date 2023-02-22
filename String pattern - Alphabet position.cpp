/*
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Note: All the alphabets in S are only in lower case. 

Boundary Condition(s):  1 <= Length of S <= 1000 

Input Format:  The first line contains the string S. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1 

Input:  abcdacg 
Output: a 
        bb 
        ccc 
        dddd
        a 
        ccc 
        ggggggg

Example Input/Output 2: 

Input:  skillrack 
Output: sssssssssssssssssss
        kkkkkkkkkkk 
        iiiiiiiii
        llllllllllll
        llllllllllll
        rrrrrrrrrrrrrrrrrr 
        a 
        ccc
        kkkkkkkkkkk

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ar[10000];
    scanf("%s", ar);
    for(int i = 0; i < strlen(ar); i++, printf("\n"))
    {
        int limit = ar[i] - 'a' + 1;
        for(int j = 1; j <= limit; j++)
        {
            printf("%c", ar[i]);
        }
    }
}
