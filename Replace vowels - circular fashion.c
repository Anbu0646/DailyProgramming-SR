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

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char vow[10]={'a','e','i','o','u'};
    char str[100];
    int i, n, k=0;
    scanf("%s %n", str, &n);
  
    for(i=0; i<n; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            printf("%c", vow[k++]);
            if(k==5)
            {
                k=0;
            }
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}
