#include "main.h"

/**
print_dec - prints a given integer to base 10
@args: variadic parameter

@Return: number of characters
*/

int print_dec(va_list args)
{
	int i;
	int my_arr[10];
	int numb;
	int count;
	char x[1];

	numb = va_arg(args, int);

	while (numb != 0)
	{
		my_arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		else
			i++;
	}

	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_arr[i]);
		count += write(1, x, 1);
	}

	return (count);
}
