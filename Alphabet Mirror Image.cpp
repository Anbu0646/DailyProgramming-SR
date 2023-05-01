/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 26 

Input Format:  The first line contains N. 
Output Format: The first N lines contain the pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  3 

Output: a b c * c b a
        a b * * * b a 
        a * * * * * a
        
Example Input/Output 2: 

Input:  4 

Output: a b c d * d c b a 
        a b c * * * c b a
        a b * * * * * b a 
        a * * * * * * * a

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
        
    for(int i = 1, od = 1; i <= n; i++, od+=2)
    {
        for(int j = 1; j <= n - i + 1; j++) cout << (char)(96+j)<< " ";
        for(int j = 1; j <= od ; j++) cout << "* ";
        for(int j = i; j <= n ; j++) cout << (char)(97+n-j)<< " ";
        cout << endl;
    }
}
