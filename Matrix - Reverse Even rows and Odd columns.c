/*
The program must accept an integer matrix of size RxC as the input. 
The program must reverse the elements in the even rows in the matrix. 
Then the program must reverse the elements in the odd columns in the matrix. Finally, the program must print the modified matrix as the output. 

Boundary Condition(s): 2 <= R, C <= 50 

Input Format: 

The first line contains the values of R and C separated by a space. 
The next R lines contain C integers each separated by space(s). 

Output Format: 

The first R lines contain C integers of the modified matrix each separated by space(s). 

Example Input/Output 1: 

Input: 

3 4 
96 53 51 15 
23 11 72 68 
77 53 74 47 

Output: 

77 53 74 15 
68 72 11 23 
96 53 51 47 

Explanation: 

After reversing the elements in even rows, the matrix becomes 

96 53 51 15 
68 72 11 23 
77 53 74 47 

After reversing the elements in odd columns, the matrix becomes 

77 53 74 15 
68 72 11 23 
96 53 51 47 

Hence the output is 

77 53 74 15 
68 72 11 23 
96 53 51 47 

Example Input/Output 2: 

Input: 

7 7 
62 32 91 18 81 24 19 
35 99 98 91 80 70 61 
87 19 31 92 77 27 89 
24 43 35 82 64 45 32 
11 90 16 68 29 11 90 
98 44 12 48 84 30 48 
69 93 43 62 70 78 12 

Output: 

69 32 43 18 70 24 12 
48 70 84 91 12 99 98 
11 19 16 92 29 27 90 
32 45 64 82 35 43 24 
87 90 31 68 77 11 89 
61 30 80 48 98 44 35 
62 93 91 62 81 78 19

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int r, c;
   scanf("%d %d", &r, &c);
   int a[r][c];
  
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
  
   for(int i=0; i<r; i++)
   {       
           if(i%2 != 0)
           for(int j=0; j<c/2; j++)
           {
               int temp = a[i][j];
               a[i][j]  = a[i][c - j - 1];
               a[i][c - j - 1] = temp;
           }
   }
  
   for(int j=0; j<c; j++)
   {
       if(j%2==0)
       {
          for(int i=0; i<r/2; i++)
          {
              int t = a[i][j];
              a[i][j] = a[r-i-1][j];
              a[r-i-1][j] = t;
          }
       }
    }
  
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           printf("%d ", a[i][j]);
       }
       printf("\n");
   }
}
