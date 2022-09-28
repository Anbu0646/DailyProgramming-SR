/*
Given a string s as the input with two or more words in it, the program must reverse the order of the words in s. Then the program must reverse each word in the even positions. The resulting words in the modified order must be printed as the output. 

Boundary condition(s): 10 <= length of s <= 1000 

Input format:  the first line contains the string with two or more words separated by space(s). 
Output format: the first line contains the reversed string with words in the even position reversed. 

Example input/output 1: 

Input:  one two three four 
Output: four eerht two eno example 

Input/output 2: 

Input:  one two three four five 
Output: five ruof three owt one

Solution:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char array[1001][1001];
    int length=0, count=0;
    while(scanf("%s", array[length++])>0);
    for(int ctr=leng-1; ctr>=0; ctr--){
        if((count+1)%2==0)
             printf("%s", array[ctr]);
        else{
            int Length=strlen(array[ctr]);
            for(int ctr1=Length-1; ctr1>=0; printf("%c", arrr[ctr][ctr1--]));
        }
        printf(" "); count++;
    }
}
