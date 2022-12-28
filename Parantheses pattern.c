/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 2 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  2 
Output: *()* 
        (()) 
        *()* 
        
Example Input/Output 2: 

Input:  5 
Output: ****()****  
        ***(())*** 
        **((()))** 
        *(((())))* 
        ((((())))) 
        *(((())))* 
        **((()))** 
        ***(())*** 
        ****()****

SOLUTION:
*/

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; printf("\n"), i++)
    {
        for(int j=i; j<n; j++) printf("*");
        for(int j=1; j<=i; j++) printf("(");
        for(int j=1; j<=i; j++) printf(")");
        for(int j=i; j<n; j++) printf("*");
    }
    for(int i=1; i<=n; printf("\n"), i++)
    {
        for(int j=1; j<=i; j++) printf("*");
        for(int j=i; j<n; j++) printf("(");
        for(int j=i; j<n; j++) printf(")");
        for(int j=1; j<=i; j++) printf("*");
    }
}
