/*
The program must accept a string S (encrypted string) containing only . (Dots) and - (Hyphens) as the input. 
The encryption algorithm is given below. 
- Digit 0 is encrypted as . (Single Dot). 
- Digit 1 is encrypted as -. (Hyphen and Dot). 
- Digit 2 is encrypted as -- (Two Hyphens). 
The program must decrypt the string S and print it as the output. 

Note: The string S is always a valid encrypted string. 

Boundary Condition(s): 1 <= Length of S <= 1000 

Input Format: The first line contains S. 

Output Format: The first line contains the decrypted string of S. 

Example Input/Output 1:

Input:  .-.-- 

Output: 012 

Explanation: 

012 can be decrypted as ".-.--", so 012 is printed as the output. 

Example Input/Output 2: 

Input:  --. 

Output: 20

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
  
    cin>>s;
  
    int n = s.size();

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '.') 
           cout<<0;
        else if(s[i] == '-')
        {
            if(s[i + 1] == '.') 
               cout<<1;
            else cout<<2;
            
            i+=1;
        }
    }
  
}





#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    
    cin>>s;
    
    for(int i = 0; i <= s.length() - 1; )
    {  
        if(s[i] == '.')
        {
            cout<<"0";
            i++;
        }
        else if(s[i] == '-' && s[i + 1] == '.')
        {
            cout<<"1";
            i += 2;
        }
        else
        {
            cout<<"2";
            i += 2;
        }
    }

}

/*
PY3:
def decrypt(s):
    d = {'.':'0','-.':'1','--':'2'}
    de = ""
    i = 0
    while i < len(s):
        for p, digit in d.items():
            if s.startswith(p,i):
                de += digit
                i += len(p)
                break
    return de
en = input()
print(decrypt(en))

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == '.')
        {
            printf("0");
        }
        else if(str[i] == '-' && str[i+1] == '.')
        {
            printf("1");
            i++;
        }
        else if(str[i] == '-' && str[i + 1] == '-')
        {
            printf("2");
            i++;
        }
    }
}
*/
