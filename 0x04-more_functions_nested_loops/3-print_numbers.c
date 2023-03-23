#include "main.h"
#include <stdio.h>
/**
   *print_numbers - prints the numbers, from 0 to 9
   *0 to 9
   *Return: 0 success
   */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
