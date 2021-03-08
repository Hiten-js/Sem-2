/* 
============================================================================
                                O(∩_∩)O
                           Fibonacci series
===========================================================================
*/

// Write a program to ptint nth term of fibonnaci series (Using recursion)
// Fibonaccci series: 1, 1, 2, 3, 5, 8, _ _ _

int fibonacci(int n)
{
     if (n <= 0)
          printf("The number cannot be negative.");

     else if (n <= 2)
          return 1;

     else
          return fibonacci(n - 1) + fibonacci(n);
}
