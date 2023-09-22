/*
The program must accept an integer N as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= N <= 10^17 

Input Format:  The first line contains N. 

Output Format: The first three lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  45 

Output: 

+--+ 
|45| 
+--+ 

Example Input/Output 2: 

Input:  12045 

Output: 

+-----+ 
|12045|
+-----+

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    int c = 0;
    long long int k=n;
    
    while(k>0)  
    {
        c++;
        k/=10;
    }
    
    cout<<"+";
     
    for(int i=0;i<c;i++)
    {
        cout<<"-";
    }
  
    cout<<"+";
    cout<<"\n|"<<n<<"|";
    cout<<"\n+";
    
    for(int i=0; i<c; i++)
    {
        cout<<"-";
    }
    cout<<"+";

}

/*
PY3:
N = int(input())
Len = len(str(N))
Pattern_1 = '+' + '-' * Len + '+'
print(Pattern_1)
print("|%d|"%N)
print(Pattern_1)

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n;
    int c = 0, i;
    scanf("%ld", &n);
    
    long int m = n;
    
    while(m > 0)
    {
        c++;
        m/=10;
    }
    
    printf("+");
    
    for(i=0; i<c; i++)
    {
        printf("-");
    }
    
    printf("+\n");
    printf("|%ld|\n", n);
    printf("+");
    
    for(i=0; i<c; i++)
    {
        printf("-");
    }
    
    printf("+");
}
*/
