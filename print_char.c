#include "main.h"
/**
 *print_char - Print a character.
 *@argsList: The character to be printed.
 *Return: The number of characters printed (always 1).
 */
int print_char(va_list argsList)
{
	char c;
	int count;

	count = 0;
	c = va_arg(argsList, int);
	if (c == '\0')
	{
	}
	else
	{
		count += _putchar(c);
	}
	return (count);
}
