/*
The program must accept a string S and two characters as CH1 and CH2 as the input. 
The program must print the minimum distance between CH1 and CH2 in the string S as the output. 

Note:  The characters CH1 and CH2 must be in same order as given in the input for measuring the distance. 

Boundary Condition(s): 2 <= Lenght of S <= 100 

Input Format: 

The first line contains the string S. 
The second line contains two characters separated by a space. 

Output Format: 

The first line contains the minimum distance between two characters in S. 

Example Input/Output 1: 

Input: 

hello world 
o l 

Output: 1

Explanation: 

The distance between o and l in the hello world is 4. 
The distance between o and l in the hello world is 1. 
Here the minimum distance is 1. 
Hence the output is 1 .

Example Input/Output 2: 

Input: 

may i know your good name  
a m 

Output: 0

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001], a, b;
    scanf("%[^\n] %c %c", s, &a, &b);
    int m = 9999;
    
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == a)
        {
            for(int j=i + 1; j<strlen(s); j++)
            {
                if(s[j] == b)
                {
                    m = fmin((j - i), m);
                    break;
                }
            }
        }
    }
    printf("%d", m - 1);
}
/*
s = input().strip()
a, b = map(str,input().split())
c = 0
m = 99999

for i in range(len(s)):
    if s[i] == a:
        for j in range(i + 1, len(s)):
            if s[j] == b:
                c = j - i
                break
        if c<m :
            m = c
print(m - 1)            
*/
