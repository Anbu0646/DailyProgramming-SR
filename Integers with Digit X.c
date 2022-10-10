/*

The program must accept two integers N and X as the input. The program must print the integers from 1 to N which contains the digit X. If there is no such integer then the program must print "-1" as the output.

Boundary Condition(s): 1 <= N <= 10^5 0 <= X <= 9 

Input Format:  The first line contains the values of N and X separated by a space. 
Output Format: The first line contains either the integers from 1 to N which contains the digit X separated by a space or -1. 

Example Input/Output 1: 

Input:  40 7 
Output: 7 17 27 37 

Explanation: The integers from 1 to 40 having the digit 7 are 7 17 27 37. 
             The remaining integers do not contain the digit 7. 
             Hence the output is 7 17 27 37 
             
Example Input/Output 2: 

Input:  5 9 
Output: -1

Solution:

*/

int main()
{
    int n, x, f=0;
    scanf("%d %d", &n, &x);
    for(int i=1; i<=n; i++)
    {
        int t=i;
        while(t>0)
        {
            if(t%10==x)
            {
                printf("%d ", i);
                f=1;
                break;
            }
        t/=10;
        }
    }
    if(f==0) 
      printf("-1");
    
    return 0;
}
             
}
