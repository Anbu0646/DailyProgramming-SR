/*
The program must accept an integer matrix of size NxN as the input. 
The program must find the sum S of elements in the main diagonal and the opposite diagonal of the matrix.
Then the program must replace all the elements in the main diagonal and the opposite diagonal by S. 
Finally, the program must print the modified matrix as the output. 

Boundary Condition(s): 2 <= N <= 50 

Input Format:  The first line contains N. The next N lines contain N integers each separated by space(S). 
Output Format: The first N lines contain N integers of the modified matrix each separated by space(s). 

Example Input/Output 1:

Input:  4 
        17 28 47 40
        24 43 40 43
        50 38 44 33 
        44 22 46 41 
        
Output: 307 28 47 307
        24 307 307 43 
        50 307 307 33 
        307 22 46 307 
        
Explanation: The elements in the main diagonal are 17 43 44 and 41. 
             The elements in the opposite diagonal are 40 40 38 and 44. 
             The sum of elements in the main diagonal and the opposite diagonal is 307. 
             So all the elements in the main diagonal and the opposite diagonal are replaced by 307. 
             Hence the output is   307 28 47 307 
                                   24 307 307 43
                                   50 307 307 33
                                   307 22 46 307 
             
 Example Input/Output 2: 
 
 Input:  3 
         49 32 22
         50 39 23 
         24 47 40 
         
 Output: 174 32 174 
         50 174 23 
         174 47 174
         
 Explanation: The elements in the main diagonal are 49 39 and 40. 
              The elements in the opposite diagonal are 22 39 and 24. 
              Here 39 is common for both the diagonals. 
              So only one 39 is considered to find the sum S.
              The sum of elements in the main diagonal and the opposite diagonal is 174. 
              So all the elements in the main diagonal and the opposite diagonal are replaced by 174. 
              Hence the output is 174 32 174
                                  50 174 23 
                                  174 47 174

SOLUTION:
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rrr[n][n], sum = 0;
    
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
               cin >> rrr[i][j];
       }
    }
        
    for(int i = 0; i < n; i++)
    {
        sum = sum + rrr[i][i];
        sum = sum + rrr[i][n - i - 1];
    }
    
    if(n % 2 == 1)
        sum -= rrr[n/2][n/2];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
             if(j == i || j == n - 1 - i)
             {
                   cout << sum << " ";
             }
             else
             {
                   cout << rrr[i][j]<< " ";
              }
        }
        cout << endl;
     }
}
        
