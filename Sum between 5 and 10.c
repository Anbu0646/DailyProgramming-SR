/*
The program must accept N integers as the input. 
The program must traverse the given integers and if the integer 5 is encountered then the following integers must be added till the integer 10 occurs. 
Finally, the program must print the total sum as the output. 

Boundary Condition(s): 1 <= N <= 1000 

Input Format:  The first line contains N. 
               The second line contains N integers separated by space(s). 
Output Format: The first line contains the sum as per the given conditions. 

Example Input/Output 1: 

Input:  9
        2 5 3 2 10 3 10 5 4 
Output: 9

Explanation:  The integer 5 occurs at position 2 and the immediate next integer value 10 occurs at position 5. 
              There are two integers (3 and 2) between them which are added to 5. 
              The next integer value 5 occurs at position 8 the integers after 5 is 4 which is also added to the result. 
              Hence the output is 9

Example Input/Output 2:

Input:  8 
        1 5 5 12 10 5 6 10 
Output: 23

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int ar[a], flag = 0, sum = 0;
    for(int i = 0; i < a; i++){
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < a; i++){
        if(ar[i] == 5 && flag != 1){
            flag = 1;
            continue;
        }
        if(ar[i] == 10){
            flag = 0;
        }
        if(flag == 1){
            sum += ar[i];
        }
    }
    printf("%d", sum);
}
