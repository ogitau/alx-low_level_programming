#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatinates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: amount of bytes
 * Return: a char value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 unsigned int i, len1, len2;
	char *c;

	if (s1 == NULL || s2 == NULL)
		return ("");
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	c = malloc(sizeof(char) * n + len1 + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		c[i] = s1[i];

	for (i = 0; i < n; i++)
		c[i + len1] = s2[i];

	c[i + len1] = '\0';

	return (c);
}
