#include "main.h"

/**
check_specifier - checks character if a valid specifier
and assigns an appropriate function for its printing
@format: the specifier

Return: pointer to function or NULL
*/

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {{"c", print_char}, {"s", print_str},
	{"%", print_pcent}, {"i", print_int}, {"d", print_dec}, {NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
