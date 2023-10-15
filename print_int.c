#include "main.h"

/**
 *print_int - Prints an integer
 *@argsList: A va_list containing the integer to be printed
 *
 *Return: The number
 */
int print_int(va_list argsList)
{
	int num = va_arg(argsList, int);
	int count = 0;

	count += _putchar(num + '0');
	return (count);
}
