/*
The program must accept M and N integers as the input. 
For each integer I among the N integers, the program must remove the last occurrence of I from the M integers. 
Then the program must print the remaining integers of the M integers as the output. 

Note: If the integer to be removed is not present, then ignore it. 

Boundary Condition(s): 

1 <= N < M <= 1000
1 <= Each integer value <= 10^9 

Input Format: 

The first line contains M and N separated by a space. 
The second line contains M integers separated by a space. 
The third line contains N integers separated by a space. 

Output Format: 

The first line contains the remaining integers of the M integers separated by a space. 

Example Input/Output 1: 

Input: 

8 
3 1 4 7 21 4 7 4 21 
4 1 7 

Output: 

4 7 21 4 21 

Explanation: 

The last occurrence of the integer 4 is at the position 7 which is removed. The integers become 1 4 7 21 4 7 21. 
Then the last occurrence of 1 is at the position 1 which is removed. The integers become 4 7 21 4 7 21. 
Then the last occurrence of 7 in the remaining integers is at the position 5 which is removed. The integers become 4 7 21 4 21. 
Hence 4 7 21 4 21 is printed as the output. 

Example Input/Output 2: 

Input: 

6 
4 21 30 30 21 21 
21 21 40 30 41 

Output: 

21 30 21 21

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,x;
    scanf("%d %d", &n, &x);
    int a[n], b[x];
  
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    for(int i=0; i<x; i++)
    {
        scanf("%d ", &b[i]);
    }
  
    for(int i=0; i<x; i++)
    {
        for(int j=n - 1; j>=0; j--)
        {
            if(b[i] == a[j])
            {
                a[j] = -1;
                break;
            }
        }
    }
  
    for(int i=0; i<n; i++)
    {
        if(a[i] != -1)
        {
            printf("%d ", a[i]);
        }
    }
}
