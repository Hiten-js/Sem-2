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
#include <termios.h>
#include <unistd.h>

/* ===== Reverse Number ===== */
void reverseNumber()
{
    int number, newNumber = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        int digit = number % 10;
        newNumber = newNumber * 10 + digit;
        number /= 10;
    }

    printf("reversed number: %d \n", newNumber);
}

/* ===== Sort Array ===== */
void sortAndPrintArray()
{
    int arr[] = {1, 5, 3, 8, 9, 0};
    int length = 6;

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("sorted array: ");
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
    putchar('\n');
}

/* ===== Remove Vowels ===== */
int isVowel(char);

void removeVowels()
{
    char s[100], t[100];
    int i, j = 0;

    printf("Enter a string to delete vowels\n");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (isVowel(s[i]) == 0)
        {
            t[j] = s[i];
            j++;
        }
    }

    t[j] = '\0';

    printf("String after deleting vowels: %s\n", t);
}

int isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return 1;
    default:
        return 0;
    }
}

/* ===== Count Digits ===== */
void countDigits()
{
    int number, length = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        length++;
        number /= 10;
    }

    printf("length of the number: %d \n", length);
}

/* ===== Take input with Asterisk ===== */
int getch();

void inputWithAsterisk()
{

    int i = 0;
    char c, s[100];

    printf("Write Your Name \n\n");

    while (1)
    {
        c = getch();

        if (c == '\n')
        {
            s[i] = '\0';
            putchar('\n');
            break;
        }

        putchar('*');

        s[i] = c;
        i++;
    }

    printf("%s \n", s);
}

int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return ch;
}

int main()
{
    // inputWithAsterisk();
    return 0;
}