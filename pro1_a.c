/*
 Questions on C[Playlist] ---> C_course Question(Problem)

*/

/*
 Problem1. Print the sum of two (int)numbers by taking 
 input(two number)from the user.... 

*/

// Sol 1. without function..
// Sol 2. with function..

/*
 1.Read Problem Carefully..

 2.Input output...  6 99 -->105  8 10-->18

 3.Approach.. num1 num2  sum = num1+num2

 4.Code..
*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Sum of %d and %d is %d\n",num1,num2,sum);
    return 0;
}
