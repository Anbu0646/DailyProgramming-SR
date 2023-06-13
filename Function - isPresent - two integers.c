/*
You must implement the function isPresent(int M, int N) which accepts two integers M and N as the input.
The function must return 1 if the integer N is present in the integer M. Else it must return 0. 

Example Input/Output 1: 

Input: 21380  38 

Output: YES 

Explanation: 

M = 21380 
N = 38 

Here  38  is present in  21380. 
So YES is printed. 

Example Input/Output 2: 

Input:  2379003 279 

Output: NO

SOLUTION:
*/

#include <stdio.h>
#include <stdlib.h>

int isPresent(int M, int N)
{
    int t = N, c = 0;
    while(t != 0)
    {
        c++;
        t = t/10;
    }
    int b = 1 * pow(10, c) ;
    while(M!=0)
    {
        int rem = M % b;
        if(rem == N)
        return 1;
        M /= 10;
    }
    return 0;
}

int main()
{
    int M, N;
    scanf("%d%d", &M, &N);
    printf(isPresent(M, N) ? "YES" : "NO");
    return 0;
}



/*
#include <stdio.h>
#include <stdlib.h>
int isPresent(int M, int N)
{
    char a[50],b[50];
    sprintf(a,"%d", M);
    sprintf(b,"%d", N);
    if(strstr(a,b)!=NULL) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int M, N;
    scanf("%d%d", &M, &N);
    printf(isPresent(M, N) ? "YES" : "NO");
    return 0;
}
*/
