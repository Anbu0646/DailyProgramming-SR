/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the value of N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 3 

Output: 

1 * 2 * 3 
* 1 * 2 *  
* * 1 * *   

Example Input/Output 2: 

Input: 6

Output: 

1 * 2 * 3 * 4 * 5 * 6   
* 1 * 2 * 3 * 4 * 5 *
* * 1 * 2 * 3 * 4 * * 
* * * 1 * 2 * 3 * * *  
* * * * 1 * 2 * * * *  
* * * * * 1 * * * * * 

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int n = 1, p = 0, f = (2 * N) - 2;
    
    for(int i=0; i<N; i++)
    {
        n = 1;
        for(int j=0; j<(2 * N) - 1; j++)
        {
            if(p <= j && j <= f)
            {
                if( (i % 2 != 0 && j % 2 != 0) || (i % 2 == 0 && j % 2 == 0) )
                {
                    printf("%d", n++);
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf("*");
            }
        }
        
        p += 1;
        f -= 1;
        printf("\n");
    }
}
