/*
The program must accept a list of integers as the input. 
The program must print the minimum number of changes (possibly zero) required in the list to contain odd and even integers alternatively or vice-versa. 
A change in the list represents adding 1 to an integer or subtracting 1 from an integer which is used to convert the integer from odd to even or even to odd. 

Boundary Condition(s): 2 <= Each integer value <= 10^5

Input Format:  The first line contains the list of integers separated by space(s). 

Output Format: The first line contains the integer based on the given conditions. 

Example Input/Output 1: 

Input:  11 7 4 9 13 17 

Output: 2 

Explanation: 

Here minimum 2 changes are required to make the list as list of alternative even and odd integers. 
The first change makes the first integer 11 to an even integer (10 or 12). 
The second change makes the fifth integer 13 to an even integer (12 or 14). 
Hence 2 is printed as the output. 

Example Input/Output 2: 

Input:  11 40 65 7 94 5 57 

Output: 3 

Explanation: 

Here minimum 3 changes are required to make the list as list of alternative odd and even integers. 
The first change makes the fourth integer 7 to an even integer (6 or 8). 
The second change makes the fifth integer 94 to an odd integer (93 or 95). 
The third change makes the sixth integer 5 to an even integer (4 or 6). 
Hence 3 is printed as the output.

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100000], i = 0, one = 0, f = 1, two = 0;
    while(scanf("%d", &arr[i]) == 1)
    {
        if(arr[i] % 2 == f)
        {
            one++;
        }
        i++;
        f = !f;
    }
    f = 0;
    for(int index = 0; index < i; index++)
    {
        if(arr[index] % 2 == f)
        {
            two++;
        }
        f = !f;
    }
    // printf("%d %d\n",one,two);
    printf("%d", (int) fmin(one, two));
}

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10000000], l = 0;
    
    while((scanf("%d", &a[l])) > 0)
    {
        l++;
    }
    
    int c = 0, d = 0;
    
    for(int i=0; i<l; i++)
    {
        if(i % 2 == 0 && a[i] % 2 != 0)
        {
            c++;
        }
        else if(i % 2 != 0 && a[i] % 2 == 0)
        {
            c++;
        }
    }
    
    for(int i=0; i<l; i++)
    {
        if(i % 2 == 0 && a[i] %2 == 0)
        {
            d++;
        }
        else if(i % 2 != 0 && a[i] % 2 != 0)
        {
            d++;
        }
    }
    if(c < d)
    {
        printf("%d", c);
    }
    else
    {
        printf("%d", d);
    }
}




PY3:

l=list(map(int,input().split()))
x=y=0
for i in range(len(l)):
    if i%2==0:
        x+=l[i]%2
        y+=(l[i]+1)%2
    else:
        x+=(l[i]+1)%2
        y+=l[i]%2
print(min(x,y)) 
*/
