/********* PRINTS INTEGERS ********/

#include "main.h"

/**
 * print_integer - Prints an integer to stdout
 * @args: Arguments list
 *
 * Return: The number of characters printed
 */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += print_unsigned(num);

	return (count);
}

/******** PRINT UNSIGNED INT ********/

#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer to stdout.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	if (num / 10)
		count += print_unsigned(num / 10);

	count += _putchar((num % 10) + '0');

	return count;
}
