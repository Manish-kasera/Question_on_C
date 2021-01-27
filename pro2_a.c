/*
 Problem2. Print the area of circle by taking 
 radius as a input from the user....  radius area of circle

*/

// Sol 1. without function..
// Sol 2. with function..

/*
 1.Read Problem Carefully..
 area = pi*r *r;

 2.Input output..  1 -->3.14   2==2.0 -->3.14*2*2=12.56    4.2 -->3.14*4.2*4.2 = 55.3896

 3.Approach..
 float radius ,area = pi*r*r;
 2-->2.0

 4.Code..
*/

#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the radius of circle");
    scanf("%f", &radius);

    const float pi = 3.14;
    float area = pi * radius * radius;

    printf("Area of circle is : %.2f",area);

    return 0;
}
