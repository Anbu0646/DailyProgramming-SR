/*
The program must accept an integer N and a string S as the input. 
The program must perform two operations they are copyAll and paste repeatedly for N times. 
Each time when the copyAll operation is performed, all the characters in the string S are copied. 
The paste operation pastes the last copied characters at the end of the string S. 
Finally, the program must print the number of characters present in the string S after repeating the two operations for N times. 

Boundary Condition(s): 

1 <= N <= 100 
1 <= Length of S <= 100 

Input Format:  The first line contains the integer N and the string S separated by a space 

Output Format: The first line contains the length of the final string. 

Example Input/Output 1: 

Input:  2 abc 

Output: 12 

Explanation: 

Initially, the string S contains abc. 
The first time copyAll operation is performed. So abc is copied. 
Then the paste operation is performed. 
Now, the string contains the characters abcabc. 
The second time copyAll operation is performed. So abcabc is copied.
Then the paste operation is performed. 
Now, the string S contains the characters abcabcabcabc. 
There are 12 characters in the string S. 
Hence the output is 12. 

Example Input/output 2: 

Input:  4 kj*gf$k 

Output: 112

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    char String[1001];

    scanf("%d %s", &N, &String);

    int Length = strlen(String);

    for(int i=0; i<N - 1; i++)
    {
        Length *= 2; 
    }

    printf("%d", Length * 2);
}

/*
N, String = input().split()
N = int(N)

Len = len(String)

for i in range(N - 1):
    Len *= 2
    
print(Len*2)
*/
