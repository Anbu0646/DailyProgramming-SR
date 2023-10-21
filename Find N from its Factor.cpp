/*
The program must accept the factors of an integer N (excluding 1 and N) as the input. 
The program must find the integer N from its factors and print it as the output.

Input Format:  The first line contains a list of integers separated by a space. 

Output Format: The first line contains an integer N. 

Example Input/Output 1: 

Input:  8 2 6 12 4 3 

Output: 24 

Explanation:

The factors of 24 are 2, 3, 4, 6, 8 and 12 (excluding 1 and 24). 
Here, the given factors are the factors of 24.
So 24 is printed as the output. 

Example Input/Output 2: 

Input:  5 3 

Output: 15

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int arr[100];  
    int k = 0;

    while(cin)
    {
        cin>>arr[k++];
    }

    int min = arr[0], max = arr[0];

    for(int i=0; i < k - 1; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    cout<<min*max;

/*
PY3:
Arr = list(map(int, input().split()))
print(min(Arr) * max(Arr))

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int val;
    int min = 10001, max = 0;
    while(scanf("%d ", &val) >= 1)
    {
        if(val < min)
        {
            min = val;
        }
        if(val > max)
        {
            max = val;
        }
    }  
    printf("%d", min * max);
}
*/
