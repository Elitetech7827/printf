#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_functions - Struct containing conversion specifiers and
 * their corresponding functions.
 * @specifier: The conversion specifier.
 * @func: The function pointer to the corresponding printing function.
 */

typedef struct print_functions
{
	char specifier;
	int (*func)(va_list);
} print_func_t;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_conversion(const char *format, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_unsigned(unsigned int num);
int print_binary(va_list args);

#endif /* MAIN_H */
