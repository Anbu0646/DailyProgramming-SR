/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= N <= 100 

Input Format:  The first line contains the value of N. 
Output Format: The list of lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 

Output: 
        |||* * * * 
        ||* * - * * 
        |* - * * - * 
        * * * * * * * 
        |* - * * - * 
        ||* * - * * 
        |||* * * * 

Example Input/Output 2: 

Input:  5 

Output: 
        ||||* * * * * 
        |||* * --- * * 
        ||* - * - * - * 
        |* --- * * --- * 
        * * * * * * * * * 
        |* --- * * --- * 
        ||* - * - * - * 
        |||* * --- * * 
        ||||* * * * * 

Example Input/Output 3: 

Input:  6 
Output: 
        |||||* * * * * * 
        ||||* * ----- * * 
        |||* - * --- * - * 
        ||* --- * - * --- * 
        |* ----- * * ----- * 
        * * * * * * * * * * * 
        |* ----- * * ----- * 
        ||* --- * - * --- * 
        |||* - * --- * - * 
        ||||* * ----- * * 
        |||||* * * * * *

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int left=0,mid = 2*n-7, right=0;
  
    for(int i=n; i>=1; cout<<endl, i--)
    {
        for(int j=1; j<=i-1; j++)
            cout<<"|";
        if(i==n)
            for(int j=1; j<=n; cout<<"* ", j++);
        else if(i==1)
            for(int j=1; j<=2*n-1; cout<<"* ", j++);
        else
        {
            cout<<"* ";
            for(int j=1; j<=left; j==left?cout<<"- " : cout<<"-", j++);
            cout<<"* ";
            for(int j=1; j<=mid; j==mid?cout<<"- " : cout<<"-", j++);
            cout<<"* ";
            for(int j=1; j<=right; j==right?cout<<"- " : cout<<"-", j++);
            cout<<"* ";
            left==0 ? left++ : left+=2;
            mid-=2;
            right==0 ? right++ : right+=2;
        }
    }
  
    left-=2;
    right-=2;
    mid+=2;
  
    for(int i=1; i<=n-1; cout<<endl, i++)
    {
        for(int j=1; j<=i; j++)
            cout<<"|";
        if(i==n-1)
            for(int j=1; j<=n; cout<<"* ", j++);
        else
        {
            cout<<"* ";
            for(int j=1; j<=left; j==left ? cout<<"- " : cout<<"-", j++);
            cout<<"* ";
            for(int j=1; j<=mid; j==mid ? cout<<"- " : cout<<"-", j++);
            cout<<"* ";
            for(int j=1; j<=right; j==right ? cout<<"- " : cout<<"-", j++);
            cout<<"* ";
            left-=2;
            mid+=2;
            right-=2;
        }
    }
}
