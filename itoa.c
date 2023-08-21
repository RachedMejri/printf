#include "main.h"

/**
 * int_to_str - turn a int chain into chain
 *
 * @num: the number
 * @buffer:al buffer
*/

void int_to_str(int num, char *buffer)
{
	int i = 0;
	int is_negative = 0;

	if (num == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return;
	}

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int rem = num % 10;

		buffer[i++] = rem + '0';
		num = num / 10;
	}

	if (is_negative)
		buffer[i++] = '-';

	buffer[i] = '\0';

	reverse(buffer, i);
}
