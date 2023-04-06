/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 50 

Input Format:  The first line contains the value of N. 
Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input:  3
Output: 1 * 2 * 3 
        - 5 * 4
        - - 6 
        
Example Input/Output 2: 

Input:  4 
Output: 1 * 2 * 3 * 4
        - 7 * 6 * 5 
        - - 8 * 9 
        - - - 10

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    int count = 1; 
    
    for(int i = 1; i <= n; i++)
    {
        for(int j= 1; j < i; j++)
        {
            cout << "- ";
        }
        
        int t = count;
        
        for (int j= 1; j <= n - i + 1; j++)
        { 
            if(i % 2 == 1) 
                cout << count; 
            else
                cout << tmp + n - i + 1 - j;

            count++;

            if(j = n - i + 1) 
                cout << "*";
        }
    }
  
}
