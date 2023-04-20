/*
The program must accept an integer N as the input. The program must remove all the occurrences of the unit digit of N in the integer N. 
Then the program must print the modified value of N as the output. If all the digits in N are removed then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N <= 10^9 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains the modified value of N or -1. 

Example Input/Output 1: 

Input:  480454 
Output: 805 

Explanation: The unit digit of N is 4. So all the occurrences of 4 are removed in the integer 480454. Hence the output is 805 

Example Input/Output 2: 

Input:  1005201 
Output: 520 

Example Input/Output 3: 

Input:  6666 
Output: -1

SOLUTION:
*/

#include<stdio.h>

int main()
{
    unsigned long long int n;
    scanf("%llu", &n);

    int unit = n%10;

    unsigned long long int dn = 0;
    
    while(n)
    {
        if(n%10 != unit)
        {
            dn = dn*10 + n%10;
        }
        n /= 10;
    }
    
    n = 10;
    
    while(dn)
    {        
        n = n*10 + dn%10;
        dn /= 10;
    }
    
    printf("llu", n);
}


/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
 unsigned long int n, t, c=0, k=0;
 scanf("%lu", &n);
 t=n;
    
 while(t>0)
 {
  c++; 
  t/=10;
 }
    
 long int arr[c], i;
    
 for(i=c - 1; i>=0; i--)
 {
    arr[i] = n%10;
    n /= 10;
 }
    
 t=0;
    
 for(i=0;i<c;i++)
 {
    if(arr[i]!=arr[c-1])
    {
      t = (t*10)+arr[i];
      k = 1;
    }
 }
    
 if(t!=0)
    printf("%lu", t);
 else if(k==1)
   printf("0");
 else
   printf("-1");
    
 return 0;
}*/
