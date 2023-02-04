/*
The program must accept an integer N of exactly nine digits as the input. 
The program must print the given integer in the format of (ddd) ddd ddd as the output. 

Input Format:  The first line contains N. 
Output Format: The first line contains the formatted value of N. 

Example Input/Output 1: 

Input:  142547878 
Output: (142) 547 878 

Explanation: The given integer 142547878 is formatted as (142) 547 878 

Example Input/Output 2: 

Input:  154735914 
Output: (154) 735 914

SOLUTION:
*/

#include<stdio.h>
int main()
{
    char ar[100];
    scanf("%s", ar);
    printf("(%d%d%d) %d%d%d %d%d%d", ar[0] - '0', ar[1] - '0', ar[2] - '0', ar[3] - '0', ar[4] - '0', ar[5] - '0', ar[6] - '0', ar[7] - '0', ar[8] - '0');
}
