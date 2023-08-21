#include "main.h"
/**
 * selfmadeputs - the main function for the whole jazz
 *
 * @s: the string
 *
 * Return: the size of opf
 */
int selfmadeputs(char *s)
{
	int count = 0;

	if (s)
	{
		for (count = 0; s[count] != '\0'; count++)
		{
			_putchar(s[count]);
		}
	}
	return (count);
}
