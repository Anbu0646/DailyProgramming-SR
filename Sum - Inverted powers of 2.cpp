/*
The program must accept an integer N as the input. 
The program must generate a sequence of integers containing the integers from 1 to N.
Then the program must invert the sign of all the powers of 2 in the generated sequence.
Finally, the program must print the sum of all the integers in the modified sequence as the output. 

Boundary Condition(s): 1 <= N <= 10^4

Input Format:  The first line contains N.

Output Format: The first line contains the sum of all the integers in the modified sequence. 

Example Input/Output 1:

Input:   4 

Output: -4 

Explanation: 

Here N=4, so the sequence is 1 2 3 4.
After inverting the sign of all the powers of 2, the sequence becomes -1 -2 3 -4. 
Now the sum of integers in the sequence is -4. 
Hence the output is -4.

Example Input/Output 2:

Input:  10 

Output: 25

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, out = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(log2(i) == (int)log2(i)) out -= i;
        else out += i;
    }
    cout<<out;
}

/*
CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int sum = 0;
    if(n <= 0) n = abs(n);
    for(int i=1; i<=n; i++)
    {
        int x = 1, num = i;
        while(num > 1)
        {
            if(num % 2 != 0)
            {
                x = 0;
                break;
            }
            num /= 2;
        }
        int mv = i;
        if(x == 1) mv = -mv;
        sum += mv;
    }
    cout<<sum;

}

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Sum = 0;
    for(int i=1; i<=N; i++)
    {
        int Pow = 0;
        for(int j=0; Pow<=i; j++)
        {
            Pow = pow(2, j);
            if(Pow == i)
            {
                break;
            }
        }
        Sum += ( (Pow == i) ? (-1 * i) : i );
    }
    printf("%d", Sum);
    return 0;
}

PY3:
import math
n = int(input())
lis = []
for i in range(1, n + 1):
    if i == 1 : lis.append(-1)
    elif i % 2 != 0 : lis.append(i)
    else:
        lot = (math.log10(i) / math.log10(2))
        if math.ceil(lot) == math.floor(lot): lis.append(i * -1)
        else: lis.append(i)
print(sum(lis))
*/
