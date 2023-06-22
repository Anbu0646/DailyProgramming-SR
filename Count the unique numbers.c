/*
The program must accept N integers and an integer X as the input. 
The program must print the count of consecutive X integers (among N integers) in which all the X integers are different as the output. 

Boundary Condition(s): 

2 <= N <= 10^4 
1 <= X <= N 

Input Format: 

The first line contains two integers N and X separated by a space. 
The second line contains N integers separated by space(s). 

Output Format: 

The first line contains count the number of consecutive X integers in which all the X integers are unique. 

Example Input/Output 1: 

Input: 

6 3 
1 2 3 4 4 5 

Output: 2 

Explanation: 

X = 3, The first three integers are 1, 2 and 3. Here all the integers are unique. So the count is 1. 
The next three consecutive integers are 2, 3 and 4. Here all the integers are unique. So the count becomes 2. 
The next three consecutive integers are 3, 4 and 4. Here duplicate integers have occurred. 
The next three consecutive integers are 4, 4 and 5. Here duplicate integers have occurred. 
Hence the output is 2. 

Example Input/Output 2: 

Input: 

8 5 
9 8 1 8 1 2 4 5 

Output: 1

SOLUTION:
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10000], m, i, n, j, k, f, c = 0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=n - m; i++)
    {
        f = 0;
        for(j=i; j<i + m; j++)
        {
            for(k=j + 1; k<i + m; k++)
            {
                if(a[j] == a[k])
                {
                    f = 1;
                }
            }
        }
        if(f == 0)
        {
            c++;
        }
    }
    printf("%d", c);
}
/*
N, X = map(int, input().split())
Arr = list(map(int, input().split()))
Count = 0

for i in range(N - X + 1):
    Numb = Arr[i:i+X]
    if(len(set(Numb))) == X:
        Count += 1

print(Count)
*/
