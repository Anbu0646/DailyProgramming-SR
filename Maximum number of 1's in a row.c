/*
The program must accept a matrix of size NxN as the input, the matrix contains only 0's and 1's. 
The program must count the number of 1's in each row. 
Then the program must print the row number of the row containing the maximum number of 1's as the output. 
If two or more rows contain the maximum number of 1's then print the first occuring row number in the given order as the output. 

Boundary Condition(s): 1 < N <= 10^5 

Input Format:  The first line contains the integer N. 

Output Format: The first line contains the row number of the row contianing the maximum number of 1's. 

Example Input/Output 1: 

Input: 

4 
0 1 1 1 
1 0 1 0 
1 1 1 1 
0 0 0 0 

Output: 3 

Explanation: 

The first row contains three 1's. So, the count is 3. 
The second row contains two 1's. So, the count is 2. 
The third row contains four 1's. So, the count is 4. 
The fourth row contains zero 1's. So, the count is 0. 
Here the maximum count is 4 and their corresponding row is 3. 
Hence the output is 3. 

Example Input/Output 2: 

Input: 

3 
1 0 0 
0 1 1 
1 1 0 

Output: 2

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Mat[N][N], Count = 0, Greater_Count = 0, Index;
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d ", &Mat[i][j]);
            if(Mat[i][j] == 1)
            {
                Count += 1;
            }
        }
        
        if(Count > Greater_Count)
        {
            Greater_Count = Count;
            Index = i;
        }
        
        Count = 0;
    }
    
    printf("%d", Index + 1);
}
