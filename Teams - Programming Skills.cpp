/*
There are N students in a class (where N is always even). 
Each student has programming skill which is represented by an integer. 
The class tutor wants to form N/2 teams based on the following conditions. 
- Each team should consist of exactly two students. 
- Each student should belong to exactly one team. 
- Two students can form a team only if their programming skills are equal. 
Students can solve problems to increase their programming skill.
If a student solves K problems then his/her programming skill is increased by K. 
The class tutor wants to know the minimum total number of problems T required by the students to form exactly N/2 teams.
The program must accept N integers representing the programming skill of N students as the input. 
The program must print the value of T as the output. 

Boundary Condition(s):

2 <= N <= 10^4 
1 <= Each integer value <= 1000

Input Format: 

The first line contains N. 
The second line contains N integers separated by a space. 

Output Format: The first line contains T. 

Example Input/Output 1: 

Input:

6 5 
10 2 3 14 5 

Output: 5

Explanation: 

The three possible teams are (5, 5), (10, 14) and (2, 3). 
In the first team, their programming skills are equal (5, 5). 
In the second team, their programming skills are not equal (10, 14).To make them equal, one of the students need to solve 4 problems. 
In the third team, their programming skills are not equal (2, 3). To make them equal, one of the students need to solve 1 problem. 
So totally 5 problems are required to form three teams. 

Example Input/Output 2: 

Input: 

2 
40 100 

Output: 60

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
  int n;
  cin>>n;
  int a[n];
  for(int &i:a) cin>>i;
  sort(a, a+n);
  int ans = 0;
  for(int i=0; i<n; i += 2)
  {
      ans += abs(a[i] - a[i + 1]);
  }
  cout<<ans;
}


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int size, sum = 0;
    cin>>size;
    int arr[size];
    
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr, arr+size);
    
    for(int i=0; i<size; i++)
    {
        sum += arr[i + 1] - arr[i];
        i++;
        
    }
    cout<<sum;
}

/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, su = 0;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n - 1; i += 2)
    {
        su += (a[i + 1] - a[i]);
    }
    
    printf("%d", su);
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    
    for(int i=0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<N; i++)
    {
        for(int j=i + 1; j<N; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int D = 0;
    for(int i=0; i < N; i += 2)
    {
        if(arr[i] != arr[i + 1])
        {
            D += (arr[i] - arr[i + 1]);
        }
    }
    printf("%d", D);
}

PY3:
N = int(input())
Arr = list(map(int, input().split()))

Arr.sort()

Sum = 0

for i in range(0, N, 2):
    Teams = [Arr[i], Arr[i + 1]]
    Skills = max(Teams) - min(Teams)
    Sum += Skills

print(Sum)
*/
