/*
The program must accept an integer N as the input. 
The program must form the largest integer X by removing exactly one digit from the last three digits of N. 
Then the program must print the integer X as the output. 

Boundary Condition(s): 100 <= N <= 10^8 

Input Format:  The first line contains N. 

Output Format: The first line contains X. 

Example Input/Output 1: 

Input:  15742 

Output: 1574 

Explanation: 

If the unit digit 2 is removed, the integer becomes 1574. 
If the tenth digit 4 is removed, the integer becomes 1572. 
If the hundredth digit 7 is removed, the integer becomes 1542. 
Among these three integers, the largest integer is 1574. 
Hence the output is 1574.

Example Input/Output 2: 

Input:  6108 

Output: 618

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    long long int n, u = 0, h = 0, l1 = 0, l2 = 0, l3 = 0, a, b, c;
    cin>>n;
    a = n, l1 = a/10, b = n, u = n % 10, h = n % 100;
    l2 = (b / 100) * 10 + u, c = n, l3 = (c / 1000) * 100 + h;
    cout<<max(l1, max(l2, l3));
}

/*
PY3:
n = input()
l = []
for i in range(len(n) - 1, len(n) - 4, -1):
    l.append(int(n[:i] + n[i + 1:]))
print(max(l))

C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char str[20], tempstr[20];
   int len, templen;
   long num, max = 0;
   scanf("%s%n", str, &len);
   for(int i=len - 3; i<len; i++)
   {
       templen = 0;
       for(int j=0; j<len; j++)
       {
           if(i != j) 
              tempstr[templen++] = str[j];
       }
       tempstr[templen] = '\0';
       num = atoi(tempstr);
       if(num>max) max = num;
   }
   printf("%ld", max);
}
*/
