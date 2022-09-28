/*
Given a string S as the input with two or more words in it, the program must reverse the order of the words in S. Then the program must reverse each word in the even positions. The resulting words in the modified order must be printed as the output. 

Boundary Condition(s): 10 <= Length of S <= 1000 

Input Format:  The first line contains the string with two or more words separated by space(s). 
Output Format: The first line contains the reversed string with words in the even position reversed. 

Example Input/Output 1: 

Input:  one two three four 
Output: four eerht two eno 

Example Input/Output 2: 

Input:  one two three four five 
Output: five ruof three owt one

Solution:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arrr[1001][1001];
    int leng=0,count=0;
    while(scanf("%s",arrr[leng++])>0);
    for(int ctr=leng-1;ctr>=0;ctr--){
        if((count+1)%2==0){
             printf("%s",arrr[ctr]);
        }else{
            int l=strlen(arrr[ctr]);
            for(int kd=l-1;kd>=0;printf("%c",arrr[ctr][kd--]));
        }
        printf(" "); count++;
    }
}
