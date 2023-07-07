#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - the main function
 * @argc: argument count
 * @argv:argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
