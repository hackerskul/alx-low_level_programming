#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i; j <= 99; j++)
        {
            /* print first two-digit number */
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');

            /* print second two-digit number */
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            /* check if this is the last combination */
            if (i == 99 && j == 99)
                break;

            /* print comma and space separator */
            putchar(',');
            putchar(' ');
        }
    }

    /* print newline at the end */
    putchar('\n');

    return 0;
}

