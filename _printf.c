#include "main.h"

/**
 *_printf - Custom printf
 *@format: Format string with optional format specifiers.
 *@...: Variable number of arguments
 *Return: The number of characters
 */
int _printf(const char *format, ...)
{
	va_list argsList;
	int count = 0;

	va_start(argsList, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(argsList);
		return (-1);
	}

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += handle_format_specifier(*format, argsList);
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(argsList);
	return (count);
}

/**
 *handle_format_specifier - Dispatches to the appropriate
 *@specifier: The format.
 *@argsList: A va_list of arguments
 *Return: The number of characters printed.
 */
int handle_format_specifier(char specifier, va_list argsList)
{
	switch (specifier)
	{
		case 's':
			return (print_string(argsList));
		case 'c':
			return (print_char(argsList));
		case '%':
			return (_putchar('%'));
		case 'd':
		case 'i':
			return (print_int(argsList));
		case 'b':
			return (print_binary(argsList));
		default:
			return (_putchar('%') + _putchar(specifier));
	}
}
