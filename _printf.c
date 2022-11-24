#include <stdarg.h>

/**
 * _printf - prints arguments in a specified order
 * @format: string to print
 * @...: variadic parameters
 * Return: number of char
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;

	if (format == NULL)
		return (-1);

	 while (format[i])
	{
		if (format[i] != '%')
		{
		value = write(1, &format[i], 1);
		count = count + value;
		i++;
		}
		if (format[i] == '%')
		{
			printf("Have hit a %\n");
		}
	}

	return (count);
}
