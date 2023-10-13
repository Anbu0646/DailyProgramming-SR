/*
The program must accept a string S with spaces as the input.
The program must replace all the spaces by * (asterisk) in the string S. 
Then the program must bring all the asterisks to the end of the string S. 
Finally, the program must print the modified string S as the output.

Boundary Condition(s): 3 <= Length of S <= 1000 

Input Format:  The first line contains S. 

Output Format: The first line contains the modified S.

Example Input/Output 1:

Input:  Handle with care 

Output: Handlewithcare** 

Explanation: 

After replacing all the spaces by * in the string Handle with care, it becomes Handle*with*care After bringing all the asterisks to the end of the string, it becomes Handlewithcare**.
Hence the output is Handlewithcare**.

Example Input/Output 2:

Input:  of the people by the people for the people 

Output: ofthepeoplebythepeopleforthepeople********

SOLUTION:
*/

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[1000];
    scanf("%[^\n]", ch);
    int count = 0;
    for(int i=0; i < strlen(ch); i++)
    {
        if(ch[i] == ' ')
        {
            count++;
        }
        else
        {
            printf("%c", ch[i]);
        }
    }
    for(int i=1; i<=count; i++)
    printf("*");
}

/*
PY3:
String = input().strip()
Count = 0
String_1 = ""
for i in String:
    if i == " ":
        Count += 1
for j in String:
    if j == " ": continue
    else: String_1 += j
print(String_1+'*'*Count)
*/
