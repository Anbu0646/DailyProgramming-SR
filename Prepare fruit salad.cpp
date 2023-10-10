/*
There are X kgs of Apple, Y kgs of Banana and Z kgs of Watermelon in a fruit shop. 
To prepare a box of fruit salad (7kgs), the fruits are required in the ratio of 1 : 2 : 4 (Apple : Banana : Watermelon). 
The program must print the maximum number of boxes of fruit salad that can be prepared from the given quantity of fruits as the output. 

Boundary Condition(s): 0 <= X, Y, Z <= 1000 

Input Format:  The first line contains X, Y and Z separated by a space. 

Output Format: The first line contains the maximum number of boxes of fruit salad that can be prepared from the given quantity of fruits. 

Example Input/Output 1: 

Input:  2 5 7 

Output: 1

Explanation:

There are 2kgs of Apple, 5kgs of Banana and 7kgs of Watermelon. 
The ratio of fruits required to prepare a box of fruit salad is 1 : 2 : 4 (Apple : Banana : Watermelon).
Here, only 1 box of fruit salad is possible to prepare from the 2kgs of Apple, 5kgs of Banana and 7kgs of Watermelon. 
So 1 is printed as the output. 

Example Input/Output 2: 

Input:  4 8 14 

Output: 3 

Example Input/Output 3: 

Input:  2 10 3

Output: 0

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int A, B, W;
    cin>>A>>B>>W;
    cout<<min(A/1, min(B/2, W/4));
}

/*
PY3:
X, Y, Z = input().split()
X = int(X); Y = int(Y); Z = int(Z)
#print(X, Y, Z)
Count = 0
while X >= 1 and Y >= 2 and Z >= 4:
    Count += 1
    Z -= 4
    Y -= 2
    X -= 1
print(Count)

X,Y,Z=map(int,input().split()) 
print(min(X//1,Y//2,Z//4))


C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 2, y = 10, z = 3, ctr = 0;
    scanf("%d %d %d", &x, &y, &z);
    while(1)
    {
        x = x - 1, y = y - 2, z = z - 4;
        if(x >= 0 && y >= 0 && z >= 0)
        {
            ctr++;
        }
        else
        {
           printf("%d", ctr);
           break;
        }
    }
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x != 0 && y != 0 && z != 0)
    {
        printf("%d", z/4);
    }
    else    
    {
        printf("0");
    }
    return 0;
}
*/
