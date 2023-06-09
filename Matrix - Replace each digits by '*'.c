/*
The program must accept an NxN matrix as the input. The program must replace the digits in each integer by '*' if the integer is divisible by its unit digit and print it as the output. Else the program must print the integer without any modification as the output. 

Boundary Conditions(s): 

1 <= N <= 100 
1 <= Each integer value <= 10^5 

Input Format: 

The first line contains N. 
The next N lines contain N integers each separated by a space. 

Output Format: 

The first N lines contain the modified matrix. 

Example Input/Output 1: 

Input: 

4 
163 122  84  97
155 246 192 124 
 44  97  57 167 
 46  36 278 281 

Output: 

163 *** ** 97 
*** *** *** ***
** 97 57 167 
46 ** 278 *** 

Explanation: 

The integers which are divisible by their unit digits are 122, 84, 155, 246, 192, 124, 44, 36 and 281. 
The digits in these integers are replaced as '*' and printed. 

Example Input/Output 2: 

Input: 

5 
973 1416 1387 998  727 
877  995 1352 477 1195 
 74  965 1345 238  591 
848  182  696 314    7 
259  764  187 1002 428 

Output: 

973 **** 1387 998 727 
877  *** ****  477 **** 
 74  *** ****  238 ***
***  ***  ***  314 * 
259  *** 187  **** 428

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
   unsigned long int n, i, j, k;
   scanf("%lu", &n);
   unsigned long int arr[n][n], t, c = 0;
   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
          scanf("%lu", &arr[i][j]);
          t = arr[i][j];
          c = 0;
       
          while(t>0)
          {
             c++;
             t /= 10;
          }
       
          t = (arr[i][j])%10;
      if(t == 0)
         printf("%lu", arr[i][j]);
      else if(arr[i][j] % t == 0)
      {
           for(k=0; k<c; k++)
               printf("*");
      }
      else
         printf("%lu", arr[i][j]);
      printf(" ");
      }
     printf("\n");
   }
 return 0;

}
