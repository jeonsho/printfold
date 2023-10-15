#include "main.h"
/**
 *print_char - Print a character.
 *@argsList: The character to be printed.
 *Return: The number of characters printed (always 1).
 */
int print_char(va_list argsList)
{
	char c = va_arg(argsList, int);
	int count;

	count = 0;
	count += _putchar(c);
	return (count);
}
