/*
 Problem3. Swap two numbers.These numbers are taken as input 
        from the user. num1 ,num2 
 

*/

// Sol 1. using third variable..
// Sol 2. without third variable...
// Sol 3. Using function and pointer..(in upcomming videos)

/*
 1.Read Problem Carefully..

 2.Input output..  i/p num1 = 10 ,num2 = 20
                   o/p num1 = 20 ,num2 = 10

 3.Approach..

 num1 = 10 num2 = 20 
 temp = num1 // temp = 10
  num1= num2 //num1 = 20
  num2 = temp //num2 = 10
 4.Code..
*/

#include <stdio.h>

int main()
{
    int num1, num2; //10 20
    printf("Enter the first and second number:");
    scanf("%d %d", &num1, &num2);

    printf("Before swap:");
    printf("num1 = %d num2 = %d\n", num1, num2);
    int temp = num1; // 10
    num1 = num2;     //20
    num2 = temp;     //10

    printf("After swap:");
    printf("num1 = %d num2 = %d\n", num1, num2);

    return 0;
}
