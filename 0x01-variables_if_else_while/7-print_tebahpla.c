#include <stdio.h>
/**
 * main - starting point
 *
 * Return: always 0 on success
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
