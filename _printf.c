#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

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
		continue;
		}

		if (format[i] == '%')
		{
			printf("Have hit the percent sign\n");
			//expressions;
		}
	}

	return (count);
}
