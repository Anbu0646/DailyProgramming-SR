/*
The program must accept a string S as the input. The program must print the alphabets of S in reversal alphabetical order as the output. Note: The string S always contain only lowercase alphabets.

Boundary Condition(s): 1 <= Length of S <= 100

Input Format:  The first line contains the string S.
Output Format: The first line contains the alphabets of S in reversal alphabetical order.

Example Input/Output 1:

Input:  orange
Output: rongea

Explanation: In the string orange, the alphabets in reversal alphabetical order are r o n g e a.
             Hence the output is rongea.
             
Example Input/Output 2:

Input: sweet
Ouput: wtsee

SOLUTION:
*/

// ==> Code by @JustNothing_Vishal
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char word[100];
    scanf("%s", word);
    for(int i=122; i>=97; i--)
    {
      for(int j=0; j<strlen(word); j++) 
        if(word[j]==i) 
          printf("%c", word[j]);
    }
}
