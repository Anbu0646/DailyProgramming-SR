/*
The program must accept a fraction X/Y as the input. 
X represents the size of the pattern and Y represents the number of digits required to represent each integer in the pattern.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 

2 <= X <= 50
1 <= Y <= 15 

Input Format:  The first line contains X/Y. 

Output Format: The first X lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5/3 

Output: 

001 002 003 004 005 
006 007 008 009 010 
011 012 013 014 015 
016 017 018 019 020 
021 022 023 024 025 

Example Input/Output 2: 

Input:  3/5 

Output:

00001 00002 00003 
00004 00005 00006 
00007 00008 00009 

Example Input/Output 3:

Input: 10/1 

Output: 

1 2 3 4 5 6 7 8 9 0
1 2 3 4 5 6 7 8 9 0 
1 2 3 4 5 6 7 8 9 0 
1 2 3 4 5 6 7 8 9 0 
1 2 3 4 5 6 7 8 9 0 
1 2 3 4 5 6 7 8 9 0
1 2 3 4 5 6 7 8 9 0 
1 2 3 4 5 6 7 8 9 0 
1 2 3 4 5 6 7 8 9 0
1 2 3 4 5 6 7 8 9 0

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, z = 1;
    char a;
    scanf("%d%c%d", &x, &a, &y);
    for(int i=0; i < x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(z == pow(10, y))
            {
                z = 0;
            }
            printf("%0 * d ", y, z);
            z++;
        }
        printf("\n");
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, l, b = 1;
    scanf("%d/%d", &r, &l);
    for(int i=0; i < r; i++)
    {
        for(int j=0; j < r; j++)
        {
            int y = b, g = 0;
            while(y > 0)
            {
                g++;
                y /= 10;
            }
            if(g<l)
            {
                for(int k=0; k < l - g; k++)
                {
                    printf("0");
                }
            }
            else if(g > l)
            {
                b = 0;
            }
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }
}

PY3:
a, b = map(int, input().split('/'))
c = 1
for j in range (a):
    for k in range(a):
        if len(str(c)) > b:
            c = 0
        print(str(c).zfill(b), end = " ")
        c += 1
    print()
*/
