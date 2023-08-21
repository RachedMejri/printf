#include "main.h"
/**
 * reverse - reverses a string
 * @buffer: the character buffer containing the string to reverse
 * @length: the length of the string in the buffer
 */
void reverse(char *buffer, int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = *(buffer + start);
		*(buffer + start) = *(buffer + end);
		*(buffer + end) = (temp);
		start++;
		end--;
	}
}
