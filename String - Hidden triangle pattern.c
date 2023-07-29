/*
The program must accept a string S where the length of S is always odd as the input.
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 3 <= Length of S <= 99 

Input Format:  The first line contains S. 

Output Format: The lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input:  chicken 

Output: 

kencchi 
enickch 
nhickec 
chicken 

Example Input/Output 2: 

Input:  ABCDEFGHI 

Output: 

FGHIEABCD 
GHIDEFABC 
HICDEFGAB 
IBCDEFGHA 
ABCDEFGHI

SOLUTION:

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  char gg[1000];
  scanf("%s", gg);
  int m = strlen(gg);
  int y = (m/2) - 1;
  int z = (m/2) + 1;
  
  while(y>=0)
  {
    for(int i=z; i<m; i++)
    {
        printf("%c", gg[i]);
    }
    for(int i=y + 1; i<z; i++)
    {
        printf("%c", gg[i]);
    }
    for(int i=0; i<=y; i++)
    {
        printf("%c", gg[i]);
    }
    y--;
    z++;
    printf("\n");
  }
  
  printf("%s", gg);
}

/*
PY3:

ac = input().strip()
mid = len(ac)//2

for i in range(len(ac)//2 + 1):
    print(ac[-mid:] + ac[mid:-mid] + ac[:mid])
    mid -= 1
*/
