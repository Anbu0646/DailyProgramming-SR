/*
The height of N cats is passed as the input.
The program must print the height of the cats graphically as a column chart represented by # and - as shown in the Example Input/Output section. 

Boundary Condition(s): 

2 <= N <= 100
1 <= Height of each cat <= 100 

Input Format: 

The first line contains N. 
The second line contains N integers representing the height of N cats separated by a space. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

6 
10 4 2 6 7 2 

Output: 

# - - - - - 
# - - - - - 
# - - - - - 
# - - - # - 
# - - # # - 
# - - # # - 
# # - # # -
# # - # # - 
# # # # # # 
# # # # # # 

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int a[n], m = 0;
    
    for(auto & x:a)
    {
        cin>>x;
        m = max(m, x);
    }
    
    char mat[m][n];
    memset(mat, '-', sizeof(mat));
    
    for(int i=0; i<n; i++)
    {
        int c = a[i], j = m - 1;
        while(c--)
        {
            mat[j][i] = '#';
            j--;
        }
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, max = 0;
    scanf("%d", &N);
    int Arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d ", &Arr[i]);
        if(Arr[i] > max)
        {
            max = Arr[i];
        }
    }
    
    //printf("%d\n", max);
    
    for(int i=max; i>0; i--, printf("\n"))
    {
        for(int j=0; j<N; j++)
        {
            if(Arr[j] >= i)
            {
                printf("# ");
            }
            else
            {
                printf("- ");
            }
        }
    }
}

PY3:
n = int(input())
l = list(map(int,input().strip().split()))
for i in range(max(l)):
    for j in range(len(l)):
        if max(l)-i<=l[j]:
            print("#",end=" ")
        else:
            print("-",end=" ")
    print()
*/
