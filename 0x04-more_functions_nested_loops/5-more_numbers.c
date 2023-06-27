#include "main.h"

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int n,check,i;

	check = 0;
	i = 0;
	while(i < 10)
	{
		for(n = 48; n < 58; n++)
		{
			if (check == 1 && n <= 52)
				_putchar(49);
			if (check == 1 && n > 52)
			{
				_putchar('\n');
				++i;
				break;
			}
			_putchar(n);
		}
		if (n > 52 && check == 1)
			check = 0;
		else
			check = 1;
	}
	return;
}
