#include "main.h"
/**
 *print_string - Print a string.
 *@argsList: The string to be printed.
 *Return: The number of characters printed.
 */
int print_string(va_list argsList)
{
	char *str;
	int count;

	str = va_arg(argsList, char *);
	count = 0;
	while (*str != NULL)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
