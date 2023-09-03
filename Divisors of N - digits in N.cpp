/*
The program must accept an integer N as the input. 
The program must find all the combinations of the digits in the integer N. 
Then the program must print the combinations which are the factors of N in ascending order as the output. 
If there is no such combination then the program must print -1 as the output. 

Note: Exclude 1 and N from the factors of N. 

Boundary Condition(s): 1 <= N <= 999999999 

Input Format:  The first line contains N. 

Output Format: The lines each contain an integer or the first line contains -1. 

Example Input/Output 1: 

Input:  12345 

Output: 

3 
5 
15 

Explanation: 

The integer N (12345) is divisible by 3, 5 and 15 which are all the combinations of the digits in the integer 12345. 
3 5 15 are already in sorted order.
So the output is 3 5 15. 

Example Input/Output 2: 

Input:  21

Output: -1

SOLTUION:
*/
#include <bits/stdc++.h>
 
using namespace std;

void findSubsequence(string a,string b,vector<string> &vec){
    if(a.empty() && !b.empty()){
        vec.push_back(b);
        return;
    }
    if(a.empty() && b.empty()){
        return;
    }
    findSubsequence(a.substr(1),b+a[0],vec);
    findSubsequence(a.substr(1),b,vec);
}
int strToNum(string s){
    int num=0;
    for(int i=0;i<s.size();i++){
        num=(num*10)+(s[i]-'0');
    }
    return num;
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    string output="";
    vector<string> vec;
    findSubsequence(s,output,vec);
    long x=stol(s);
    sort(vec.begin(),vec.end());
    vector<int> vec1;
    for(string s1:vec){
        int x1=strToNum(s1);
        if(x1!=0 && x%x1==0 && x1!=1 && x1!=x ){
            vec1.push_back(x1);
        }
    }
    int flag=0;
    sort(vec1.begin(),vec1.end());
    for(int i:vec1){
        cout<<i<<endl;
        flag=1;
    }
    if(!flag)cout<<"-1";

}
/*
PY3:
from itertools import combinations
n=input().strip();m=[]
for i in range(1,len(n)):
    for j in combinations(n,i):
        x=int(''.join(j))
        if x>=2 and int(n)%x==0:m.append(x)
print(*sorted(m) if m else [-1],sep='\n')

C:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comp(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
void fndfact(int n, int *fact, int *numfact){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            fact[*numfact] = i;
            (*numfact)++;
        }
    }
}
void fndcomb(int n, int *comb, int *numcomb){
    char s1[100];
    sprintf(s1,"%d",n);
    int l1 = strlen(s1);
    for(int i=1;i<(1<<l1);i++){
        int num=0;
        for(int j=0;j<l1;j++){
            if(i & (1<<j)){
                num = num*10+(s1[j]-'0');
            }
        }
        comb[*numcomb] = num;
        (*numcomb)++;
    }
}
int main(){
    int n,found=0;
    scanf("%d",&n);
    int fact[100],numfact=0;
    fndfact(n, fact, &numfact);
    int comb[1000], numcomb =0;
    fndcomb(n, comb, &numcomb);
    qsort(comb,numcomb,sizeof(int),comp);
    for(int i=0;i<numcomb;i++){
        for(int j=0;j<numfact;j++){
            if(comb[i]==fact[j]){
                printf("%d\n", comb[i]);
                found=1;
                break;
            }
        }
    }
    if(!found){
        printf("-1\n");
    }
}
*/
