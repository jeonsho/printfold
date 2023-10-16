#include "main.h"

/**
 *print_binary - Prints an unsigned integer in binary
 *@argsList: va_list containing the unsigned integer to print
 *Return: Number of characters printed.
 */
int print_binary(va_list argsList)
{
	int num;
	int count;
        int binary[32];
        int i;
        int size;
	if (argsList == NULL)
	{
		return (0);
	}
	count = 0;
	num = va_arg(argsList, int);
	 if (num < 0)
        	return (-1);
	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	size = 0;
	while (num > 0)
	{
		binary[size++] = num % 2;
		num /= 2;
	}

	for (i = size - 1; i >= 0; i--)
	{
		putchar(binary[i] + '0');
		count++;
	}

	return (count);
}
