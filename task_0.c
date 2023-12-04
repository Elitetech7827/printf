/********* PRINT c ********/
#include "main.h"

/**
 * print_char - Prints a character.
 * @args: The va_list containing the character argument.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/******** PRINT s *******/

#include "main.h"

/**
 * print_string - Prints a string
 * @args: The va_list containing the string argument
 *
 * Return: The number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	for (; *str; str++)
	{
		_putchar(*str);
		count++;
	}

	return (count);
}

/******** PRINTS % ********/

#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @args: The va_list (Void)
 *
 * Return: The number of characters printed
 */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
