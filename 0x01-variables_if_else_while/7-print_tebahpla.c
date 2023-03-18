#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description:  the alphabet in reverse
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
char letters[26] = "abcdefghijklmnopqrstuvwxyz";
int l;
for (l = 25; l > 0 ; l--)
{
putchar(letters[l]);
}
putchar('\n');
return (0);
}
