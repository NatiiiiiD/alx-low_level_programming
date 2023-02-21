#include "main.h"
/**
 * main - prints _putchar, fllowed by a new linees
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nati[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(nati[c]);
	}
	_putchar('\n');
	return (0);
}
