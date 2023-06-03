/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 

2 <= N <= 100 

Input Format: 

The first line contains the integer N. 

Output Format: 

The lines containing the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 

Input: 

4 

Output: 

---<0> 
--<123> 
-<45678> 
<9012345> 
-<67890> 
--<123> 
---<4> 

Example Input/Output 2: 

Input: 

7 

Output: 

------<0> 
-----<123> 
----<45678> 
---<9012345> 
--<678901234> 
-<56789012345> 
<6789012345678> 
-<90123456789> 
--<012345678> 
---<9012345> 
----<67890> 
-----<123> 
------<4>

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, n, l, s, c = 0;
    scanf("%d", &n);
  
    for(i = -n+1; i<=n-1; i++)
    {
        if(i<0) l = -i;
        if(i>=0) l = +i;
      
        for(s=0; s<l; s++)
        {
            printf("-");
        }
      
        printf("<");
      
        for(j=0; j<2*(n-l)-1; j++)
        {
            printf("%d", c++%10);
        }
      
        printf(">\n");
    }
}

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,x=1,z=1;
 scanf("%d",&n);
 int l=(n*2)-1,k=0;
 for(int i=0;i<=l/2;i++)
 {
    for(int j=0;j<n-x;j++)
    {
      printf("-"); 
    }
    x++;
    printf("<");
    for(int j=0;j<z;j++)
    {
      printf("%d",k++);
      if(k==10)
         k=0;
    }
    z=z+2;
    printf(">\n");
 }
 x=1,z=l-2;
 for(int i=0;i<n-1;i++)
 {
    for(int j=0;j<x;j++)
    {
      printf("-");  
    }
    x++;
    printf("<");
    for(int i=0;i<z;i++)
    {
       printf("%d",k++);
       if(k==10)
         k=0;
    }
    z=z-2;
    printf(">\n");
 }
 return 0;
}
*/
