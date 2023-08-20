/*
The program must accept an integer N as the input. 
The program must find the number of ones T in the binary representation of N. 
Then the program must form the binary representation of an integer X by concatenating T ones. 
Finally, the program must print the integer value of X as the output. 

Boundary Condition(s): 2 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains X. 

Example Input/Output 1: 

Input:  10 

Output: 3 

Explanation: 

There are 2 ones present in the binary representation of 10 (1010). 
So the binary representation of the integer X is 11.
The decimal equivalent of 11 is 3. 
Hence the output is 3.

Example Input/Output 2: 

Input:  15 

Output: 15

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, Binary_number[100], i = 0, one_count[10], k = 0, multiple = 1, sum = 0;
    scanf("%d", &N);
    
    while(N > 0)
    {
        Binary_number[i++] = N % 2;
        N /= 2;
    }
    
    for(int j=0; j<i; j++)
    {
        if(Binary_number[j] == 1)
        {
            one_count[k++] = 1;
        }
    }
    
    for(int l=k - 1; l>=0; l--)
    {
        sum += (multiple * ( (one_count[l]) % 2 ) );
        multiple *= 2;
    }
    
    printf("%d", sum);
}

/*
PY3:

x=int(input())
y=bin(x)[2:]
z=''
for i in y:
    if i=='1':
        z+=i
print(int(z,2))

C:

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,c=0,s=0;
    scanf("%d",&n);
    while(n)
    {
        if(n%2==1)
        {
            s=s+pow(2,c);
            c++;
        }
        n/=2;
    }
    printf("%d",s);
}
*/
