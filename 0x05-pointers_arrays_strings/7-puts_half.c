#include "main.h"

/**
 * puts_half - prime halh of a string.
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (index(str[index++])
		len++;
	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
