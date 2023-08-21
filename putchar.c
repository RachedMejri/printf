#include "main.h"

/**
 * _putchar - write 1 cartc
 * @c: al carcter
 *
 * Return: On success, returns the character written.
 *         On error, returns -1.
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
