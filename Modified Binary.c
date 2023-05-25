/*
The program must accept an integer N as the input. The program must find the binary representation of N. 
Then the program must replace all the 1's by numbering them from 1 (left to right). 
Then the program must replace all the 0's by numbering them from 1 (right to left). 
Finally, the program must print the modified binary representation of N as the output. 

Boundary Condition(s): 1 <= N <= 10^8 

Input Format:  The first line contains the value of N. 

Output Format: The first line contains the modified binary representation of N. 

Example Input/Output 1: 

Input:  34 

Output: 143221 

Explanation: 

The binary representation of 34 is 100010. 
After replacing all the 1's by numbering them from 1 (left to right), the binary representation becomes 100020. 
After replacing all the 0's by numbering them from 1 (right to left), the binary representation becomes 143221. 

Example Input/Output 2: 

Input:  90402 

Output: 1112310987465543261

Example Input/Output 3:

Input:  99999999 

Output: 1823456776891011543211213141516171819

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s[101], k=0, count=0, l=1;
    
    while(n>0)
    {
        s[k] = n%2;
        if(s[k] == 0)
        {
            count++;
        }
        k++;
        n /= 2;
    }
  
    while(k--)
    {
        if(s[k] == 1)
        {
            printf("%d", l);
            l++;
        }
        else
        {
            printf("%d", count);
            count--;
        }
    }

}
