#include <stdlib.h>

/**
 * _itoa - converts an integer to a string
 * @n: The integer to convert
 *
 * Return: A pointer to the resulting string
 */
char *_itoa(int n)
{
	char *str;
	int i = 0, j = 0, neg = 0;

	str = malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';
	i--;
	while (j < i)
	{
		char tmp = str[j];

		str[j++] = str[i];
		str[i--] = tmp;
	}
	return (str);
}
