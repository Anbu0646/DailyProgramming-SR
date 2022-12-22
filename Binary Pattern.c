/*
The program must accept an integer N the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^7 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines contains the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  8 

Output: 1000 
        0**0 
        0**0 
        0001 

Example Input/Output 2: 

Input:  7 
Output: 111 
        1*1 
        111

SOLUTION:
*/

// ==> Code by JustNothing_Vishal 

#include<stdio.h>
#include<stdlib.h>
int length;

int *findthecode(int lk)
{
    static int ar[100];
    int c=0;
    while(lk)
    {
        ar[c]=lk%2;
        c++;
        lk/=2;
    }
    for(int i=0, j=c-1; i<c/2; j--, i++)
    {
        int temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
    }
    length=c;
    return ar;
}

int main()
{
    int abc;
    scanf("%d", &abc);
    int *ar=findthecode(abc);

    for(int i=0; i<length; printf("\n"), i++)
    {
        for(int j=0; j<length; j++){
            if(i==0)
            {
                printf("%d", ar[j]);
            }
            else if(j==0)
            {
                printf("%d", ar[i]);
            }
            else if(j==(length-1))
            {
                printf("%d", ar[length-i-1]);
            }
            else if(i==(length-1))
            {
                printf("%d", ar[length-1-j]);
            }
            else
            {
                printf("*");
            }
        }
    }
}
