#include "main.h"

/**
 * str_len - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int str_len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
