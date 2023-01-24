/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 
 
 Boundary Condition(s): 1 <= N <= 100 
 
 Input Format:  The first line contains the value of N. 
 Output Format: The first N lines containing the desired pattern as shown in the Example Input/Output section. 
 
 Example Input/Output 1: 
 
 Input:  5 
 Output: 1 2 3 4 5 
         * * * 4
         * * 3 
         * 2
         1 2 3 4 5 
 
 Example Input/Output 2: 
 
 Input:  8 
 Output: 1 2 3 4 5 6 7 8 
         * * * * * * 7 
         * * * * * 6 
         * * * * 5
         * * * 4
         * * 3
         * 2 
         1 2 3 4 5 6 7 8

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    for(int i=1;i<=n;cout << '\n',i++){
        if(i == 1 || i == n){
            for(int j=1;j<=n;j++) cout << j << " ";
        }
        else{
            for(int j=1;j<=n-i+1 && i != 1;j++){
                if(j == n - i+1){
                    cout << n - i+1;
                }
                else{
                    cout << '*' << ' ';
                }
            }
        }
        
    }
}
