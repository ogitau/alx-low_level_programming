#include <stdio.h>

/**
 * main -starting point of the program
 * Description -'the program will print the bit values of the variables'
 *
 * Return: always zero 0
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	printf("Size of long long: %zu byte(S)\n", sizeof(long long));
		return (0);
}
