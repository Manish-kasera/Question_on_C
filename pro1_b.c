/*
 1.function calling
 2.function defination
 3.function declaration
*/

//int sum_with_function(int a, int b); //function declaration

//function defination
int sum_with_function(int a, int b)
{
    return (a + b);
}

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    int sum = sum_with_function(num1, num2); //function Calling

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
