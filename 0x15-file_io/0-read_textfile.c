#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - function to read and print text file
 * @filename: pointer of the file to be read
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdread, fdwrite, fdclose;
	char *size;

	if (filename == NULL)
		return (0);
	size = malloc(sizeof(char) * letters);
	if (size == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	fdread = read(fd, size, letters);
	if (fdread == -1)
		return (-1);
	fdwrite = write(STDOUT_FILENO, size, fdread);

	if (fdwrite == -1)
		return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
