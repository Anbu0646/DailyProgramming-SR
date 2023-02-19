/*
The program must accept N integers and an integer S as the input. 
The program must calculate the value of X such that the sum of integers at the positions of multiple of X is equal to S.
Then the program must print the value of X. If more than one such value exists, then the program must print the smallest value of X as the output.

Boundary Condition(s): 1 <= N <= 100
                       1 <= S <= 10^18
                       1 <= Value of each integer <= 10^9 

Input Format:  The first line contains the values of N and S separated by a space. 
               The second line contains N integers separated by space(s).
Output Format: The first line contains the value of X. 

Example Input/Output 1:

Input:  5 11
        4 5 3 6 7 
Output: 2 

Explanation: The integers which are present at the positions of mutiple of 2 are 5 and 6. So their sum is 11 which is equal to S. Hence the output is 2

Example Input/Output 2: 

Input:  8 34 
        11 14 18 20 12 34 19 14 
Output: 4

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, s, c=0;
    scanf("%d %d", &n, &s);
    int a[n];
  
    for(int i=0;i<n;i++) 
        scanf("%d",&a[i]);
  
    for(int i=0; i<n; i++)
    {
        c=0;
        for(int j=0; j<n; j++)
        {
            if((j+1)%(i+1)==0) 
                c+=a[j];
        }
        if(c==s)
        {
            printf("%d", i+1);
            return 0;
        }
    }
}

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long long int num, x;
    scanf("%lld %lld\n", &num, &x);
    unsigned long long int arr[num],p=1,ctr=1;
    
    for(int i=0;i<num;scanf("%lld ",&arr[i++]));
    
    while(p)
    {
        unsigned long long int sum=0;
        for(int i=ctr-1;i<num;i+=ctr)
        {
            sum+= arr[i];
        }
        if(sum==x)
        {
            printf("%d",ctr);
            return 0;
        }
        else
        {
            ctr++;
        }
    }
}

*/
