/*
The program must accept a string S with spaces as the input. 
For each word W in the string S (i.e., each word from left to right of S), the program must replace the last character of W by the first character of the next word. 
For the last word, the program must replace the last character by the first character of the first word. 
Finally, the program must print the modified string S as the output. 

Boundary Condition(s): 3 <= Length of S <= 1000 

Input Format:  The first line contains S.

Output Format: The first line contains the modified string S. 

Example Input/Output 1:

Input:  Nice to meet you 

Output: Nict tm meey yoN 

Explanation:

Here S = "Nice to meet you". 
The last character of Nice is replaced by the first character of to. So Nice becomes Nict. 
The last character of to is replaced by the first character of meet. So to becomes tm. 
The last character of meet is replaced by the first character of you. So meet becomes meey. 
The last character of you is replaced by the first character of Nice. So you becomes yoN.
Hence the output is Nict tm meey yoN.

Example Input/Output 2:

Input:  tit for tat

Output: tif fot tat

SOLUTION:
*/

#include <iostream>
 
using namespace std;

void replaceLastWord(string &str, int i, int n)
{
    if(i == n - 1)
    {
        cout<<str[0];
        return;
    }
  
    if(str[i + 1] == ' ')
        cout<<str[i + 2];
      
    else
        cout<<str[i];
    
    replaceLastWord(str, i + 1, n);
}

int main(int argc, char** argv)
{
    string str;
    getline(cin, str);
    replaceLastWord(str, 0, str.size());
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[1000];
    scanf("%[^\n]%*c", ch);
    
    for(int i = 0; i < strlen(ch) - 1; i++)
    {
        if(ch[i + 1] == ' ') 
           printf("%c", ch[i + 2]);
        else 
           printf("%c", ch[i]);
    }
    printf("%c",cch[0]);
}

PY3:
l = list(map(str,input().split()))
for i in range(len(l)):
    z = list(l[i])
    if i == len(l) - 1:
        z[-1] = l[0][0]
    else:
        z[-1] = l[i + 1][0]
    print(*z, sep = "", end = " ")
*/
