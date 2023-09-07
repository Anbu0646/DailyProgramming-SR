/*
The program must accept N unique integers as the input. 
The program must replace each integer by its next bigger integer from its right side. 
If there is no such bigger integer for any integer then keep the integer as it is. 
Finally, the program must print the N modified integers as the output. 

Boundary Condition(s): 

1 <= N <= 1000 
1 <= Each integer value <= 10^5 

Input Format:

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains N modified integers separated by a space. 

Example Input/Output 1: 

Input: 

9 
2 5 9 6 3 4 8 15 12 

Output: 3 6 12 8 4 8 12 15 12 

Explanation: 

The next bigger integer to 2 is 3. So 2 is replaced by 3.
The next bigger integer to 5 is 6. So 5 is replaced by 6.
The next bigger integer to 9 is 12. So 9 is replaced by 12. 
The next bigger integer to 6 is 8. So 6 is replaced by 8. 
The next bigger integer to 3 is 4. So 3 is replaced by 4. 
The next bigger integer to 4 is 8. So 4 is replaced by 8.
The next bigger integer to 8 is 12. So 8 is replaced by 12.
There is no next bigger integer to 15. So 15 is not replaced. 
There is no next bigger integer to 12. So 12 is not replaced. 
Hence the output is 3 6 12 8 4 8 12 15 12.

Example Input/Output 2: 

Input:

4 
4 3 2 1 

Output: 4 3 2 1

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;
int isbig(int a,int b)
{
    if(a>b)return 1;
    return 0;
}


int main(int argc, char** argv)
{
    int n;
    std::cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];//b[i]=a[i];
    }
    
    int min=999999,z=0;;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(isbig(a[j],a[i]))
            {
                if(a[j]<min)
                min=a[j];
            }
        }
    
    if(min==999999)
         cout<<a[i]<<" ";
    else
         cout<<min<<" ";
    min = 999999;
    }

}

/*
PY3:
N = int(input())
Arr = list(map(int, input().split()))

for i in range(0, N):
    Arr1 = Arr[i + 1:]
    Arr1.sort()
    for j in range(0, N - 1 - i):
        if Arr1[j] > Arr[i]:
            print(Arr1[j], end=" ")
            break
    else:
        print(Arr[i], end = " ")

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int b[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d", &b[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        int m = 1000000, k = i;
        for(int j=i + 1; j<n; j++)
        {
            if(b[j] - b[i] > 0 && b[j] - b[i] < m)
            {
                m = b[j] - b[i];
                k = j;
            }
        }
        b[i] = b[k];
    }
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }
}
*/
