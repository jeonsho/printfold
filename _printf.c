#include "main.h"
/**
 *_printf - Print formatted output to the standard output.
 *@format: A format string that specifies how to format and print the data.
 *- %c: Print a single character.
 *- %s: Print a null-terminated string.
 *- %%: Print a percent sign '%'.
 *Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list argsList;
	int count = 0;

	va_start(argsList, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 's':
					count += print_string(argsList);
					break;
				case 'c':
					count += print_char(argsList);
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					count += print_int(argsList);
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
			count += _putchar(*format);
	format++;
	}
	va_end(argsList);
	return (count);
}
