#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is main program
 * Description:  the numbers seperated by caracter
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
int l,k ;
for (l = '0'; l <= '9' ; l++)
{
putchar(l);
k=l;
if (k <= '8')
{putchar(",");
putchar(' ');
}
}
putchar('\n');
return (0);
}
