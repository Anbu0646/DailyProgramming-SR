/*
The program must accept N integers and an integer X as the input. 
The program must print the sum of 2^X integers from the Xth integer as the output. 
If there is no 2^X integers from the Xth integer then print the sum of all integers from the Xth integer as the output. 

Boundary Condition(s): 

3 <= N <= 1000 
1 <= Each integer value <= 1000 
1 <= X <= 9 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 
The third line contains X. 

Output Format: 

The first line contains the sum based on the given conditions. 

Example Input/Output 1:

Input: 

5 
2  1  4  3  5  2 

Output:  13 

Explanation:

Here X = 2, so 2^2 = 4. 
The 2nd integer is 1, so the 4 integers from 1 are 1 4 3 5 and their sum is 13. 
Hence the output is 13.

Example Input/Output 2: 

Input: 

6  
5  4  7  3  9  1  3

Output:  20

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Arr[1001], X, Power, Sum = 0;
    scanf("%d", &N);
    for(int i=0; i<N; scanf("%d ", &Arr[i++]));
    scanf("%d", &X);
    Power = pow(2, X);
    if(X<=N)
    {
        for(int i=X - 1; i < X - 1 + Power && i < N; i++)
        {
//            printf("%d ", Arr[i]);
            Sum += Arr[i];
        }
    }
    else
    {
        for(int i=X - 1; i<N; i++)
        {
            Sum += Arr[i];
        }
    }
    printf("%d", Sum);
}

/*
PY3:

CPP:


*/
