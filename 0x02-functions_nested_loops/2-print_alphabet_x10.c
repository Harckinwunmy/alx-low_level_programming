#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int str;
	char dean;

	for (str = 0; str <= 9; str++)
	{
		for (dean = 'a', dean <= 'z'; dean++)
			_putchar(dean);
		_putchar('\n');
	}
}
