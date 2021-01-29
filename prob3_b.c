// Swap without using third variable

/* Approach

  num1 = 10 num2 = 20
  num1 = num1+num2 //10+20//30
  num2 = num1 -num2;// 30 -20 //10
  num1 =num1-num2 = 30-10//20

 */

#include <stdio.h>

int main()
{
    int num1, num2; //10 20
    printf("Enter the first and second number:");
    scanf("%d %d", &num1, &num2);

    printf("Before swap:");
    printf("num1 = %d num2 = %d\n", num1, num2);

    num1 = num1 + num2; //10 +20//30
    num2 = num1 - num2; //30-20//10
    num1 = num1 - num2; //30-10//20

    printf("After swap:");
    printf("num1 = %d num2 = %d\n", num1, num2);

    return 0;
}