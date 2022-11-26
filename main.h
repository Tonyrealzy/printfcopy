#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int(*check_specifier(char*))(va_list);

/**
struct func - struct for specifier to print
@t: character to compare
@f: function to handle printing
*/
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif
