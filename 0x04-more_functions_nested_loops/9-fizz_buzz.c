#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main func
 * Return: always 0
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; f < 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
_putchar("%s", fb);
else if (i % 3 == 0)
_putchar("%s", f);
else if (i % 5 == 0)
_putchar("%s", b);
else
_putchar("%d", i);
}
_putchar("\n");
return (0);
}
