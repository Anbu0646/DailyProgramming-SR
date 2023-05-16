/*
The program must accept a string with space as the input. 
The program must replace each word W by another word containing the same alphabets with the smallest length. 
Then the program must print the modified string as the output. 

Note: If there are more than one replacement word exist then replace the word by the first occurring word having the same alphabet with the smallest length. 
      Each word is separated by exactly one space. The words contain only lowercase alphabets.

Boundary Condition(s):  1 <= Length of S <= 1000 

Input Format:  The first line contains S. 
Output Format: The first line contains the modified S. 

Example Input/Output 1: 

Input:  aba ba aab rar arr attr rat 

Output: ba ba ba rar rar rat rat 

Explanation: 

The words aba, ba and aab have the same two alphabets and the smallest of them is ba.
The words rar and arr have the same two alphabets and their lengths are equal. So the first occurring word rar is used as the replacement word. 
The words attr and rat have the same three alphabets and the smallest of them is rat. 

Example Input/Output 2: 

Input:  aaston nova noah tonas hooana

Output: tonas nova noah tonas noah

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int main()
{
    char s[1001][1001], t[10001];
    scanf("%[^\n]\n", t);
    int p=0;
    char *l = strtok(t, " ");
    while(l!=NULL)
    {
        strcpy(s[p], l);
        p++;
        l = strtok(NULL, " ");
    }
  
    for(int i=0; i<p; i++)
    {
        int c1[26] = {0};
        char u[1001];
        for(int j=0; j < strlen(s[i]); j++)
        {
            c1[s[i][j] - 'a']++;
        }
        int m = INT_MAX;
        int p1= 0;
        for(int j=0; j<p; j++)
        {
            int f = 0;
            int c2[26] = {0};
            for(int k=0; k<strlen(s[j]); k++)
            {
                c2[s[j][k] - 'a']++;
            }
            for(int k=0; k<26; k++)
            {
                if(!((c1[k]>=1 && c2[k]>=1) || (c1[k]==0 && c2[k]==0)))
                {
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            {
                if(m > strlen(s[j]))
                {
                    p1 = 1;
                    m = strlen(s[j]);
                    strcpy(u, s[j]);
                }
            }
        }
        if(p1 == 0) 
          printf("%s ", s[i]);
        else printf("%s ", u);
    }
  return 0;
}
