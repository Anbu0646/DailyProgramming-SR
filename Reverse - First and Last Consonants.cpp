/*
The program must accept a string S as the input. 
The program must reverse the characters between the first occuring consonant and the last occuring consonant (inclusive of both the consonants) in the string. 
Then the program must print the modified string as the output. 

Note: At least two consonants will be present in the string S. 

Boundary Condition(s):  2 <= Length of S <= 1000 

Input Format:  The first line contains the string S. 
Output Format: The first line contains the modified string S. 

Example Input/Output 1: 

Input:  aroma 
Output: amora 

Explanation:  The first occurring consonant is r.
              The last occurring consonant is m. 
              So "rom" is reversed as "mor". 
              Hence the output is amora 

Example Input/Output 2: 

Input:  aEilkjOpqrstuAe 
Output: aEitsrqpOjkluAe

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char ch)
{
    ch = tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    return 0;    
}

int main(int argc, char** argv)
{
    string ch;
    cin>>ch;
    int ind1, ind2;
  
    for(int i=0; i<ch.size(); i++)
    {
        if(!isvowel(ch[i]))
        {
            ind1=i;
            break;
        }
    }
  
    int k=0;
  
    for(int j=ch.size()-1; j>=0; j--)
    {
        if(!isvowel(ch[j]))
        {
            ind2=k;
            break;
        }
        
    k++;
    }
  
    reverse(ch.begin()+ind1, ch.end()-k);
  
    cout<<ch;

}
