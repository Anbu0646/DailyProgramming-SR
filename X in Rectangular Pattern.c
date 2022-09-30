/*
The program must accept an integer N as the input. The program must print the pattern as shown in the Example Input/Output sections.

Boundary Condition(s): 5 <= N <= 50 

Input Format:  The first line contains the value of N. 
Output Format: The first N lines contain the desired pattern as shown in the Example Input/Output sections. 

Example Input/Output 1: 

Input:  15
Output: ***************
        **-----------**
        *-*---------*-*
        *--*-------*--*
        *---*-----*---*
        *----*---*----*
        *-----*-*-----*
        *------*------*
        *-----*-*-----*
        *----*---*----*
        *---*-----*---*
        *--*-------*--*
        *-*---------*-*
        **-----------**
        ***************
        
Solution:
*/
//=>Sekat:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int ctr1=0; ctr1<n; ctr1++, printf("\n"))
        for(int ctr2=0; ctr2<n; ctr2++)
            ((ctr1==ctr2) || (ctr1==0) || (ctr1==n-1) || (ctr2==0) || (ctr2==n-1) || ((ctr1+ctr2+1)==n)) ? (printf("*")) : (printf("-"));
}

//=>JustNothingVishal
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;printf("\n"),i++){
        
        for(int j=1;j<=a;j++){
            if(a-i+1==j || i==j || j==1 || j==a || i==1 || i==a){
                printf("*");
            }
            else{
                printf("-");
            }
        }
    }
}

//=>UNFOUNDER & Ragav
/*
#GoodBoyzCoding0646 & MeMyselfandJ:
n=int(input())
for i in range(0, n):
    for j in range(0, n):
        print("*", end=""if(i==j or i==0 or j==0 or j==n - 1 or i==n - 1 or (i+j+1)==n) else "-", end="")
          
 #GoodBoyzCoding0646 & MeMyselfandJ:
n=int(input())
for i in range(0, n):
    for j in range(0, n):
        print(("*", end="")if(i==j or i==0 or j==0 or j==n - 1 or i==n - 1 or (i+j+1)==n) else ("-", end=""))
 */ 
#GoodBoyzCoding0646 & MeMyselfandJ:
n=int(input())
for i in range(0, n):
    for j in range(0, n):
        if(i==j or i==0 or j==0 or j==n-1 or i==n-1 or i+j+1==n):print("*", end="")
        else:print("-", end="")
    print()
