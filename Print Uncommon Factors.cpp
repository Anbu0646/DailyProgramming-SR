/*
The program must accept two integers X and Y as the input. 
The program must print the uncommon factors of X and Y in descending order as the output. 
If there is no uncommon factor then the program must print -1 as the output. 

Boundary Condition(s): 1 <= X, Y <= 1000

Input Format:  The first line contains X and Y separated by a space. 

Output Format: The first line contains either the uncommon factors of X and Y or -1. 

Example Input/Output 1: 

Input:  24 100

Output: 100 50 25 24 20 12 10 8 6 5 3 

Explanation: 

The factors of 24 are 1, 2, 3, 4, 6, 8, 12 and 24. 
The factors of 100 are 1, 2, 4, 5, 10, 20, 25, 50 and 100. 
Here the uncommon factors are 3, 5, 6, 8, 10, 12, 20, 24, 25, 50 and 100. 
So they are printed in descending order as the output. 

Example Input/Output 2: 

Input: 36 36 

Output: -1

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;
int fact(int z, int x, int y)
{
    int s = 0;
    if(x % z == 0)
    {
        s++;
    }
    if(y % z == 0)
    {
        s++;
    }
    return s;
}

int main(int argc, char** argv)
{
    int x, y;
    
    cin>>x>>y;
    
    int k = max(x, y);

    vector<int> nums;
    
    int a;
    
    for(int i=1; i<=k; i++)
    {
      int j = fact(i, x, y);
      if(j == 1) nums.push_back(i);
    }

    sort(nums.rbegin(), nums.rend());
    
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    if(nums.empty()) 
        cout<<"-1";
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, c = 0;
    scanf("%d %d", &x, &y);
    for(int i = (x >= y) ? x : y; i >=1; i--)
    {
        if((x % i == 0 && y % i != 0) || (x % i != 0 && y % i == 0))
        {
            printf("%d ", i);
            c++;
        }
    }
    if(c == 0)
        printf("-1");
}


PY3:
X, Y = map(int, input().split())
Xfac = [i for i in range(1, X + 1) if X % i == 0]
Yfac = [j for j in range(1, Y + 1) if Y % j == 0]
Xuncomm = [*set(Xfac).difference(set(Yfac))]
Yuncomm = [*set(Yfac).difference(set(Xfac))]
for i in Yuncomm:
    Xuncomm.append(i)
Xuncomm = sorted(Xuncomm, reverse = True)
if len(Xuncomm) > 0:
    print(*Xuncomm)
else:
    print(-1)
*/
