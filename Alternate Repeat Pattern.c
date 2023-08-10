/*
The program must accept a positive even integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the positive even integer N. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  6

Output: 

1666666 
2255555 
3334444 

Example Input/Output 2: 

Input:  4 

Output: 

14444
22333

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int K = 1, L = N;
    
    for(int i=0; i<N/2; i++, printf("\n"))
    {
        for(int j=0; j<K; j++)
        {
            printf("%d", K);
        }
        for(int j=0; j<L; j++)
        {
            printf("%d", L);
        }
        
        K += 1;
        L -= 1;
    }
}

/*
PY3:

*/
