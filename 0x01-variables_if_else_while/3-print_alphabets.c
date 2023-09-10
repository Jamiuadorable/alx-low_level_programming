#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char capitalLetter = 'A';

	/*Loop through lowercase alphabets*/
	while (letter <= 'z')
	{
		putchar (letter);
		letter++;
	}

	while (capitalLetter <= 'Z')
	{
		putchar (capitalLetter);
		capitalLetter++;
	}
	putchar ('\n'); /* Print a newline character at the end*/
	return (0);
}
