#include "main.h"

/**
print_str - prints a variadic string each time to stdout
@args: variadic parameter

@Return: number of characters
*/

int print_str(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	while(str)
	{
		count += write(1, &str, 1);
		i++;
	}

	return (count);
}
