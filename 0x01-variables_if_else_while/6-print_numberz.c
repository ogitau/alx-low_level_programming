#include <stdio.h>
/**
 * main - starting point
 *
 * Return: always 0 on success
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
