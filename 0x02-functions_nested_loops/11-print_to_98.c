#include "main.h"
#include <stdio.h>

/**
 * _islower- Entry point
 * Description: 'the program's description'
 * @c: First operand
 *
 * Return: Always 0 (Success)
 */
int getFirstDigit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}
void print_to_98(int n)
{
	while (2 > 1)
	{
		int tmp,i;

		tmp = n;
		i = 0;
		if (n < 0)
		{
			tmp = tmp * -1;
			_putchar(45);
		}
		while (tmp >= 10)
		{
			if (tmp >= 1000)
			{
				_putchar(getFirstDigit(tmp));
				tmp = tmp % 1000;
				if (tmp == 0)
				{
					tmp = 100;
					++i;
				}
			}
			else if (tmp >= 100)
			{
				if (i)
					_putchar(48);
				else
				{
					_putchar(getFirstDigit(tmp));
                        		tmp = tmp % 100;
					if (tmp == 0)
						++i;
				}
				tmp = 10;
                	}
			else
                	{
				if (i)
                	                _putchar(48);
				else
				{
                        		_putchar(getFirstDigit(tmp));
                        		tmp = tmp % 10;
				}
                	}
		_putchar(tmp + '0');
		_putchar(44);
		_putchar(32);
		if (n < 0 || n < 98)
			++n;
		else if (n == 98)
			return;
		else
			--i;
		}
	}
	_putchar('\n');
}
