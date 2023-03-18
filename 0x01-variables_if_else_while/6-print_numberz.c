#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description: prints all single digit numbers 0 to 10
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
char numbers [10] = "0123456789";
int l;
for (l = 0; l < 10 ; l++)
{
putchar(numbers[l]);
}
putchar('\n');
return (0);
}
