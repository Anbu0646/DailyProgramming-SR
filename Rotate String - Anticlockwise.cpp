/*
The program accepts a string S and an integer N as the input. 
The program must rotate the string S for N times in anti-clockwise direction and print the modified string as the output. 

Boundary Condition(s): 

1 <= Length of S <= 100 
1 <= N <= 1000 

Input Format:  

The first line contains S. 
The second line contains N. 

Output Format: 

The first line contains the modified string. 

Example Input/Output 1: 

Input: 

mangoes 
3 

Output: goesman 

Explanation: 

After the first anti-clockwise rotation, the string becomes "angoesm". 
After the second anti-clockwise rotation, the string becomes "ngoesma". 
After the third anti-clockwise rotation, the string becomes "goesman".
Hence the output is goesman.

Example Input/Output 2: 

Input:  

hi 
10 

Output: hi

SOLUTION :
*/



/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char String[101];
    int N;
    scanf("%s\n %d", String, &N);
    
    int len = strlen(String), Limit = N % len;
    
    for(int i=Limit; i<len; printf("%c", String[i++]));
    for(int i=0; i<Limit; printf("%c", String[i++]));
    
}

*/
