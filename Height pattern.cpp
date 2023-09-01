/*
The height of N cats is passed as the input.
The program must print the height of the cats graphically as a column chart represented by # and - as shown in the Example Input/Output section. 

Boundary Condition(s): 

2 <= N <= 100
1 <= Height of each cat <= 100 

Input Format: 

The first line contains N. 
The second line contains N integers representing the height of N cats separated by a space. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

6 
10 4 2 6 7 2 

Output: 

# - - - - - 
# - - - - - 
# - - - - - 
# - - - # - 
# - - # # - 
# - - # # - 
# # - # # -
# # - # # - 
# # # # # # 
# # # # # # 

SOLUTION:
*/


/*
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, max = 0;
    scanf("%d", &N);
    int Arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d ", &Arr[i]);
        if(Arr[i] > max)
        {
            max = Arr[i];
        }
    }
    
    //printf("%d\n", max);
    
    for(int i=max; i>0; i--, printf("\n"))
    {
        for(int j=0; j<N; j++)
        {
            if(Arr[j] >= i)
            {
                printf("# ");
            }
            else
            {
                printf("- ");
            }
        }
    }
}

PY3:
*/
