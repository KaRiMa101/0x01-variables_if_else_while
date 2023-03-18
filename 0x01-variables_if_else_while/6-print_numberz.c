#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description: prints all single digit numbers 0 to 9
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = '0' ; n < '10' ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
