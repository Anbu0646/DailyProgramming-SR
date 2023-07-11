/*
The program must accept an integer N as the input. 
The program must print the largest digit among the unit digit, the tenth digit and the hundredth digit as the output. 

Boundary Condition(s): 100 <= N <= 1000000 

Input Format:  The first line contains the value of N. 
Output Format: The first line contains the largest digit among the unit digit, the tenth digit and the hundredth digit. 

Example Input/Output 1: 

Input:  54232 

Output: 3 

Explanation: 

The unit digit is 2. 
The tenth digit is 3. The hundredth digit is 2.
The largest among these digits is 3. 
Hence 3 is printed. 

Example Input/Output 2: 

Input:  764356 

Output: 6

SOLUTION:
*/


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long int Num;
    
    cin>>Num;
    
    int unit_digit = Num % 10, tenth_digit = (Num/10)%10, hundred_digit = (Num/100)%10;
    
//    cout<<unit_digit<<" "<<tenth_digit<<" "<<hundred_digit<<"\n";
    
    int max_1 = max(unit_digit, tenth_digit);
    int max_2 = max(tenth_digit, hundred_digit);
    
    cout<<max(max_1, max_2);
}
