#include <stdio.h>
/**
 * main - the function to print name of file it was compiled from
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
