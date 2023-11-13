'''
The program must accept a string S as the input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= Length of S <= 50

Input Format:  The first line contains S.

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  water 

Output:

w * * * a 
* t * e *
* * r * * 
* t * e * 
w * * * a

Example Input/Output 2:

Input:  OFFICE

Output: 

O * * * * F 
* F * * I *
* * C E * * 
* * C E * *
* F * * I * 
O * * * * F

SOLUTION:
'''

S = input()
l = len(S)
k = 0
r = 0
c = l - 2

for i in range(l//2):
    print("* " * r + S[k] + " " + "* " * c + S[k + 1] + " *" * r)
    k += 2
    r += 1
    c -= 2
  
if l % 2 == 0:
    k -= 1
    r -= 1
    c += 2
else:
    print("* " * r + S[k] + " *" * r)
    k -= 1
    r -= 1
    c += 2
  
for i in range(l // 2):
    print("* " * r + S[k - 1] + " " + "* " * c + S[k] + " *" * r)
    k -= 2
    r -= 1
    c += 2

k = input().strip()
q = 0
p = len(k) - 2
u = 0
n = []

for i in range(len(k) // 2):
    o = '* ' * q + k[u] + " " + '* ' * p + k[u + 1] + ' *' * q
    q += 1
    p -= 2
    u += 2
    n.append(o)
  
for i in n:
    print(i)
  
if len(k) % 2 != 0:
    print('* ' * q + k[u] + ' *' * q)
  
for i in n[::-1]:
    print(i)
'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[51] = "";
    int n, p = 0;
    scanf("%s%n", s, &n);
    int r = (n % 2) ? n / 2 + 1 : n / 2;
    char m[r][n];
    memset(m, '*', sizeof(m));
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j || j == n - i - 1)
            {
                m[i][j] = s[p++];
            }
        }
        
        for(int j = 0; j < n; j++)
        {
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
    
    for(int i = n / 2 - 1; i > -1; i--)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
}



#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101], mat[51][51];
    scanf("%s", s);
    int l = strlen(s), m = 0, a = 0;
    
    if(l % 2 == 0)
    {
        a = 1;
    }
    
    for(int i = 0; i <= l / 2 - a; i++)
    {
        for(int j = 0; j < l; j++)
        {
            if(i == j || j == l - i - 1)
            {
                mat[i][j] = s[m];
                printf("%c ", s[m++]);
            }
            else
            {
                mat[i][j] = '*';
                printf("* ");
            }
        }
        printf("\n");
    }
    
    m -= 1;
    
    for(int i = l / 2 - 1; i >= 0; i--)
    {
        for(int j = 0; j < l; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}
'''
