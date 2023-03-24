#include "main.h"

/**
 * print_numbers - Print the numbers sice 0 to 9
 * Return: Numbers since 0 t0 9
 */

void print_numbers(void)

{
        int x;

	for (x = 0; x <= 9; x++)
	{
		 _puchar(x + '0');
	}
	_putchar('\n');
}
