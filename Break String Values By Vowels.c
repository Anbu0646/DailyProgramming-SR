/*

The program must accept a string S as the input. The program must break the string into multiple string values so that each string contains exactly one vowel. The string values must be broken such that all the string values start with vowel except for the first string. 

Boundary Condition(s): 1 <= Length of S <= 100 

Input Format:  The first line contains the string S. 
Output Format: The lines contain a string in each line. 

Example Input/Output 1: 

Input:  helloworld 
Output: hell 
        ow 
        orld 
        
Explanation: The string values "hell", "ow" and "orld" contains exactly one vowel. 
             All the string values are started with vowel except the first string. 
             
Example Input/Output 2: 

Input:  daefifof 
Output: da 
        ef 
        if 
        of 
        
Explanation : The string values "da", "ef", "if" and "of" contains exactly one vowel. 
              All the string values are started with vowel except the first string.
              
SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[101];
scanf("%s", &str);
int l=strlen(str), c=0;
for(int i=0; i<l; i++)
{  
    char ch=str[i];
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        c++;
    if(c>1)
    {
        printf("\n");
        c=1;
    }
printf("%c", str[i]);
}
