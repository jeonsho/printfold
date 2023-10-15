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

	count = 0;
	str = va_arg(argsList, char *);
	if (str == NULL)
	{
		str = "(null)";
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			count++;
		}
	}
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			count++;
		}
	}

	return (count);
}
