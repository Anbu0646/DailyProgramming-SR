/*
The program must accept an integer X as the input. 
The program must form the minimum possible integer Y by modifying the integer X based on the following conditions. 
- Any digit D in X (at most all the digits) can be replaced by 9 
- D (9 minus D). - Y should not contain leading zeros. 
- The number of digits in X and Y should be equal. 
Finally, the program must print the integer Y as the output. 

Boundary Condition(s): 1 <= X <= 10^7

Input Format:  The first line contains X. 

Output Format: The first line contains Y. 

Example Input/Output 1: 

Input:  27 

Output: 22 

Explanation: 

The minimum possible integer is 22 which is obtained by replacing the digit 7 with 2 (9 - 7).
Hence the output is 22.

Example Input/Output 2: 

Input:  4545 

Output: 4444

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        int val = '9' - s[i];
        if(val < 5)
        {
            if(val == 0 && i == 0)
            {
                cout<<9;
            }
            else
                cout<<val;
        }
        else
        {
            cout<<s[i];
        }
    }
}

/*
C:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int flag = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(i == 0 && str[i] == '9')
        {
            printf("%c", str[i]);
            flag = 1;
            continue;
        }
        int num = str[i] - '0';
        int diff = 9 - num;
        if(flag == 0 && (num == 0 || diff == 0))
        {
            continue;
        }
        else if(num <= diff )
        {
            printf("%d", num);
            flag = 1;
        }
        else if(diff <= num )
        {
            printf("%d", diff);
            flag = 1;
        }
    }

}



#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[8];
    scanf("%s", str);
    int i, j;
    if(str[0] != '9')
    {
        j = 0;
    }
    else
    {
        j = 1;
    }
    for(i=j; i<strlen(str); i++)
    {
        if(str[i] >= '5')
        {
            str[i] = '9' - str[i] + '0';
        }
    }
    printf("%s", str);
}

PY3:

x=int(input())
arr=[int(i) for i in str(x)]
k=[]
c=0
for i in arr:
    if c==0 and i==9:
        k.append(i)
        c+=1
        continue
    if i>=5:
        k.append(9-i)
    else:
        k.append(i)
    c+=1
for i in k:
    print(i,end="")
*/
