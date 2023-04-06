#include "main.h"		
void _puts_recursion(char *n)
{
	if (*n == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*n);
		_puts_recursion(n + 1);
	}
}
