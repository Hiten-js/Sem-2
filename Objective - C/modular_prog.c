/* 
============================================================================
                                Ψ(￣∀￣)Ψ
                             Modular Program
===========================================================================
*/

// Write a program to implement a calculator using top-down modular approach.
// the program should request the user to input two numbers and display one
// of the following as per the desire of the user
//    (a) Sum of the numbers
//    (b) Diffrence of the numbers
//    (c) Product of the numbers
//    (d) Division of the numbers
// Provide separate functions for performing various tasks such as reading,
// calculating and displaying. Calculating module should call second level
// modules to perform the individual mathematical operations. the main
// function should have only functions call.

#include <stdio.h>

#define GREETING_MSG "Welcome to calculator lite (*^▽^*) \n"

int nums[2];
char operator;

int sum();
int minus();
int divide();
int multiply();

void set_nums();
void set_operator();
void disply_result();

int main()
{
   set_nums();
   set_operator();
   disply_result();
}

void set_nums()
{
   printf(GREETING_MSG);
   printf("Enter two integers: \n");
   scanf("%d %d", &nums[0], &nums[1]);
   putchar('\n');
}

void set_operator()
{
   printf("Enter an operator (+, -, *, /): ");
   getchar();
   scanf("%c", &operator);
}

void disply_result()
{
   switch (operator)
   {
   case '+':
      printf("Sum: %d + %d = ", nums[0], nums[1]);
      printf("%d", sum(nums[0], nums[1]));
      break;

   case '/':
      printf("Divide: %d / %d = ", nums[0], nums[1]);
      printf("%d", divide(nums[0], nums[1]));
      break;

   case '-':
      printf("Difference: %d - %d = ", nums[0], nums[1]);
      printf("%d", minus(nums[0], nums[1]));
      break;

   case '*':
      printf("Multiplication: %d * %d = ", nums[0], nums[1]);
      printf("%d", multiply(nums[0], nums[1]));
      break;

   default:
      printf("Error! operator is not correct. \n");
      set_operator();
      disply_result();
   }

   putchar('\n');
}

int sum() { return nums[0] + nums[1]; }
int minus() { return nums[0] - nums[1]; }
int divide() { return nums[0] / nums[1]; }
int multiply() { return nums[0] * nums[1]; }
