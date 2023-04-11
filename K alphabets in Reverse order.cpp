/*
The program must accept a lowercase alphabet ch and an integer K as the input. The program must print K alphabets from ch in reverse order. 

Note: If K alphabets are not available from ch then print only available alphabets in reverse order. 

Boundary Condition(s): 1 <= K <= 26 

Input Format:  The first line contains ch and K separated by a space. 
Output Format: The first line contains alphabets as per the given condition. 

Example Input/Output 1: 

Input:  a 4 
Output: dcba 

Example Input/Output 2: 

Input:  x 5 
Output: zyx 

Explanation: There are only three alphabets available from x (including x). Hence those three alphabets are printed in reverse order.

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, k = 0;
    char ch;
    cin >> ch >> n;
    char ar[100];
  
    for(int i = ch; i - ch < n && i <= 122; i++)
    {
        ar[k++] = i;
    }
  
    for(int i = k - 1; i >= 0 ; i--)
    {
        cout << ar[i] ;
    }
}
