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
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fdread = read(fd, s, letters);
	if (fdread == -1)
		return (-1);
	fdwrite = write(STDOUT_FILENO, s, fdread);

	if (fdwrite == -1)
		return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
