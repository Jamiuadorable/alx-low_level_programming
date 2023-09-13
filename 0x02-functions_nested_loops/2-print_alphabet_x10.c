#include "main.h"

/**
 * print_alphabet_x10 - program to print alphabelt in lowercase
 *
 *Return: void.
 */

void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i <= 9; i++)
	{
	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}
}
