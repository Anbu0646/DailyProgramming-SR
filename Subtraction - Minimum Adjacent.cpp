/*
The program must accept N integers as the input. 
For each integer among the N integers, the program must print the value which is obtained by subtracting the integer from the minimum value of it's ajdacents as the 
output. (The first and last integers have only one integer adjacent to them. So consider only the single adjacent integer for them). 

Boundary Condition(s):  2 <= N <= 100
			1 <= Each integer value <= 10^7                                                                                                                                                                                                

Input Format:  The first line contains the values of N. The second line contains N integers separated by space(s).
Output Format: The first line contains N integers separated by a space. 

Example Input/Output 1: 

Input:   4 
         9 4 7 8 
Output: -5 3 -3 -1 

Explanation: The adjacent value of the first integer is 4. Here 9 is subtracted from 4. So -5 is printed. 
             The adjacent values of the second integer are 9 and 7. The minimum adjacent value is 7. Here 4 is subtracted from 7. So 3 is printed. 
             The adjacent values of the third integer are 4 and 8. The minimum adjacent value is 4. Here 7 is subtracted from 4. So -3 is printed. 
             The adjacent value of the fourth integer is 7. Here 8 is subtracted from 7. So -1 is printed. 

Example Input/Output 2:

Input:  7
        9 10 6 2 5 1 4 
Output: 1 -4 -4 3 -4 3 -3

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
  
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
  
    cout<<arr[1]-arr[0]<<" ";
  
    for(int i=1; i<n-1; i++)
    {
        cout<<min(arr[i-1], arr[i+1])-arr[i]<<" ";
    }
  
    cout<<arr[n-2]-arr[n-1];
}
