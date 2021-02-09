// Even Odd Number
// 4-->even
//1-->odd

/*
  Sol 1. Using modulo operator
  Sol 2. Using Bitwise operator (next video)
  Sol 3. Using function. (try yourself)
         (take hint from prob1 and prob2)
*/

/*
  1. Read problem
  2. Take input
  3. Logic
   1 % 2// 1
   2 % 2 //0
   3 % 2 // 1
   4 % 2 // 0

   if(num % 2==0){
       //even
   }
   else{
       //odd
   }

  4. Code
*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter any number");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is even Number\n", number);
    }
    else
    {
        printf("%d is odd Number\n", number);
    }
    return 0;
}