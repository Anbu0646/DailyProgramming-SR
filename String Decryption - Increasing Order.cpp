/*
The program must accept a string S (encrypted string) containing only alphabets as the input. 
The encryption algorithm is given below. 

- The first character occurs only once. 
- The second character occurs twice. 
- The third character occurs thrice and so on. 

The program must decrypt the string S and print it as the output. 

Note: The string S is always a valid encrypted string. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains the decrypted string of S. 

Example Input/Output 1: 

Input:  baabbb 

Output: bab 

Explanation:

baabbb can be decrypted as bab. 
So bab is printed as the output. 

Example Input/Output 2: 

Input:  ooopppssss 

Output: oops

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string String;
    cin>>String;
    int Len = String.size(), i = 0, Count = 1;
    
    while(i < Len)
    {
        cout<<String[i]<<"";
        i += Count;
        Count += 1;
    }
}

/*

*/
