/*
The program must accept an integer N as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary condition(s): 2 <= N <= 100 

Input Format:  The first line contains N. 

Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1: 

Input: 4 

Output: 
#*#* 
*#*# 
#*#*
*#*# 

Example Input/Output 2: 

Input:  5 

Output:
#*#*# 
*#*#*
#*#*# 
*#*#*
#*#*#

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin>>N;
    
    for(int i=1; i<=N; i++, cout<<endl)
    {
        for(int j=1; j<=N; j++)
        {
            if(i % 2 == 1 && j % 2 == 1)    cout<<"#";
            else if(i % 2 == 1 && j % 2 == 0) cout<<"*";
            else if(i % 2 == 0 && j % 2 == 0) cout<<"#";
            else if(i % 2 == 0 && j % 2 == 1) cout<<"*";
        }
    }
}

/*


*/
