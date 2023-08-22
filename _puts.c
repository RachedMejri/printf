#include "main.h"

/**
 * _puts - writes a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str++);
		count++;
	}
	return (count);
}