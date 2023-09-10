#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	/*Loop through lowercase alphabets*/
	while (letter <= 'z')
	{
		putchar (letter);
		letter++;
	}
	putchar ('\n'); /* Print a newline character at the end*/
	return (0);
}
