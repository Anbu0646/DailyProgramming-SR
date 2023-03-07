/*
The program must accept a string S as the input. The program must replace all the vowels in S by the vowels a, e, i, o and u in a circular manner. 
Finally, the program must print the modified string as the output. 

Note: All the alphabets in S are only in lower case. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string value S. 
Output Format: The first line contains the modified string value of S. 

Example Input/Output 1:

Input:  kingkong 
Output: kangkeng 

Explanation: The vowels in the string kingkong are i and o. So they are replaced by a and e. Hence the output is kangkeng 

Example Input/Output 2: 

Input:  icecreamchocolate 
Output: acecriomchucaleti

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;    
}

int main(int argc, char** argv)
{
    string ch;
    char vow[]={'a','e','i','o','u'};
    cin>>ch;
    int k=0, len=sizeof(vow)/sizeof(vow[0]);
    for(int i=0; i<ch.size(); i++)
    {
        if(isvowel(ch[i]))
        {
            if(k==len) 
                k=0;
            cout<<vow[k++];
        }
        else
            cout<<ch[i];
    }
}
