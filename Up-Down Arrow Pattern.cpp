/*
The program must accept an integer N and a character CH as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):  2 <= N <= 100 

Input Format:  The first line contains the values of N and CH separated by a space. 
Output Format: The first 3xN lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 * 

Output: ---* 
        --*** 
        -*-*-* 
        *--*--* 
        ---* 
        ---* 
        ---* 
        ---*
        *--*--*
        -*-*-* 
        --***
        ---* 
        
Example Input/Output 2:

Input:  5 # 

Output: ----#
        ---### 
        --#-#-#
        -#--#--#
        #---#---# 
        ----# 
        ----#
        ----#
        ----# 
        ----#
        #---#---#
        -#--#--#
        --#-#-#
        ---### 
        ----#

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x;
    cin>>x;
    char a;
    cin>>a;
  
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i+j==x-1)
            {
                cout<<a;
            }
            else if(j==x-1)
            {
                cout<<a;
            } 
            else
            {
                cout<<"-";
            }
        }
      
        for(int j=0; j<i; j++)
        {
            if(j==i-1)
            {
                cout<<a;
            }
            else
            {
                cout<<"-";
            }
        }
    
    cout<<endl;
      
    }
  
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(j==x-1)
            {
                cout<<a;
            }
            else
            {
                cout<<"-";
            }
        }
      
    cout<<endl;
      
    }
    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i==j)
            {
                cout<<a;
            }
            else if(j==x-1)
            {
                cout<<a;
            }
            else
            {
                cout<<"-";
            }
        }
      
        for(int j=x-i-2; j>=0; j--)
        {
            if(j==0)
            {
                cout<<a;
            }
            else
            {
                cout<<"-";
            }
        }
      
    cout<<endl;

    }
}
