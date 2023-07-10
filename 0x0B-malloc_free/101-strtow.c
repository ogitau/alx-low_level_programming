#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_len - locates the marking index of the first word
 * @str: the string to be splited
 *
 * Return: the index marking the ends of initial word
 */
int word_len(char *str)
{
	int index = 0, len = 0 ;
	while (*(str + index && *(str +index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_words - counts the number of words withi a string
 * @str: the string to be counted
 *
 * Return : number of words within a string
 */
int count_words(char *str)
	int index = 0, words = 0,len = 0;

	for (index =0; *(str + index); index++)
	{


