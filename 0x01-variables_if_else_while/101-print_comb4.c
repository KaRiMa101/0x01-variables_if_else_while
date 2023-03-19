#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description:  print combo of three numbers
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
int l, k, m;
for (k = '0'; k <= '8' ; k++)
{
for (l = '1'; l <= '9' ; l++)
{
for (m = '1'; m <= '9' ; m++)
{
if (k < l  && l < m)
{
putchar(k);
putchar(l);
putchar(m);
if (k != '7'|| l != '8' || m != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
