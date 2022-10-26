#include "main.h"

/**
 * print_diagonal - Draw a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int cab, bas;

	if (n > 0)
	{
		for (cab = 0; cab < n; cab++)
		{
			for (bas = 0; bas < cab; bas++)
				_putchar(' ');
			_putchar('\\');

			if (cab == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
