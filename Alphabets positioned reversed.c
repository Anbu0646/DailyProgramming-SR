/*
The program must accept N alphabets as the input. The program must print the alphabet position of each alphabet in reverse order as the output. 

Boundary Condition(s): 1 <= N <= 10^5 

Input Format: 

The first line contains the integer N. 
The second line contains N characters separated by space(s). 

Output Format: 

The first line contains the alphabet position of N alphabets in the reverse order. 

Example Input/Output 1: 

Input: 

5 
j a e E b 

Output: 

2 5 5 1 10 

Explanation: 

The alphabet position of j is 10 in the alphabetical order. 
The alphabet position of a is 1 in the alphabetical order. 
The alphabet position of e is 5 in the alphabetical order. 
The alphabet position of E is 5 in the alphabetical order. 
The alphabet position of b is 2 in the alphabetical order. 
In the reverse order, the alphabets position are 2 5 5 1 10 
Hence the output is 2 5 5 1 10. 

Example Input/Output 2: 

Input: 

4 
L f V d 

Output: 

4 22 6 12

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d\n", &N);
    char s[N];
    int arr[N];
    
    for(int i=0; i<N; i++)
    {
        scanf("%c ", &s[i]);
        s[i] = tolower(s[i]);
        arr[i] = (int)(s[i]) - 96;
        
    }
    
    for(int i=N - 1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

}

/*
s = 'abcdefghijklmnopqrstuvwxyz'
n = int(input())
l = input().strip().split()
print(*[s.index(i.lower()) + 1 for i in l[::-1]])
*/
