/*
The program must accept two string values S1 and S2 and an integer K representing the number of rotations as the input. 
The program must print YES if the string S2 is formed by rotating the string S1 for K times in either clockwise or anti-clockwise direction as the output. 
Else the program must print NO as the output. 

Boundary Condition(s): 

1 <= Length of S1, S2 <= 100 
1 <= K <= 1000 

Input Format: 

The first line contains S1. 
The second line contains S2. 
The third line contains K. 

Output Format: 

The first line contains YES or NO. 

Example Input/Output 1: 

Input: 

skillrack 
lrackskil 
5 

Output: 

YES 

Explanation: 

After rotating the string skillrack for 5 times in clockwise direction, the string becomes lrackskil which is equal to S2. 
So YES is printed. 

Example Input/Output 2: 

Input: 

watermelon 
ermelonwat 
23 

Output: YES 

Example Input/Output 3: 

Input: 

ethernet 
netether 
4 

Output: NO

SOLUTION:
*/

#include <stdio.h>
#include <string.h>

void rotateString(char* str, int k) 
{
    int len = strlen(str);
    k = k % len;

    char temp[len + 1];
    strcpy(temp, str);

    for (int i = 0; i < len; i++) {
        str[i] = temp[(i + k) % len];
    }
}

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);

    int c;
    scanf("%d", &c);

    c = c % strlen(a);

    char temp[strlen(a) + 1];
    strcpy(temp, a);

    rotateString(a, c);
    rotateString(temp, strlen(a) - c);

    if (strcmp(b, a) == 0 || strcmp(b, temp) == 0) 
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }

    return 0;
}
/*
PY3:

from collections import deque

one=input().strip()
two=input().strip()

a=deque(one)
b=deque(two)

n=int(input())

c=deque(one)
d=deque(one)

c.rotate(-n)
d.rotate(n)


if c==b or d==b:
    print("YES")
else:
    print("NO")


s1 = input().strip()
s2 = input().strip()
k = int(input()) % len(s1)
print("YES" if s1[k:]+s1[:k] == s2 or s1[-k:] + s1[:-k] == s2 else "NO")


*/
