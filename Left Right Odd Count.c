/*

An array of N integers is given as the input to the program. For each integer the program must print the integer if the count of odd integers on the left side is equal to the count of odd integers on the right side. Else the program must print "-1" for that integer.

Solution:

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    int arr[a], r=0, l=0;
    for(int i=0; i<a; i++)
    {
        scanf("%d ", &arr[i]);
        if(arr[i]%2==1) r++;
    }
    for(int i=0; i<a; i++)
    {
        if(arr[i]%2==0)
	      {
            if(l==r) printf("%d ",arr[i]);
            else printf("-1 ");
        }
        else
	      {
            if(l==r-1) printf("%d ",arr[i]);
            else printf("-1 ");
    	  l++;
        r--;
        }
    }
}
