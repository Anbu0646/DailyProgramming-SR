/*
The program must accept a string S as the input. The program must maintain a counter which starts from 0 based on the characters in the string. 
The program must traverse the string and manipulate the counter based on the following conditions. 
                                                                -If the character is I (i.e. uppercase i) the program must increment the counter by 1. 
                                                                -If the character is D the program must decrement the counter by 1. 
                                                                -If the character is R the program must Reset the counter to 0. 

Finally, the program must print the value of the counter. 

Boundary Condition(s): 1 <= Length of String <= 1000 

Input Format:  The first line contains S. 
Output Format: The first line contains the final counter value. 

Example Input/Output 1: 

Input:  DRIDD 
Output: -1 

Explanation: Counter starts from 0. 
             For the character D the counter is decremented by 1. So the counter becomes -1. 
             For the character R the counter is reset to 0. 
             For the character I the counter is incremented by 1. So the counter becomes 1. 
             For the character D the counter is decremented by 1. So the counter becomes 0. 
             For the character D the counter is decremented by 1. So the counter becomes -1.

Example Input/Output 2: 

Input:  RDRIDRDIII 
Output: 2

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int c=0;
    cin>>s;
    
    for(int i=0; i<s.length(); i++)
    {
        s[i]=toupper(s[i]);
        if(s[i]=='R')
        {
            c=0;
        }
        else if(s[i]=='I')
        {
            c+=1;
        }
        else
        {
            c-=1;
        }
    }
    
    cout<<c;
}
