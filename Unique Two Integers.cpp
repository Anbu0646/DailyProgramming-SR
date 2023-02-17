/*
The program must accept N integers as the input. The program must print yes as the output if every two integers are unique. Else the program must print no as the output.

Note: N is always even. 

Boundary Condition(s):  1 <= N <= 1000 
                        1 <= Each integer value <= 10^8

Input Format:  The first line contains N. 
               The second line contains N integers separated by space.
Output Format: The first line contains yes or no 

Example Input/Output 1: 

Input:  4 
        39 622 64 39
Output: yes 

Explanation: The integers 39 and 622 are unique. The integers 64 and 39 are also unique. So the output is yes. 

Example Input/Output 2: 

Input:  6 
        12 65 23 14 45 45 

Output: no 

Explanation: The last two integers 45 and 45 are not unique so no is printed.

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
        cin>>arr[i];

    for(int i=0; i<n; i+=2)
    {
        if(arr[i]==arr[i + 1])
        {
            cout << "no";
            return 0;
        }
    }
    cout<<"yes";
}
