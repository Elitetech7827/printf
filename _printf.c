#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	do {
		if (*format == '%')
		{
			format++;
			count += handle_conversion(format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	} while (*format);

	va_end(args);

	return (count);
}
