/*
The program must accept an integer N as the input. 
The program must print the number of digits in N as the output. 
Fill in the missing lines of code so that the program runs successfully. 

Boundary Condition(s): 1 <= N <= 10^9 

Input Format:  The first line contains the value of N. 

Output Format: The first line contains the number of digits in N. 

Example Input/Output 1: 

Input:  590 

Output: 3 

Example Input/Output 2: 

Input:  994478 

Output: 6

Code:

#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
        int N, numOfDigits; 
        scanf(" ______________ ", &N, &numOfDigits); 
        printf(______________); 
        return 0; 
}

SOLUTION:
*/

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    int N, numOfDigits; 
    scanf("%d", &N, &numOfDigits); 
    printf("%d", snprintf(NULL, 0, "%d", N)); 
    return 0; 
}
