'''
The program must accept a character matrix of size NxN containing only alphabets as the input.
The program must replace the innermost layer and the outermost layer of the matrix by the asterisk. 
Then the program must print the modified matrix as the output.

Boundary Condition(s): 3 <= N <= 100

Input Format:  

The first line contains N.
The next N lines each contain N alphabets separated by a space. 

Output Format: The first N lines containing the modified matrix. 

Example Input/Output 1:

Input: 

5
d z y w y 
y k h a j
z y b w l 
w i n t w
e r t y u 

Output: 

* * * * * 
* k h a *
* y * w *
* i n t * 
* * * * * 

Explanation: 

In the given 5x5 matrix, the innermost layer and the outermost layer are highlighted below. 

d z y w y 
y k h a j 
z y b w l
w i n t w 
e r t y u 

After replacing the innermost layer and the outermost layer of the matrix by the asterisk, it becomes 

* * * * *
* k h a * 
* y * w *
* i n t * 
* * * * * 

Example Input/Output 2:

Input: 

8 
U A L K Y A N V
S I U G D T A Z 
D T B J P D C A
U Z S T Q H O C 
A Q C U R M M C
D R A T B O T J 
X X S R D T P M 
F Z F E O C G A 

Output:

* * * * * * * * 
* I U G D T A * 
* T B J P D C *
* Z S * * H O * 
* Q C * * M M * 
* R A T B O T * 
* X S R D T P * 
* * * * * * * *

Example Input/Output 3: 

Input: 

4 
h x b l 
u q i v 
y c y o 
e m a c 

Output: 

* * * * 
* * * * 
* * * * 
* * * *

SOLUTION:
'''

n = int(input())
a = [list(map(str, input().split())) for i in range(n)]
k = n // 2

for i in range(n):
    for j in range(n):
        if i == 0 or i == n - 1 or j == 0 or j == n - 1:
            print('*', end = " ")
        elif i == k and j == k:
            print('*', end = " ")
        elif n % 2 == 0 and ((i == k - 1 and j == k) or (i == k and j == k - 1) or (j == k - 1 and i == k - 1)):
            print('*', end = " ")
        else:
            print(a[i][j], end = " ")
    print()

'''
C:
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char mat[101][101];
    int num = ceil(n / 2.0);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%c ", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == 0 || j == n - 1 || i == 0 || i == n - 1)
            {
                printf("* ");
            }
            else if(n % 2 != 0)
            {
                if(i == num - 1 && j == num - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("%c ", mat[i][j]);
                }
            }
            else if(n % 2 == 0)
            {
                if(i == num - 1 && j  == num - 1 || i == num - 1 && j == num || i == num && j == num - 1 || i == num && j == num)
                {
                    printf("* ");
                }
                else
                {
                    printf("%c ", mat[i][j]);
                }
            }
        }
        printf("\n");
    }
}


CPP:
#include <iostream> 

int main()
{
    int n;
    std::cin>>n; 
    
    char mat[n][n]; 
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin>>mat[i][j];
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1 || (i == n / 2 && j == n / 2) || (n%2==0 && ( (i==n/2-1 && j==n/2-1) || (i==n/2-1 && j==n/2) || (i==n/2 && j==n/2-1) ) )) 
               mat[i][j]='*';
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
'''
