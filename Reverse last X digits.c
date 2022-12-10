/*

The program must accept two integers N and X as the input. The program must reverse the last X digits in N. Then the program must print the modified value of N as the output. 

Boundary Condition(s): 1 <= N <= 10^15 1 <= X <= 15 

Input Format:  The first line contains the integer N. 
               The second line contains the integer X. 
               
Output Format: The first line contains the modified value of N. 

Example Input/Output 1: 

Input:  12345 
        3 
Output: 12543 

Explanation: The last 3 digit in 12345 is 345. 
             The reverse of 345 is 543. 
             Hence the output is 12543 
             
Example Input/Output 2: 

Input:  6745424 
        4 
Output: 6744245

SOLUTION:

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  unsigned long int n, n1;
  scanf("%ld %d", &n, &n1);
  int c=0, arr[100], k=0;
  while(c!=n1)
  {
      arr[k++]=n%10;
      n=n/10;
      c++;  
  }
  if(n>0)
  {
    printf("%ld", n);
  }
  for(int i=0; i<k; i++)
  {
    printf("%d", arr[i]);
  }
}
