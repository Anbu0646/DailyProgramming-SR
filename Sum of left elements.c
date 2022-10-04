/*

An array of N integers is passed as the input to the program. The program must print the sum of all the elements present to the left of each element as the output.

Input:  5
        2 4 6 8 10
Output: 0 2 6 12 20

Solution:

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, sum=0, flag=0;
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d ", &arr[i]);
        (i>0) ? (sum+=arr[i-1], printf("%d ", sum)) : printf("%d ", sum);
    }

}
