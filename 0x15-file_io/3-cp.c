#include "main.h"

char *create_ghost(char *file);
void close_file(int td);

/**
 * create_ghost - function to allocate bytes
 * @file: variable storing chars
 * Return: pointer to newly allocated ghost
 */
char *create_ghost(char *file)
{
	char *w;

	w = malloc(sizeof(char) * 1024);
	if (w == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (w);
}

/**
 * close_file - function to close file descriptors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	int b;

	b = close(fd);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function to copy file content from one file to another
 * @argc: size of argv & number of CLI args
 * @av: pointer to argv
 * Return: 0 on success
 */
int main(int argc, char *av[])
{
	int src, dest, fileread, filewrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_ghost(av[2]);
	src = open(av[1], O_RDONLY);
	fileread = read(src, buffer, 1024);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (src == -1 || fileread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		exit(98);
	}
	dest  = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	filewrite = write(dest, buffer, fileread);
	if (dest == -1 || filewrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buffer);
		exit(99);
	}

	fileread = read(src, buffer, 1024);
	dest = open(av[2], O_WRONLY | O_APPEND);
	} while (fileread > 0);
	free(buffer);
	close_file(src);
	close_file(dest);

	return (0);
}
