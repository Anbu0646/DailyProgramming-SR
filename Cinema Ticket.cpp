/*
There are N people at the cinema box office standing in a huge line to buy the tickets. 
Each of them has a single 100, 50 or 25 rupee coin. 
The program accepts N integers representing the coins held by the N people as the input. 
A movie ticket costs 25 rupees. The program must print YES if the booking clerk can sell a ticket to each person and give the change if he initially has no money and sells the tickets strictly in the order 
people follow in the line. 
Else the program must print NO as the output. 

Boundary Condition(s): 1 <= N <= 100 

Input Format:  

The first line contains N. 
The second line contains N integers representing the coins held by the N people separated by a space. 

Output Format:  The first line contains YES or NO. 

Example Input/Output 1: 

Input: 

4 
25 25 50 50 

Output: YES

Explanation:

Initially, the booking clerk has 0 rupee. 
The first person in the queue has a 25 rupee coin. So he gets the ticket. 
Now the booking clerk has 25 rupees (one 25 rupee coin). 
The second person in the queue has a 25 rupee coin. So he gets the ticket. 
Now the booking clerk has 50 rupees (two 25 rupee coins). 
The third person in the queue has a 50 rupee coin. So he gets the ticket and also he gets the change of 25 rupees as the balance. 
Now the booking clerk has 75 rupees (one 25 rupee coin, one 50 rupee coin). 
The fourth person in the queue has a 50 rupee coin. So he gets the ticket and also he gets the change of 25 rupees as the balance. 
Now the booking clerk has 100 rupees (two 50 rupee coins). 
Here all the four tickets are sold out. So YES is printed. 

Example Input/Output 2: 

Input: 

4 
50 50 25 25

Output: NO 

Example Input/Output 3:

Input: 

2 
25 100 

Output: NO

SOLUTION:
*/
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[3]={1,0,0};
    if(a[0]!=25){
        cout<<"NO";
        return 0;
    }
    for(int i=1;i<n;i++){
        if(a[i]==25) b[0]++;
        else{
            if(a[i]==50){
                if(b[0]>0){
                    b[1]++;
                    b[0]--;
                }
                else{
                    cout<<"NO";
                    return 0;
                }
            }
            else{
                if(b[1]>0 && b[0]>0){
                    b[0]--;
                    b[1]--;
                    b[2]++;
                }
                else if(b[0]>2){
                    b[0]-=3;
                    b[2]++;
                }
                else{
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";


}


/*

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Arr[N], Count_1 = 0, Count_2 = 0, Flag = 0;
    
    for(int i=0; i<N; scanf("%d ", &Arr[i++]));
    
    for(int i=0; i<N; i++)
    {
        if(Arr[i] == 25)
        {
            Count_1 += 1;
        }
        else if(Arr[i] == 50)
        {
            if(Count_1 > 0)
            {
                Count_1 -= 1;
                Count_2 += 1;
            }
            else
            {
                Flag = 1;
            }
        }
        else
        {
            if(Count_1 > 0 && Count_2 > 0)
            {
                Count_1 -= 1;
                Count_2 -= 1;
            }
            else if(Count_1 >= 3)
            {
                Count_1 -= 1;
            }
            else
            {
                Flag = 1;
            }
        }
    }
    
    printf("%s", (Flag == 0) ? "YES" : "NO");
}

PY3:

n=int(input())
a=list(map(int,input().split()))
t,f,h=0,0,0
s=0
for i in range(len(a)):
    if a[i]==25:
        t+=1
    elif a[i]==50:
        t-=1
        f+=1
    elif a[i]==100:
        if t>0 and f>0:
            t-=1
            f-=1
        else:
            t-=3
    if t<0 or f<0 or h<0:
        print("NO");
        exit()
print("YES")

*/
