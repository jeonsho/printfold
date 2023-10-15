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
	int count;
	
	if (format == NULL)
		return (-1);
	va_start(argsList, format);
	count = 0;
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
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
	format++;
	}
	va_end(argsList);
	return (count);
}
