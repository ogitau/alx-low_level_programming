#include <stdio.h>
#include <ctype.h>
/**
 * main - starting point
 *
 * Return: always 0 on success
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
