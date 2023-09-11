#include <stdio.h>
/**
 * main - Program to print lower case alphabet in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	/*Loop through lowercase alphabets*/
	while (letter >= 'a')
	{
		putchar (letter);
		letter--;
	}
	putchar ('\n'); /* Print a newline character at the end*/
	return (0);
}
