#include "main.h"

/**
 *_strlen - Returns the length of a string.
 *@str: The string to get the length
 *Return: The length of @str.
 */

_strlen(char *str)

{
		size_t length = 0;

		while (*str++)
			length++;
		return (length);

}
