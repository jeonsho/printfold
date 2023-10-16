#include "main.h"

/**
 *absalute - calculates the absolute value.
 *@num: input.
 *Return: value.
 */
int absalute(int num)
{
	if (num < 0)
		return (-1 *num);
	else
		return (num);
}

/**
 *printdigit - counts the digits.
 *@number: input integer
 *Return: digit count
 */
int printdigit(int num)
{
	int count = 0;
	int num2 = num;

	if (num <= 0)
		count += 1;

	while (absalute(num2) != 0)
	{
		num2 = num2 / 10;
		count++;
	}

	return (count);
}

/**
 *printinteger - Prints the digits of an integer and returns the count.
 *
 *This function takes an integer as input and prints its individual digits
 *The count of digits is then returned.
 *
 *@number: The integer to be printed.
 *
 *Return: The count of digits in the integer.
 */
int printinteger(int num)
{
	unsigned int byte;
	int count;

	count = printdigit(num);
	if (num < 0)
	{
		_putchar('-');
		byte = -num;
	}
	else
		byte = num;

	if (byte >= 10)
		printinteger(byte / 10);
	_putchar(byte % 10 + '0');

	return (count);
}

/**
 *print_int - Prints a number based on the specified format.
 *
 *@format: The format specifier for printing the number.
 *@var: A `va_list` containing the number to be printed.
 *
 *Return: The number of characters printed .
 */
int print_int( va_list var)
{
	int number = va_arg(var, int);
	int dig;

	dig = printinteger(number);

	return (dig);
}
