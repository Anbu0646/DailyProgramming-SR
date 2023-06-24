/*
The program must accept two integers N and X as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 

1 <= N <= 50 
1 <= X <= 200 

Input Format:  The first line contains the values of N and X separated by a space. 

Output Format: The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  4 10 

Output: 

1 * * 10 
2 - - 9 
3 - - 8
4 5 6 7 

Example Input/Output 2: 

Input: 5 19 

Output: 

1 16 15 14 13 
2 - - - 12 
3 - - - 11 
4 - - - 10 
5 6 7 8 9

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n, x;
    cin>>n>>x;

    int mat[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            mat[i][j]  =  -1;
    }

    int ctr = 1;

    for(int i=0; i<n; i++)
        mat[i][0] = ctr++;

    for(int i=1; i<n; i++)
    {
        mat[n - 1][i] = ctr++;
    }

    for(int i = n - 2; i>=0; i--)
        mat[i][n - 1] = ctr++;
    
    for(int i = n - 2; i>0; i--)
        mat[0][i] = ctr++;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        
            if(mat[i][j] != -1 && mat[i][j] <= x)
                  cout<<mat[i][j]<<" ";
            else if(mat[i][j]>x)
            {
                  cout<<"* ";
            }
            else cout<<"- ";
        }
    cout<<endl;
    }      

}

/*
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin >> n >> x;
    int mat[n][n];
    
    int inc = 1;
    for(int i=0;i<n;i++)
    {
        if(inc<=x)
            mat[i][0] = inc++;
        else{
            mat[i][0]=-1;
            inc++;
        }
    }
    
    for(int i=1;i<n;i++)
    {
        if(inc<=x)
           mat[n-1][i]=inc++;
        else
        {
            mat[n-1][i]=-1;
            inc++;
        }
    }
    
    for(int i=n-2;i>=0;i--)
    {
        if(inc<=x)
        {
            mat[i][n-1]=inc++;
        }
        else
        {
            mat[i][n-1]=-1;
            inc++;
        }
    }
    
    for(int i=n-2;i>0;i--)
    {
        if(inc<=x)
            mat[0][i]=inc++;
        else
        {
            mat[0][i]=-1;
            inc++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n-1 || j==n-1 || i==0 || j==0)
            {
                if(mat[i][j]==-1)
                    cout << "* ";
                else
                 cout << mat[i][j] << " ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }


}
*/
