#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description:  print combo of two numbers
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
int l, k;
for (l = '0'; l <= '8' ; l++)
{
for (k = '1'; k <= '9' ; k++)
{if (l < k)
{
putchar(l);
putchar(k);
if (l != '8' || k != '9')
{
putchar(',');
putchar(' ');
}
}
}
}

return (0);
}
