#include "main.h"
/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
