#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: name of file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, len;

	if (filename == NULL)
		return (-1);
	fdopen = open(filename, O_WRONLY | O_APPEND);
	if (fdopen == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	fdwrite = write(fdopen, text_content, len);
	if (fdwrite == -1)
		return (-1);
	close(fdopen);
	return (1);
}
