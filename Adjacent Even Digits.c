/*
The program must accept an integer N as the input. The program must print the digits surrounded by even digits on both sides. The first and last digits have only one digit adjacent digit to them. So consider only the single adjacent digit for them. If there is no digit surrounded by even digits, then the program must print -1 as the output. 

Boundary Condition(s): 11 <= N <= 999999999 

Input Format:  The first line contains the value N. 
Output Format: The first line contains either the digits having even adjacent digits or -1. 

Example Input/Output 1: 

Input:  14689025 
Output: 1695 

Explanation: The adjacent digit of 1 is 4 (even number). So 1 is printed. 
             The adjacent digits of 4 are 1 and 6 (only 6 is even). So 4 is not printed. 
             The adjacent digits of 6 are 4 and 8 (both are even numbers). So 6 is printed. 
             The adjacent digits of 8 are 6 and 9 (only 6 is even). So 8 is not printed. 
             The adjacent digits of 9 are 8 and 0 (both are even numbers). So 9 is printed. 
             The adjacent digits of 0 are 9 and 2 (only 2 is even). So 0 is not printed. 
             The adjacent digits of 2 are 0 and 5 (only 0 is even). So 2 is not printed. 
             The adjacent digit of 5 is 2 (even number). So 5 is printed. Hence the output is 1695. 

Example Input/Output 2: 

Input:  1357935 
Output: -1


SOLUTION:
C:
*/
//start of code
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[15];
    int f=0;
    scanf("%s",&s); l=strlen(s);
    for(int i=0;s[i]!='\0';i++){
        if(i==0 && s[i+1]%2==0){
            printf("%c", s[i]);
            f=1;
        }
        else if(s[i-1]%2==0 && l-1==i){
            printf("%c", s[i]);
            f=1;
        }
        else if(s[i-1]%2==0 && s[i+1]%2==0){
            printf("%c", s[i]);
            f=1;
        }
    }
    if(f==0){
        printf("-1");
    }
}//end of code

//ALTER:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char n[20]; 
    scanf("%s", &n); int f=0, l=strlen(n);
    for(int i=0; n[i]!='\0'; i++){
        if((i==0 && n[i + 1]%2==0) || (n[i - 1]%2==0 && l - 1==i) || (n[i - 1]%2==0 && n[i + 1]%2==0))?printf("%c", n[i]); f=1:0;
    }
    (f==0)?printf("-1):0;
}
