/*
The program must accept N integers and an integer X as the input. For each multiple of X among the N integers, the program must change all the values following it to that multiple of X, until encountering another multiple of X. For the last multiple of X, the program must change all the remaining values to the last multiple of X. Finally, the program must print the modified N integers as the output. 

Boundary Condition(s): 

1 <= N <= 100 
1 <= Each integer value, X <= 10^5 

Input Format: 

The first line contains the value of N and X separated by a space. 
The second line contains N integers separated by space(s). 

Output Format: 

The first line contains the modified N integers separated by a space. 

Example Input/Output 1: 

Input: 

7 5 
2 10 3 4 15 16 8 

Output: 

2 10 10 10 15 15 15 

Explanation: 

The first multiple of 5 is 10. 
So all the integers followed by 10 are changed to 10 until encountering another multiple of 5. 
Now the array becomes 2 10 10 10 15 16 8. 
The last multiple of 5 is 15. 
So all the integers followed by 15 are changed to 15. 
Now the array becomes 2 10 10 10 15 15 15. 

Example Input/Output 2: 

Input: 

10 2 
27 25 17 28 29 15 22 24 19 23 

Output: 

27 25 17 28 28 28 22 24 24 24

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    long int arr[N];
    
    for(int i=0; i<N; scanf("%ld ", &arr[i++]));
    
    int index = -1;
    
    for(int i=0; i<N; i++)
    {
        
        if(arr[i]%X == 0)
        {
            index = i;
        }
        
        if(index != -1)
        {
            arr[i] = arr[index];
        }
    }
    
    for(int i=0; i<N; printf("%ld ", arr[i++]));
}

/*

*/
