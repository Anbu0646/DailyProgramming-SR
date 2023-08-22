/*
The program accept a string S and N pairs as the input. 
Each pair contains two integers P1 and P2 representing the position of two characters in the string S. 
For each pair, the program must swap the characters in P1 and P2. 
Finally, the program must print the modified string S as the output. 

Note: The values of P1 and P2 are always not equal. 

Boundary Condition(s): 

2 <= Length of S <= 1000 
1 <= N <= 1000 1 <= P1, P2 <= Length of S 

Input Format: 

The first line contains S. 
The second line contains N. 
The next N lines each contain two integers representing P1 and P2 separated by a space. 

Output Format: 

The first line contains the modified string S. 

Example Input/Output 1: 

Input:  

Cyclone 
2 
1 3 
7 5 

Output:  cyCleno 

Explanation: 

For the first pair, the characters in the positions 1 and 3 are swapped. 
Now the string becomes "cyClone". For the second pair, the characters in the positions 7 and 5 are swapped. 
Now the string becomes "cyCleno". 
Hence the output is cyCleno. 

Example Input/Output 2: 

Input: 

SkillRack 
7 
1 6 
2 7 
3 8 
9 4 
6 5 
7 6 
7 8 

Output: RackSkill

SOLUTION:
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    string st;
    cin>>st;
    int n;
    cin>>n;
    for(int x, y, i = 0; i < n; i++)
    {
        cin>>x;
        cin>>y;
        swap(st[x - 1], st[y - 1]);
    }
    cout<<st;
}

/*
PY3:
String = input().strip()
Len = int(input())
Ord = list(String)

for i in range(Len):
    pair_1, pair_2 = map(int, input().split())
    Ord[pair_1 - 1], Ord[pair_2 - 1] = Ord[pair_2 - 1], Ord[pair_1 - 1]

print(*Ord, sep = " ")


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[1000];    
    int n, b, c, i;
    scanf("%s", a);    
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &b, &c);
        char t = a[b - 1];
        a[b - 1] = a[c - 1];
        a[c - 1] = t;
    }
    
    printf("%s", a);
}
*/
