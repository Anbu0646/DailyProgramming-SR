/*
The program must accept N integers as the input. 
The program must print the integers having both the adjacent elements as two or three digit integers. 
If no such integer matches the given condition, then the program must print -1 as the output.

Note: The first and the last integers have only one adjacent integer and it must be checked.

Boundary Condition(s): 2 <= N <= 100

Input Format:  The first line contains the value of N.
 		           The second line contains N integers separated by space(s). 
Output Format: The first line contains the integers with two or three digit integers as their adjacent elements separated by space. 

Example Input/Output 1: 

Input:  6 
	      12 421 98 2 23 9348 
Output: 12 421 2 9348 

Explanation:  The adjacent integer of 12 is 421. Here 421 is a three digit integer. So 12 is printed. 
              The adjacent integers of 421 are 12 and 98. Here both 12 and 98 are two digit integers. so 421 is printed. 
              The adjacent integers of 98 are 421 and 2. Here 2 is not a two or three digit integer. 
              The adjacent integers of 2 are 98 and 23. Here both 98 and 23 are two digit integers. so 2 is printed.
              The adjacent integers of 23 are 2 and 9348. Here both 2 and 9348 are not a two or three digit integer. 
              The adjacent integer of 9348 is 23. Here 23 is a two digit integer. so 9348 is printed. 

Example Input/Output 2: 

Input:  8 
	      1 123 83 4 5 17 646 73 
Output: 1 646 73

SOLUTION:
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n, f=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i==0 && a[1]<1000 && a[1]>9)
        {
            cout<<a[i]<<" ";
            f=1;
        }
        else if(i==n-1 && a[n-2]>9 && a[n-2]<1000)
        {
            cout<<a[i]<<" ";
            f=1;
        }
        else if(a[i-1]>9 && a[i+1]>9 && a[i-1]<1000 && a[i+1]<1000)
        {
            cout<<a[i]<<" ";
            f=1;
        }
    }
    if(f==0)
        cout<<"-1";
}
