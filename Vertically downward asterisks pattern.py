'''
The program must accept a list of integers as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= Each integer value <= 100 

Input Format:  The first line contains the list of integers.

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  5 6 1 4 2

Output: 

*****
**-**
**-*- 
**-*-
**--- 
-*---

Example Input/Output 2: 

Input:  7 3 4 5 
Output: 

**** 
****
**** 
*-**
*--* 
*--- 
*---

SOLUTION:
'''

Liz = list(map(int, input().split()))

for i in range(max(Liz)):
    for j in Liz:
        if i < j:
            print('*', end = "")
        else:
            print('-', end = "")
    print()

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100], k = 0, sum = 0;
    
    while(scanf("%d ", &arr[k++]) > 0)
    {
        k--;
        
        if(arr[k] > sum)
        {
            sum = arr[k];
        }
        
        k++;
        
    }
    
    k--;
    
    for(int i = 0; i < sum; i++)
    {
        for(int j = 0; j < k; j++)
        {
            if(arr[j] > 0)
            {
                printf("*");
                arr[j]--;
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}



#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

    vector<int> v;
    int temp;
    int mx = -1;

    while(cin>>temp) 
    {
        v.push_back(temp);
        mx = max(mx, temp);
    }

    for(int i = 0; i < mx; i++)
    {
        for(int j = 0; j < v.size(); j++)
        {
            if(v[j])
            {
                cout<<"*";
                v[j]--;
            }
            else
            {
                cout<<"-";
            }
        }
        cout<<endl;
    }
}
'''
