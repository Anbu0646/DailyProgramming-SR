/*
The program must accept an integer N as the input. The program must print the 4-bit binary representation of each digit in N as the output. 

Boundary Condition(s): 1 <= N <= 10^15 

Input Format:  The first line contains the integer N. 
Output Format: The lines contain the 4-bit binary representation of each digit in N. 

Example Input/Output 1: 

Input:  4653 
Output: 0100 
        0110 
        0101 
        0011 
        
Explanation: The 4-bit binary representation of the first digit in 4653 is 0100. 
             The 4-bit binary representation of the second digit in 4653 is 0110. 
             The 4-bit binary representation of the third digit in 4653 is 0101. 
             The 4-bit binary representation of the fourth digit in 4653 is 0011. 
             
Example Input/Output 2: 

Input:  102 
Output: 0001 
        0000 
        0010

SOLUTION:
*/

// ==>Code by JustNothing_Vishal

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    string input;
    cin >> input;

    for(int j=0;j<input.size();j++)
    {
        int binary[5]={0};
        int i=0,n=input[j]-'0';
        while(n)
        {
            binary[i]=n%2;
            i++;
            n/=2;
        }
        for(int m=3;m>=0;m--)
        {
            cout << binary[m];
        } 
        cout << "\n";
    }
}
