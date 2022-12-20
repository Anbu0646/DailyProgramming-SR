/*




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
