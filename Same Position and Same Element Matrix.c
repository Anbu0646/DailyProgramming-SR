/*
The program must accept two integer matrices are of the same size RxC as the input. 
If both the matrices have the same elements in the same positions then retain the elements in their same positions of the first matrix. 
Else the program must replace the elements by * in the first matrix. Finally, the program must print the modified first matrix as the output. 

Boundary Condition(s): 2 <= R, C <= 100 

Input Format: 

The first line contains two integers R and C separated by a space. 
The next 2*R lines contain (the first and the second matrix) C integers on each line separated by space(s). 

Output Format: 

The first R lines contain C integers or *. 

Example Input/Output 1: 

Input: 

4 4 
2 3 4 8 
9 7 3 2 
5 8 6 3 
1 8 3 5 
2 9 4 1 
1 2 3 2 
5 8 4 2 
1 8 5 5 

Output: 

2 * 4 * 
* * 3 2 
5 8 * * 
1 8 * 5 

Explanation: 

First Matrix      Second Matrix 

2 3 4 8           5 8 6 3
2 9 4 1           5 8 4 2
9 7 3 2           1 8 3 5
1 2 3 2           1 8 5 5 

Elements in both the matrices at the same positions having same value are replaced by * Hence the output is 

2 * 4 *
* * 3 2
5 8 * * 
1 8 * 5 

Example Input/Output 2: 

Input: 

3 4 
10 20 30 40 
89 88 87 86 
12 13 14 15 
10 11 12 40 
18 88 87 17 
12 11 20 15 

Output: 

10 * * 40 
* 88 87 * 
12 * * 15

SOLUTION:
*/

R, C = map(int, input().split())
Mat_1 = [list(map(int, input().split())) for i in range(R)]
Mat_2 = [list(map(int, input().split())) for i in range(R)]
Mat_3 = []
for i, j in zip(Mat_1, Mat_2):
    Mat_4 = []
    for k, l in zip(i, j):
        if k == l:
            Mat_4.append(str(k))
        else:
            Mat_4.append('*')
    Mat_3.append(Mat_4)
for i in range(R):
    for j in range(C):
        print(Mat_3[i][j], end=" ")
    print()
