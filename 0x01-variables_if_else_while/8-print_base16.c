#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description:  the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
char letters[16] = "0123456789abcdef";
int l;
for (l = 0; l <16 ; l++)
{
putchar(letters[l]);
}
putchar('\n');
return (0);
}
