/*
The program must accept two integers X and Y as the input.
The program must form an integer N by concatenating the last two digits of X and the first two digits of Y. 
Then the program must print the integer N as the output. 

Boundary Condition(s): 10 <= X, Y <= 10^7 

Input Format:  The first line contains X and Y separated by a space. 

Output Format: The first line contains N. 

Example Input/Output 1: 

Input:  2390 1278

Output: 9012

Explanation: 

The last two digits of the first integer 2390 are 9 and 0.
The first two digits of the second integer 1278 are 1 and 2. 
The integer which is formed by concatenating 90 and 12 is 9012. 
Hence the output is 9012.

Example Input/Output 2: 

Input:  2000 901 

Output: 90

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

    int x, y;
    cin>>x>>y;

    vector<int>nums1;
    vector<int>nums2;

    while(x > 0)
    {
        nums1.push_back(x % 10);
        x /= 10;
    }
  
    reverse(nums1.begin(), nums1.end());

    while(y > 0)
    {
        nums2.push_back(y % 10);
        y /= 10;
    }
  
    reverse(nums2.begin(), nums2.end());
    vector<int>ans;
    ans.push_back(nums1[nums1.size() - 2]);
    ans.push_back(nums1[nums1.size() - 1]);
    ans.push_back(nums2[0]);
    ans.push_back(nums2[1]);
    int z = 0;
    for(int i=0; i<ans.size(); i++)
    {
        if(ans[i] == 0 && z == 0)
        {
          continue;
        }
        else if(ans[i] == 0 && z == 1)
        {
            cout<<ans[i];
        }
        else if(ans[i] != 0)
        {
            cout<<ans[i];
            z = 1;
        }
    }
}

/*
PY3:
X, Y = input().split()
print(int(X[-2:] + Y[:2]))

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    char c[4];
    c[0] = a[strlen(a) - 2];
    c[1] = a[strlen(a) - 1];
    c[2] = b[0];
    c[3] = b[1];
    int m = 0;
    m += (1000 * (c[0] - '0'));
    m += (100 * (c[1] - '0'));
    m += (10 * (c[2] - '0'));
    m += c[3] - '0';
    printf("%d", m);
}
*/
