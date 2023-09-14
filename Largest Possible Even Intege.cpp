/*
The program must accept an integer N as the input.
The program must print the largest possible integer containing all the even digits of N as the output.
If it is not possible to form such integer then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N <= 10^8

Input Format:  The first line contains N. 

Output Format: The first line contains the largest possible integer containing all the even digits of N or -1. 

Example Input/Output 1: 

Input:  748009 

Output: 8400 

Explanation:

The even digits in 748009 are 4 8 0 and 0. 
So the largest possible integer from those even digits is 8400. 
Hence the output is 8400. 

Example Input/Output 2: 

Input:  12846

Output: 8642 

Example Input/Output 3: 

Input:  5719 

Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int  N;
    scanf("%d", &N);
    int Even_Digits[10] = {0};
    
    while(N != 0)
    {
        int unit = N % 10;
        if(unit % 2 == 0)
        {
            Even_Digits[unit]++;
        }
        
        N /= 10;
    }
    
    int Largest = -1;
    
    for(int i=9; i>=0; i--)
    {
        if(Even_Digits[i] > 0)
        {
            if(Largest == -1)
            {
                Largest = i;
                Even_Digits[i]--;
            }
        
            for(int j=0; j<Even_Digits[i]; j++)
            {
                Largest = (Largest * 10) + i;
            }
        
        }
    }
    
    printf("%d", Largest);
}

/*



*/
