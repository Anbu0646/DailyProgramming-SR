/*
The program must accept N integers and an integer K as the input. 
The program must print the largest power of K among N integers as the output.
If none of the integers is a power of K then the program must print -1 as the output. 

Boundary Condition(s): 

1 <= N <= 10^3 
1 <= K <= 20 
1 <= Value of each integer <= 10^8 

Input Format:

The first line contains the values of N and K separated by a space. 
The second line contains N integers separated by a space. 

Output Format: 

The first line contains the largest power of K. 

Example Input/Output 1: 

Input: 

7 
3 24 27 45 29 381 360 81 

Output: 

81 

Explanation:

27 (3*3*3) and 81 (3*3*3*3) are the integer values of power of 3. 
81 is the largest power of 3 so it is printed as the output. 

Example Input/Output 2: 

Input: 

9 
6 76 61 431 162 667 272 364 571 283 

Output: 

-1
*/

#include<stdio.h>
#include<stdlib.h>

void pow(int a[], int n, int m)
{
    int max = -1;
    int k = m;
  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(k == a[j] && max < a[j])
            {
                max = a[j];
            }
        }
    k = k*m;
    }
    if(max == -1) printf("-1");
    else printf("%d", max);
}

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    pow(a, n, m);

}
