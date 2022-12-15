/*

The program must accept a string S as the input. The program must toggle the case of vowels in the string S. Then the program must print the modified string as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the modified string. 

Example Input/Output 1: 

Input:  EquilIbriUm 
Output: eqUIlibrIum 

Explanation: The vowels in the string "EquilIbriUm" are 'E', 'u', 'i', 'I', 'i' and 'U'. 
             So toggle the case of all the vowels in the string "EquilIbriUm". 
             Hence the output is eqUIlibrIum. 
             
Example Input/Output 2: 

Input:  JUNKVIRUS 
Output: JuNKViRuS

SOLUTION:

*/

// => Code by @JustNothingVishal

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char a[100];
  if(scanf("%s", a)) for(int i=0;a[i]!='\0';printf("%c",a[i]),i++) if(tolower(a[i])=='a' || tolower(a[i])=='u' || tolower(a[i])=='o' || tolower(a[i])=='i' || tolower(a[i])=='e' ) (a[i]<96)?(a[i]=tolower(a[i])):(a[i]=toupper(a[i])); 
}
