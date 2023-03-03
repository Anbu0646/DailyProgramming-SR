/*
You must implement the function replaceBorderElementsByWaterImage which accepts two integers R and C and an integer matrix of size RxC. 
This function must replace all the border elements of the given matrix by the border elements of its water image.

Example Input/Output 1: 

Input:  4 5 
        0 3 6 9 7
        1 6 8 1 4
        8 2 0 2 9
        9 4 7 6 4 

Output: 9 4 7 6 4
        8 6 8 1 9
        1 2 0 2 4
        0 3 6 9 7 

Explanation:  The input matrix is given below. 
              0 3 6 9 7
              1 6 8 1 4
              8 2 0 2 9
              9 4 7 6 4

              The water image of the input matrix is given below. 

              9 4 7 6 4 
              8 2 0 2 9
              1 6 8 1 4
              0 3 6 9 7 

              So replace all the border elements of input matrix by the border elements of its water image. 

              Hence the output is

              9 4 7 6 4
              8 6 8 1 9 
              1 2 0 2 4
              0 3 6 9 7 

Example Input/Output 2: 

Input:  3 3
        81 49 33
        94 41 46 
        81 51 19 

Output: 81 51 19 
        94 41 46
        81 49 33
        
SOLUTION:        
*/
