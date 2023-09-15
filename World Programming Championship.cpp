/*
In a class, there are N students. 
For each student, the number of times he/she has participated in the SR world programming championship is passed as the input to the program. 
According to the SR world programming championship rules, each person can participate in the world championship at most 5 times. 
The class tutor is recently gathering teams to participate in the world championship with the following rules. 

- Each team must consist of exactly three people. 
- Any person cannot be a member of two or more teams. 

The program must print the maximum number of teams can the tutor make if he wants each team to participate in the world championship with the same members at least K times (the value of K is also passed as the input). 

Boundary Condition(s): 

1 <= N <= 100 
1 <= K <= 5 
0 <= Each integer value <= 5 

Input Format: 

The first line contains N and K separated by a space. 
The second line contains N integers separated by a space. 

Output Format: The first line contains the maximum number of teams based on the given conditions. 

Example Input/Output 1: 

Input: 

5 1 
0 4 5 1 0 

Output: 1 

Explanation: 

The tutor can form only one team as per the given conditions. 
It can be either (0 4 1) or (0 1 0). 
Hence the output is 1.

Example Input/Output 2: 

Input: 

6 4 
0 1 2 3 4 5 

Output: 0 

Example Input/Output 3: 

Input: 

7 3 
5 2 1 0 0 2 1 

Output: 2

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, k;
    cin>>n>>k;
    int a[n], count = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a[i] += k;
        if(a[i] <= 5)
            count++;
    }
    cout<<count/3;
}

/*
PY3:
n, m = map(int, input().split()) 
l = list(map(int, input().split()))
a=[x for x in l if 5 - m >= x]
print(len(a)//3

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, k, x, max = 0, j;
    scanf("%d %d", &n, &k);
    int a[n], i = 0;
    for(int j=0; j<n; j++)
    {
        scanf("%d ", &x);
        if(x < 5)
        {
            a[i] = x;
            if(max < x)
            max = x;
            i++;
        }
    }
    if(i < 3)
    printf("0");
    else 
    {
        for(j=0; j<i; j++)
        {
            for(int k=j + 1; k<i; k++)
            {
                if(a[j] > a[k])
                {
                    int temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
            if(a[j] + k > 5)
            {
                break;
            }
        }
        printf("%d", (j / 3));
    }
}
*/
