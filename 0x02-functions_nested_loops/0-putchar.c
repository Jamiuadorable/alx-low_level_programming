#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char p[] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		_putchar(p[a]);
	}
	_putchar('\n');
	return (0);
}
