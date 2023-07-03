#include "main.h"
/**
 * print_chessboard - function to print the chessboard
 * @a: prints the things for the board
 * Return: returns 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
