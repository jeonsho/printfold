#include "main.h"
/**
 *_simple_write - Writes a specified
 *@fd: The file descriptor
 *@str: The string to be written
 *@len: The number
 *Return: On success
 */
int _simple_write(int fd, const char *str, size_t len)
{
	size_t j;

	for (j = 0; j < len; j++)
	{
		if (_putchar(str[j]) == -1)
		{
			return (-1);
		}
	}

	return (len);
}

/**
 *itoa - Converts an integer to a string
 *@num: The integer
 *Return: A string
 */
char *itoa(int num)
{
	int i = 0;
	int isNegative = 0;
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	int tem = num;

	while (tem != 0)
	{
		tem /= 10;
		i++;
	}

	int size = i + isNegative + 1;
	char *str = (char *) malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}

	i = size - 2;
	do {
		str[i--] = num % 10 + '0';
		num /= 10;
	} while (num != 0);
	if (isNegative)
	{
		str[0] = '-';
	}

	str[size - 1] = '\0';
	return (str);
}

/**
 *print_int - Prints
 *@argsList: The va_list
 *Return: The number of characters printed
 */
int print_int(va_list argsList)
{
	int number = va_arg(argsList, int);
	int count = 0;
	char *str = itoa(number);

	if (str != NULL)
	{
		count += _simple_write(1, str, strlen(str));
		free(str);
	}

	return (count);
}
