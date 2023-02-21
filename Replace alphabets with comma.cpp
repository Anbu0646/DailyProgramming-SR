/*
The program must accept N integers separated by an alphabet as the input. The program must print those N integers separated by a comma as the output.

Boundary Condition(s):  1 <= N <= 100 
                        1 <= Each integer value <= 10^7 

Input Format:  The first line contains N. The second line contains N integers separated by an alphabet. 
Output Format: The first line contains N integers separated by a comma. 

Example Input/Output 1: 

Input:  4 
        12e56y877z1234 
Output: 12,56,877,1234 

Explanation: The integers are printed separated by a comma. 

Example Input/Output 2: 

Input:  5 
        1s2d3h4e4 
Output: 1,2,3,4,4

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    char arr[1001];
    cin>>arr;
    int l=strlen(arr);
    
    for(int i=0; i<l; i++)
    {
        if(isalpha(arr[i]))
        {
            cout<<",";
        }
        else
        {
            cout<<arr[i];
        }
    }
}
