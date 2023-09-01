/*
There are X yellow balls, Y blue balls and Z red balls in a box.
Mr. ABC wants to choose A yellow balls, B blue balls and C red balls based on the following conditions. 
- B is always greater by exactly 1 than A. 
- C is always greater by exactly 1 than B. 
The values of X, Y and Z are passed as the input. 
The program must print the maximum number of balls that he can get from the box as the output. 

Boundary Condition(s):  3 <= X, Y, Z <= 1000 

Input Format:  The first line contains X, Y and Z separated by a space. 

Output Format: The first line contains the maximum number of balls that he can get from the box based on the given conditions. 

Example Input/Output 1: 

Input:  8 14 9 

Output: 24 

Explanation: 

If Mr. ABC chooses 7 yellow balls, 8 blue balls and 9 red balls from the box then he will get the maximum number of balls 24 as per the given conditions. 
Hence the output is 24.

Example Input/Output 2: 

Input:  13 4 6 

Output: 12

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum = a + b + c, i = 1, csum = 1 + 2 + 3;    
    while(true)
    {
        int k = (i + 1) + (i + 2) + (i + 3);
        if(k<=sum && i + 1<=a && i + 2<=b && i+3<=c)
        {
            csum = k;
        }
        else
        {
            cout<<csum;
            break;
        }
        i++;
    }
}


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int a,b,c,min;
    cin>>a>>b>>c;
    if(b<a+1) a-=(a+1-b);
    if(c<a+2) a-=(a+2-c);
    cout<<3*a+3;
}
/*
PY3:
x,y,z=map(int,input().split())
a,b,c=0,0,0
a=min(x,y-1,z-2)
b=a+1
c=b+1
print(a+b+c)

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    
    while(1)
    {
        if(!(X + 1 <= Y && X + 2 <= Z))
        {
            X -= 1;
        }
        else
        {
            break;
        }
    }
    
    printf("%d", (3 * X) + 3);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z,a=0,b=0,c=0;
    scanf("%d%d%d",&x,&y,&z);
    b++;c+=2;
    for(int i=0;i<x;i++)
    {
        if(a<x && b<y && c<z)
        {
            a++;b++,c++;
        }
    }
    printf("%d",a+b+c);

}
*/
