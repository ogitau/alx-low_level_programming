#include "main.h"
/**
 * create_file - function to create a file
 * @filename: pointer to name of file to be created
 * @text_content: pointer to string to be written into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, fdwrite;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	fdwrite = write(fd, text_content, len);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
