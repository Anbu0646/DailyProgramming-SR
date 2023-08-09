/*
The program must accept the X and Y co-ordinates of any of the three vertices of a rectangle and print if it is a RECTANGLE or a SQUARE. 

Note: A square is also a rectangle with length equal to it's breadth. 

Boundary Condition(s): -100 <= X, Y <= 100 

Input Format: The first three lines each contain X and Y co-ordinates separated by a space. 

Output Format: The first line contains SQUARE or RECTANGLE.

Example Input/Output 1: 

Input: 

2 2 
4 2 
2 4 

Output: 

SQUARE 

Example Input/Output 2: 

Input: 

 0 1
-2 3
 5 6

Output: RECTANGLE

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    float d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float d2 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    float d3 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
  
    if(d1 == d2 || d2 == d3 || d3 == d1)
       cout <<"SQUARE";
    else
       cout <<"RECTANGLE";
}

/*
PY3:

def dist(x1, y1, x2, y2):
    return (x1 - x2) ** 2 + (y1 - y2) ** 2
    
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))
if len({dist(*a, *b), dist(*a, *c), dist(*b, *c)}) == 2: print("SQUARE")
else: print("RECTANGLE")
*/
