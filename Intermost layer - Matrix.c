/*
The program must accept a character matrix of size RxC as the input. 
The program must print all the characters in the innermost ring/layer of the matrix as shown in the Example Input/Output section. 

Boundary Condition(s): 1 <= R, C <= 50 

Input Format: The first line contains the values of R and C separated by a space. The next R lines contain C characters separated by a space. 
Output Format: The list of lines containing the characters separated by a space as per the above conditions. 

Example Input/Output 1: 

Input:  5 4 
        y s p d 
        l l m g 
        t x w y 
        p o s w 
        c i a z 
        
Output: l m 
        x w 
        o s 
        
Explanation: The innermost ring/layer is highlighted in the below matrix. 
             y s p d 
             l l m g 
             t x w y 
             p o s w 
             c i a z 
             
             So all the characters in the inner most ring/layer is printed. 
             Hence the output is 
             
             l m 
             x w 
             o s 
             
Example Input/Output 2: 

Input:  3 7 
        m q p p l e g
        t m e q u f u
        r d u q v s h 
        
Output: m e q u f

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d ", &r, &c);
    char mat[r][c];
        
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%c ", &mat[i][j]);
           
        }
    }
        
    int u = 0, d = r - 1, l = 0, ri = c - 1;
        
    while(u+1 <= d - 1 && l + 1 <= ri - 1)
    {
        u++;
        d--;
        l++;
        ri--;
    }
        
    for(int i=u; i<=d; i++)
    {
        for(int j=l; j<=ri; j++)
        {
            printf("%c ", mat[i][j]);
        }
            
    printf("\n");
    }
}
