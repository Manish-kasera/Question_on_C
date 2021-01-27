/*
  ---> Function Calling 
  ---> Function defination
  ---> Function Declaration

  ---> Function declaration is mandatory or not?
  ---> Call By Value
  ---> Call By Reference (x)
  ---> Formal Argument
  ---> Actual Argument

*/
//function declaration
float area_of_circle(float r, float pi);

//function defination
float area_of_circle(float r, float pi) //formal Argument
{
    return (pi * r * r);
}


#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the radius of circle :");
    scanf("%f", &radius);

    const float pi = 3.14;

    float area = area_of_circle(radius, pi); //function calling ///actual argument
    printf("Area of circle is : %.2f", area);

    return 0;
}



