/*
The program must accept an integer matrix of size NxN as the input.
The program must modify the matrix based on the following conditions in the given order.

- The top-right quadrant of the matrix is replaced by the bottom-left quadrant.
- The bottom-right quadrant of the matrix is replaced by the top-left quadrant. 
Finally, the program must print the modified matrix as the output. 

Note: The value of N is always even.

Boundary Condition(s): 2 <= N <= 50 

Input Format:  The first line contains N. 
               The next N lines each contain N integers separated by a space. 
               
Output Format: The first N lines each contain N integers of the modified matrix separated by a space.

Example Input/Output 1:

Input:

4 
25 28 84 71 
68 51 56 70 
17 19 79 29 
87 90 52 75

Output: 

25 28 17 19
68 51 87 90 
17 19 25 28 
87 90 68 51 

Explanation: 

The top-right and bottom-left quadrant of the matrix are highlighted below. 

25 28 84 71 
68 51 56 70 
17 19 79 29
87 90 52 75 

The bottom-right and top-left quadrant of the matrix are highlighted below. 

25 28 84 71
68 51 56 70 
17 19 79 29 
87 90 52 75

After replacing the quadrants as per the given conditions, the matrix becomes 

25 28 17 19
68 51 87 90
17 19 25 28 
87 90 68 51

Example Input/Output 2: 

Input: 

6 
65 35 64 63 88 85 
45 14 17 54 45 33
46 58 32 35 76 54 
88 71 39 92 20 86 
71 66 96 34 96 57 
59 10 46 62 22 22 

Output: 

65 35 64 88 71 39
45 14 17 71 66 96
46 58 32 59 10 46 
88 71 39 65 35 64
71 66 96 45 14 17 
59 10 46 46 58 32

SOLUTION:
*/

import java.util.*;
public class Hello 
{    
    public static void main(String[] args) 
    {
		    Scanner sc = new Scanner(System.in);
		    int n = sc.nextInt();
		    int arr[][] = new int[n][n];
		    for(int i = 0; i < n; i++) 
        {
		        for(int j = 0; j < n; arr[i][j++] = sc.nextInt());
		    }
		    for(int i = 0; i < n; i++) 
        {
		        for(int j = 0; j < n; j++) 
            {
		            if(i < n / 2 && j >= n / 2) 
		            { 
                   System.out.print(arr[i + (n / 2)][j - (n / 2)] + " "); 
                }
		            else if(i >= n / 2 && j >= n / 2) 
		            { 
                   System.out.print(arr[i - (n / 2)][j - (n / 2)] + " "); 
                }
		            else System.out.print(arr[i][j] + " ");
		        }
		        System.out.println();
		    }
    	}
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n / 2; i++)
    {
        for(int j = 0; j < n / 2; j++)
        {
            a[i][j + n / 2] = a[i + n / 2][j];
            a[i + n / 2][j + n / 2] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
    return;
}


CPP:
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
   int n;
   cin>>n;
   int a[n][n];
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < n; j++)
       {
           cin>>a[i][j];
       }
   }
   for(int i = n / 2; i < n; i++)
   {
       for(int j = n / 2; j < n; j++)
       {
           a[i][j] = a[i - n / 2][j - n / 2];
       }
   }
   for(int i = 0; i < n / 2; i++)
   {
       for(int j = n / 2; j < n; j++)
       {
           a[i][j] = a[i + n / 2][j - n / 2];
       }
   }
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < n; j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
}


PY3:
n = int(input())
lis = [input().split() for _ in range(n)]
half = n//2
for i in range(half):
    for j in range(half):
        lis[half + i][half + j] = lis[i][j]
        lis[i][half + j] = lis[half + i][j]
for i in lis:
    print(*i)
        
*/
