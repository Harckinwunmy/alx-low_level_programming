#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *	separated by a comma followed by a space.
 *Always: return 0
 */

int main(void)
{
	int b;

	unsigned long fib1 = 0, fib2 = 1, sum;

	for (b = 0; b < 50; b++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		printf(' ');

		fib1 = fib2;
		fib2 = sum;

		if (b == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
