/*
The program must accept an odd integer N and a character CH as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 99 

Input Format:  The first line contains the values of N and CH separated by a space. 
Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 5 #

Output:

# # # # # # # # # 
- # 5 4 3 2 1 # 
- - # 5 4 3 #
- - - # 2 # 
- - - - # 

Example Input/Output 2: 

Input:  7 @ 

Output: 
@ @ @ @ @ @ @ @ @ @ @
- @ 7 6 5 4 3 2 1 @ 
- - @ 7 6 5 4 3 @
- - - @ 2 1 7 @
- - - - @ 6 @ 
- - - - - @

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    char ch;
    cin>>N>>ch;
    int arr[N], col = N + 4, index = 0;
    for(int i=0; i<N; i++)
    {
        arr[i] = N - i;
    }
    for(int i=0; col>0; i++)
    {
        if(i == 0)
        {
            for(int j=0; j<col; j++)
            {
                cout<<ch<<" ";
            }
        }
        else
        {
            for(int j=0; j<i; j++)
            {
                cout<<"- ";
            }
            if(col == 1)
            {
                cout<<ch<<" ";
                return 0;
            }
            cout<<ch<<" ";
            for(int j=0; j<col - 2; j++)
            {
                cout<<arr[index++]<<" ";
                if(index == N)
                    index = 0;
            }
            cout<<ch;
        }
        col -= 2;
        cout<<endl;
    }
}
