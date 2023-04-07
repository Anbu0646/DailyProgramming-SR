/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 0 <= N <= 10^8 

Input Format:  The first line contains N. 
Output Format: The first N lines contain integers as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  74381

Output: 7 
        44444444 
        333 
        8888 
        1111111 
        
Example Input/Output 2:

Input:  5019 
Output: 555555555 
        0 
        - 
        99999
*/

#include <stdio.h> 
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str); 
    
    for(int i=0; i<len; i++)
    {  
        int print = str[len-i-1]-'0'; 
        for(int j=0; j<print; j++)
        {
            printf("%c", str[i]);
        } 
        if(print==0) 
          printf("-"); 
    printf("\n");
    }
}
