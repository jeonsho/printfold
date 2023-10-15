#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_string - Print a string.
 *@argsList: The string to be printed.
 *Return: The number of characters printed.
 */
int print_string(va_list argsList)
{
	char *str;

	str = va_arg(argsList, char *);
	int count;

	count = 0;
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
