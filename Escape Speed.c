/*
The program must accept three floating point values as G (gravitational constant), M (mass) and R (radius) of a planet. The program must calculate and print the escape speed of the object with precision up to 3 decimal places. 

Formula: Escape speed = squareroot(2GM/R)

Example Input/Output 1:

Input:  1.567 2.4783 3.4671 
Output: 1.497 

Example Input/Output 2: 

Input:  1.9038 2.7920 4.3937 
Output: 1.555


SOLUTION:
C:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    float g, m, r;
    scanf("%f %f %f", &g, &m, &r);
    printf("%.3f", (sqrt((2*g*m)/r)));
}
