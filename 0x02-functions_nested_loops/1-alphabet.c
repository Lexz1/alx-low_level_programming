#include "main.h"
#include <stdio.h>

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
