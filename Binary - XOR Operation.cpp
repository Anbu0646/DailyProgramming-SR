/*
The program must accept the binary representation of two integers X and Y as the input.
The program must print the result of the bitwise XOR operation of the two binary representations (X ^ Y) as the output. 

Note: The number of bits in the binary representation of X and Y are always equal. 

Boundary Condition(s): 1 <= Length of each binary representation <= 63 

Input Format: 

The first line contains the binary representation of X. 
The second line contains the binary representation of Y. 

Output Format: The first line contains the binary representation of X ^ Y. 

Example Input/Output 1: 

Input: 

1010100 
0100101 

Output: 1110001 

Example Input/Output 2: 

Input:  

1110 
1010 

Output: 0100

SOLUTION:
*/

#include <iostream>
#include <string>

int main() 
{
    string x, y;
    cin >>x>> y;
    
    for (size_t i = 0; i < x.length(); ++i) 
    {
        cout << (x[i] - '0') ^ (y[i] - '0');
    }
    
    return 0;
}

/*
PY3:
X = input().strip()
Y = input().strip()
XOR = ""
for i in range(len(X)):
    if X[i] == Y[i]:
        XOR += "0"
    else:
        XOR += "1"
print(XOR)



x=input().strip()
y=input().strip()
for i in range(len(x)):print(int(x[i])^int(y[i]),end="")


C:
#include<stdio.h>
#include<stdlib.h>

void XOR(char c1, char c2)
{
    if(c1 == c2)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}

int main()
{
    char s1[1001], s2[1001];
    scanf("%s\n%s", s1, s2);
    for(int i=0; i<strlen(s2); i++)
    {
        XOR(s1[i], s2[i]);
    }
}
*/
