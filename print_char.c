#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_char - Print a character.
 *@argsList: The character to be printed.
 *Return: The number of characters printed (always 1).
 */
int print_char(va_list argsList)
{
	char c;

	c = va_arg(argsList, int);
	_putchar(c);
	return (1);
}
