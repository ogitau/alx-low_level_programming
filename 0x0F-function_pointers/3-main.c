#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on successs
 */

int main(int argc, char *argv[])
{
	int (*opp)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opp = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", opp(num1, num2));

	return (0);
}
