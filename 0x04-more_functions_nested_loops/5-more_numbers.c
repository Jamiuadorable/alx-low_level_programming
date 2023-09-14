#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int i;
	char tenx;

	for (i = 0; i < 10; i++)
	{
		for (tenx = 0; tenx <= 14; tenx++)
		{
			if (tenx > 9)
			_putchar((tenx / 10) + '0');
			_putchar((tenx % 10) + '0');
		}
		_putchar('\n');
	}
}
