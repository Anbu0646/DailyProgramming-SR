/*
The program must accept two integers X and Y as the input. 
The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 1 <= X < Y <= 1000

Input Format:  The first line contains X and Y separated by a space.

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1:

Input:  1 5 

Output: 

+--+
|01| 
|02| 
|03| 
|04|
|05| 
+--+ 
|15|
+--+ 

Example Input/Output 2: 

Input:  110 113 

Output: 

+---+
|110| 
|111| 
|112| 
|113|
+---+
|446|
+---+

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

void des(int n)
{
    cout<<'+';
    while(n)
    {
        cout<<'-';
        n--;
    }
    cout<<'+'<<endl;
}

int main(int argc, char** argv)
{
    int x, y;
    cin>>x>>y;
    int z = (y - x + 1) * (x + y) / 2;
    int k = floor(log10(z) + 1);
    des(k);
    while(x <= y)
    {
        printf("|%0*d|\n", k, x);
        x++;
    }
    des(k);
    cout<<'|'<<z<<'|'<<endl;
    des(k);
}

/*
PY3:
X, Y = map(int, input().split())
Sum = 0

for i in range(X, Y + 1):
    Sum += i

Len = len(str(Sum))

Pattern = '+' + '-' * Len + '+'

print(Pattern)

for i in range(X, Y + 1):
    Length = len(str(i))
    print('|' + '0' * (Len - Length) + str(i) + '|')

print(Pattern)
print('|' + str(Sum) + '|')
print(Pattern)

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, a = 0, c = 0, i, k;
    scanf("%d %d", &x, &y);
    
    for(i=x; i<=y; i++)    
    {
        a = a + i;
    }
    
    k = a;
    
    while(a > 0)
    {
        a = a / 10;
        c++;
    }
    
    char b[c + 2];
    b[0] = b[c + 1] = '+';
    
    for(i=1; i<c + 1; i++)
    {
        b[i] = '-';
    }
    printf("%s\n", b);
    for(i=x; i<=y; i++)
    {
        printf("|");
        printf("%0*d", c, x);
        x++;
        printf("|");
        printf("\n");    
    }
    printf("%s\n", b);
    printf("|%d|\n", k);

    printf("%s", b);
}
*/
