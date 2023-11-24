'''
The program must accept two lines of N integers each as the input. 
The program must print the odd integers from both the lines based on their order of occurrences as the output. 
If both lines having odd integers in the same position then print the odd integer from the first line followed by the odd integer from the second line. 

Boundary Condition(s): 

1 <= N <= 100
1 <= Each integer value <= 1000 

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 
The third line contains N integers separated by a space. 

Output Format: The first line contains the odd integers based on their order of occurrences. 

Example Input/Output 1:

Input: 

5
11 10 12 13 77
45 44 44 43 10

Output: 11 45 13 43 77 

Explanation: 

The odd integers in the 1st line are 11 13 and 77. 
The odd integers in the 2nd list are 45 and 43. 
So, those odd integers are printed based on their order of occurrences. 
Hence the output is 11 45 13 43 77.

Example Input/Output 2: 

Input: 

6
12 11 14 13 10 20 
8 15 24 22 13 19 

Output: 11 15 13 13 19 

Example Input/Output 3: 

Input:

4 
3 1 4 8 
6 2 7 9

Output: 3 1 7 9

SOLUTION:
'''

n = int(input())
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))

for i in range(n):
    if l1[i] % 2 != 0:
        print(l1[i], end = ' ')
    if l2[i] % 2 != 0:
        print(l2[i], end = ' ')
      
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int av[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d ", &av[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
        if(av[i] % 2 != 0)
        {
            printf("%d ", av[i]);
        }
    }
}

CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int a[n], b[n];
    
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0 && b[i] % 2 !=0)
        {
            cout<<a[i]<<" "<<b[i]<<" ";
        }
        else if(a[i] % 2 != 0)
        {
            cout<<a[i]<<" ";
        }
        else if(b[i] % 2 != 0)
        {
            cout<<b[i]<<" ";
        }
    }
}
'''
