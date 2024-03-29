/*
There are M trainers and N students in a programming training center.
The head of the training center wants to form the maximum number of teams to train the students. 
So he has two different criteria which are given below. 
Criteria 1:
- Each team should consist of exactly one trainer and two students.
- Each trainer and student should belong to exactly one team. 
Criteria 2: 
- Each team should consist of exactly two trainers and one student.
- Each trainer and student should belong to exactly one team. 
The head of the training center wants to know which criteria form the maximum number of teams. 
The values of M and N are passed as input to the program. 
The program must print the output based on the following conditions. 
- If the criteria 1 makes more teams than the criteria 2 then print 1. 
- If the criteria 2 makes more teams than the criteria 1 then print 2. 
- If both criteria make an equal number of teams then print "ANYONE". 

Boundary Condition(s): 1 <= M, N <= 10^4

Input Format:  The first line contains M and N separated by a space.

Output Format: The first line contains 1 or 2 or ANYONE. 

Example Input/Output 1:

Input:  2 6 

Output: 1 

Explanation:

There are 2 trainers and 6 students. 
According to criteria 1, two teams can be formed. 
According to criteria 2, one team can be formed. 
Here criteria 1 makes more teams than criteria 2. 
Hence the output is 1.

Example Input/Output 2: 

Input:  6 4 

Output: 2 

Example Input/Output 3 

Input:  4 5 

Output: ANYONE

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int tri, stu;
    cin>>tri>>stu;
    int a = min(tri/2, stu), b = min(tri, stu/2);
    if (a>b)
        cout<<"2";
    else if(b>a)
        cout<<"1";
    else
        cout<<"ANYONE";
}

/*
C:
#include<stdio.h>
#include<stdlib.h>
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    int M, N;
    
    scanf("%d %d", &M, &N);
    
    int Criteria_1 = Min(M, N/2), Criteria_2 = Min(M/2, N);
    
    if(Criteria_1 > Criteria_2)
        printf("1");
    else if(Criteria_2 > Criteria_1)
        printf("2");
    else
        printf("ANYONE");
}


PY3:
m,n=map(int,input().split())
if n==1:
    print(2)
    exit()
if m==1:
    print(1)
    exit()
x,y=m,n
c1=0
c2=0
while True:
    m-=1
    n-=2
    if m==0 or n==0:
        break
    if n==1:
        break
    c1+=1
while True:
    x-=2
    y-=1
    if x==0 or y==0:
        break
    if x==1:
        break
    c2+=1
if c1>c2:
    print(1)
elif c1==c2:
    print("ANYONE")
else:
    print(2)
*/
