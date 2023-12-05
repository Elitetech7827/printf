/****** PRINTS u *********/

#include "main.h"

/**
 * print_unsigned_int - Prints an unsigned integer to stdout.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */

int print_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int digits[10];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		digits[i++] = num % 10;
		num /= 10;
	}

	while (--i >= 0)
	{
		_putchar(digits[i] + '0');
		count++;
	}

	return (count);
}

/******* PRINT o ********/
#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int octal[32];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		octal[i] = num % 8;
		num /= 8;
		i++;
	}

	while (--i >= 0)
	{
		_putchar(octal[i] + '0');
		count++;
	}

	return (count);
}

/******* PRINT x or X *******/
#include "main.h"

/**
 * print_hexadecimal_recursive - Prints an unsigned integer
 *				in hexadecimal format recursively.
 * @num: The unsigned integer to be printed.
 * @uppercase: Whether to print the hexadecimal in uppercase or not.
 *
 * Return: The number of characters printed.
 */
int print_hexadecimal_recursive(unsigned int num, int uppercase)
{
	int count = 0;
	int remainder = num % 16;

	if (num / 16)
		count += print_hexadecimal_recursive(num / 16, uppercase);

	if (remainder < 10)
		count += _putchar(remainder + '0');
	else
	{
		char base = (uppercase) ? 'A' : 'a';
			count += _putchar(remainder - 10 + base);
	}

	return (count);
}



/**
 * print_hexadecimal_uppercase - Prints an unsigned integer in uppercase
 * hexadecimal format.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */
int print_hexadecimal_uppercase(va_list args)
{
	return (print_hexadecimal(args, 1));
}



/**
 * print_hexadecimal - Prints an unsigned integer in hexadecimal format.
 * @args: Arguments list.
 * @uppercase: Whether to print the hexadecimal in uppercase or not.
 *
 * Return: The number of characters printed.
 */

int print_hexadecimal(va_list args, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	count = print_hexadecimal_recursive(num, uppercase);

	return (count);
}
