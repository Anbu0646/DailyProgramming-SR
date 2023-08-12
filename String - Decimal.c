/*
The program must accept a string S containing only a and b as the input. 
The program must form the binary represention of an integer X by replacing a by 1 and b by 0 in the string S. 
Then the program must print the value of X as the output. 

Boundary Condition(s): 1 <= Length of S <= 30 

Input Format:  The first line contains the string S. 

Output Format: The first line contains the integer X. 

Example Input/Output 1: 

Input:  aabba 

Output: 25 

Explanation: 

After replacing all the occurrences of a by 1 andb by 0, the string becomes 11001. 
So the decimal equivalent of (11001)2 is 25. Hence the output is 25 

Example Input/Output 2: 

Input:  abbaaba 

Output: 77

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char String[31];
    scanf("%s", String);

    for(int i=0; i<strlen(String); i++)
    {
        if(String[i] == 'a')
        {
          String[i] = '1';
        }
        else if(String[i] == 'b')
        {
          String[i] = '0';
        }
    }

    printf("%d", strtol(String, NULL, 2));

    return 0;
}

/*
CPP:

C:
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char str[101];
    scanf("%s", str);
    long long int sum = 0;
    int count = 0, len = strlen(str);
    
    for(int i = len - 1; i >=0; i--)
    {
        if(str[i] == 'a')
        {
            int temp = 1;
            sum = sum + (temp * (pow(2, count)));
        }
        count++;
    }
    printf("%lld", sum);
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char str[101];
    scanf("%s", str);
    
    int arr[100], z = 0;
    
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] == 'a')
        {
            arr[z]=1;
            z++;
        }
        else
        {
            arr[z] = 0;
            z++;
        }
    }
    
    int s = 0, a = 0;
    
    for(int i = z - 1; i>=0; i--)
    {
        if(arr[i] == 1)
        {
            s += pow(2, a);
            a++;
        }
        else
        {
            a++;
        }
    }
    printf("%d", s);
}

PY3:
a=input ().strip()
x=''
for i in a:
    if i=='a':
        x+='1'
    else:
        x+='0'

print(int(x,2))
*/
