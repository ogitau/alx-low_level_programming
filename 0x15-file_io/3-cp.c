#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_register(char *file);
void close_file(int fd);

/**
 * create_register- Allocates 1024 bytes for a register.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated register.
 */
char *create_register(char *file)
{
	char *reg;

	reg = malloc(sizeof(char) * 1024);

	if (reg == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (reg);
}

/**
 * close_file - function that closes file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int y;

	y = close(fd);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments arguments passed
 * @argv: argument vectors
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_register(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
