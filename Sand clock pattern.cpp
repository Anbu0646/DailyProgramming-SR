/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 100 

Input Format: 

The first line contains the value of N. 

Output Format: 

The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

3 

Output: 

3*3*3*3*3*3 
--2*2*2*2 
----1*1 
-----* 
----1*1 
--2*2*2*2 
3*3*3*3*3*3 

Example Input/Output 2: 

Input: 

4 

Output: 

4*4*4*4*4*4*4*4 
--3*3*3*3*3*3 
----2*2*2*2 
------1*1 
-------* 
------1*1 
----2*2*2*2 
--3*3*3*3*3*3 
4*4*4*4*4*4*4*4

SOLUTION:
*/

#include <bits/stdc++.h> 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    int st=n,flag=0,dsh=0;
    for(int i=0; i<(n*2) + 1; i++)
    {
        for(int j=0; j<dsh; j++)
        {
            cout << "-";
        }
        if(i == n)
        {
            cout << "*";
        }
        for(int j=0; j<st*2; j++)
        {
            cout << st;
            if(j != (st*2) - 1)
            {
                cout << "*";
            }
        }
        if(i == n)
        {
            flag = 1;
        }
        if(flag == 0)
        {
            if(i == n - 1)
            {
                dsh++;
            }
            else{
                dsh += 2;
            }
            st--;
        }
        else
        {
            if(i == n)
            {
                dsh--;
            }
            else
            {
                dsh -= 2;
            }
            st++;
        }
      
        cout << endl;
        
    }

}
