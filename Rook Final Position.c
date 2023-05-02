/*
A modified chess board is represented as an NxN character matrix. 
The character O represents empty space, the character - represents obstacle and R representes the position of the rook. 
There is exactly one rook present in the chess board. M moves are made by the rook. 
Each move is represented by direction (L - left, R - right, A - above and B - below) and the number of positions moved. 
The rook cannot move further in a direction if it encounters an obstacle or if it reaches the border of the chess board. 
The program must print the final position of the rook after M moves as the output. 

Boundary Condition(s):  1 <= N <= 1000 
                        1 <= M <= 10^5 

Input Format:  The first line contains N. 
               The next N lines contain N characters in each line. 
               The N+2th line contains M. 
               The remaining M lines contain a character (direction) and an integer (number of positions). 

Output Format: The first line contains two integers (row and col) separated by a space representing the final position of the rook. 

Example Input/Output 1: 

Input:  

4 
ROO-
O-OO 
OOO- 
O-OO 
4 
B2 
B5 
A1 
R2 

Output: 3 3 

Explanation:  The positions of the rook after each move are given below.
              After B2 -> 3 1 
              After B5 -> 4 1 
              After A1 -> 3 1 
              After R2 -> 3 3 

Example Input/Output 2: 

Input: 

5 
O-OOO 
O-OOO 
OROO- 
-OO-- 
-OOO-
6 
L2 
R4 
A5 
B1 
R3 
L4 

Output:  2 3

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m, val, row, col;
    scanf("%d", &n);
    char arr[n][n], ch;
 
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            scanf(" %c", &arr[i][j]);
            if(arr[i][j] == 'R')
            {
                row = i;
                col = j;
            }
        }
    }
 
    scanf("%d",&m);
 
    for(int i=0; i < m; i++)
    {
        scanf(" %c%d", &ch, &val);
        if(ch == 'A')
        {
            while(val--)
            {
                row--;
                if(row < 0)
                {
                    row = 0;
                    break;
                }
                else if(arr[row][col] == '-')
                {
                    row++;
                    break;
                }
            }
        }
        else if(ch== 'B')
        {
            while(val--)
            {
                row++;
                if(row >= n)
                {
                    row = n-1;
                    break;
                }
                else if(arr[row][col] == '-')
                {
                    row--;
                    break;
                }
            }
        }
        else if(ch == 'R')
        {
            while(val--)
            {
                col++;
                if(col >= n)
                {
                    col = n-1;
                    break;
                }
                else if(arr[row][col] == '-')
                {
                    col--;
                    break;
                }
            }
        }
        else if(ch == 'L')
        {
            while(val--)
            {
                col--;
                if(col < 0)
                {
                    col = 0;
                    break;
                }
                else if(arr[row][col] == '-')
                {
                    col++;
                    break;
                }
            }
        }
    }
 
    printf("%d %d", row+1, col+1);   
}
