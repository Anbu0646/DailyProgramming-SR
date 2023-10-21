/*
The program must accept an odd integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 5 <= N <= 99 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 

Output: 

1 * 1
2 2 *
3 * *
4 4 *
5 * 5 

Example Input/Output 2: 

Input: 7

Output: 

1 * * 1 
2 * 2 * 
3 3 * * 
4 * * * 
5 5 * * 
6 * 6 * 
7 * * 7

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin>>N;
    int len = (N / 2) + 1;
    
    for(int i=0; i<N; i++, cout<<endl)
    {
        for(int j=0; j<len; j++)
        {
            if(j == 0 || i + j == len - 1 || i - j == len - 1)
            {
                cout<<i + 1<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
    }
}

/*
PY3:

C:
*/
