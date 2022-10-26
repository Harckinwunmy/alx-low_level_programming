#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int hgt = 0
	int wid = 0

	if (size > 0)
	{

		while (a < size)
		{
			while (wid < size)
			{
				_putchar('#');
				wid++;
			}
		wid = 0;
		hgt++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

