/*
Implement the function removeIndices(int arr[], int M, int indices[], int N) where arr is an integer array of size M and indices is an integer array of size N. 
The function must remove the values from the array arr based on the index given in the indices array. 

Note: 

Do not print inside the function. 
The first M-N integers in the array arr will contain the remaining integers after removing the integers. 

Example Input/Output 1: 

Input: 

6 3 
1 2 3 4 5 6 
1 4 2 

Output: 

1 4 6 

Explanation: 

The elements at the indices 1 4 2 are 2 5 and 3. 
2 5 and 3 are removed from 1 2 3 4 5 6. 
Hence 1 4 6 is printed.

SOLUTION:
*/

#include<stdio.h>
#include <stdlib.h>

void removeIndices(int arr[], int M, int indices[], int N)
{
    for(int i=0; i<N-1; i++)
    {
        for(int j=i + 1; j<N; j++)
        {
            if(indices[i] < indices[j])
            {
                int temp = indices[i];
                indices[i] = indices[j];
                indices[j] = temp;
            }
        }
    }
  
    for(int i=0; i<N; i++)
    {
        int index = indices[i];
        for(int j=index; j<M - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        M--;
    }
}
