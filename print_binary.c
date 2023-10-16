#include "main.h"
/**
 *print_binary - Prints an unsigned integer in binary
 *@argsList: va_list containing the unsigned integer to print
 *Return: Number of characters printed.
 */
int print_binary(va_list argsList)
{
	unsigned int num;
	int count;
	int binary[32];
	int i;

	if (argsList == NULL)
		return (-1);
	num = va_arg(argsList, unsigned int);
	count = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num /= 2;
	}

	for (i = 31; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		count++;
	}

	return (count);
}
