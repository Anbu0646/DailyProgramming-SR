/*
The program must accept two integers (X, Y) and a character CH as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= X, Y <= 1000 

Input Format:  The first line contains the values of X, CH and Y separated by a space. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  3 # 5 

Output: ------#
        -----#
        #---#
        -#-# 
        --# 

Example Input/Output 2:

Input:  7 @ 7 

Output: @-----------@ 
        -@---------@ 
        --@-------@ 
        ---@-----@
        ----@---@ 
        -----@-@
        ------@

Example Input/Output 3: 

Input:  10 * 4 

Output: *
        -*
        --* 
        ---* 
        ----* 
        -----* 
        ------*-----*
        -------*---*
        --------*-* 
        ---------*

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int x, y;
    char ch;
    cin>>x>>ch>>y;
    int max = x>y ? x:y, n = x+y-1, k=0;
    int l = n - 1;
    for(int i=0; i<max; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(x==max && y==max)
            {
                if(j==k)
                {
                    cout<<ch;
                    if(i==max-1)
                        break;
                }
                else if(j==l)
                {
                    cout<<ch;
                    break;
                }
                else
                    goto l1;
            }
            else if(x==max)
            {
                if(j==k)
                {
                    cout<<ch;
                    if(i==max-1)
                        break;
                }
                else if(i>=max-y && j==l)
                {
                    cout<<ch;
                    break;
                }
                else if(i<max-y && j>k)
                    cout<<" ";
                else
                    goto l1;
            }
          
            else if(y==max)
            {
                if(j==l)
                {
                    cout<<ch;
                    break;
                }
              
                else if(i>=max-x && j==k)
                    cout<<ch;
                else
                    goto l1;
            }
            else
            {
                l1:
                cout<<"-";
            }
        }
        if(x==max && y==max)
        {
            k++;
            l--;
        }
        else if(x==max)
        {
            k++;
            if(i>=max-y)
                l--;
        }
        else if(y==max)
        {
            l--;
            if(i>=max-x)
                k++;
        }
        cout<<endl;
    }
}
