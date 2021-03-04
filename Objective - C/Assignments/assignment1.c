/* HH         HH   IIIIIIIIIIIII  IIIIIIIIIIIII  EEEEEEEEEEEEE  NNN         NN
   HH         HH        II             II        EE             NN NN       NN
   HH         HH        II             II        EE             NN  NN      NN
   HH         HH        II             II        EE             NN   NN     NN
   HHHHHHHHHHHHH        II             II        EEEEEEEEEEEEE  NN    NN    NN
   HH         HH        II             II        EE             NN     NN   NN
   HH         HH        II             II        EE             NN      NN  NN
   HH         HH        II             II        EE             NN       NN NN
   HH         HH   IIIIIIIIIIIII       II        EEEEEEEEEEEEE  NN         NNN
*/

#include <stdio.h>

#define ADD(X, Y) (X + Y)
#define SUBTRACT(X, Y) (X - Y)
#define MULTIPLY(X, Y) (X * Y)
#define DIVIDE(X, Y) (X / Y)

void printStarLadder()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("* ");
        putchar('\n');
    }
}

void calcInterest()
{
    float amount, rate, time;
    float simpleInterest, compoundInterest;

    printf("\nEnter Principal Amount(In Rs.) : ");
    scanf("%f", &amount);
    printf("\nEnter Rate of Interest(annualy) : ");
    scanf("%f", &rate);
    printf("\nEnter Period of Time(In years) : ");
    scanf("%f", &time);

    simpleInterest = (amount * rate * time) / 100;
    while (time--)
    {
        compoundInterest += amount * rate / 100;
        amount += compoundInterest;
    }

    printf("\nSimple Interest : %.0f Rs\n", simpleInterest);
    printf("\nCompound Interest : %.2f Rs\n", compoundInterest);
}

void checkLeapYear()
{
    int year;
    printf("\nEnter a Year : ");
    scanf("%d", &year);

    int isLeap = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));

    putchar('\n');
    if (isLeap)
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);
    putchar('\n');
}

void printFactorial()
{
    int number, numberCopy, factorial = 1;
    printf("\nEnter a Number : ");
    scanf("%d", &number);
    numberCopy = number;

    while (number > 0)
    {
        factorial *= number;
        number--;
    }

    printf("\nThe factorial of %d is %d", numberCopy, factorial);
}

int main(void)
{
    // printStarLadder();
    return 0;
}
