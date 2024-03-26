#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, m = 0;

	while (m < 99)
	{
		if (n == 99)
		{
			++m;
			n = m + 1;
		}
		putchar(48 + (m / 10));
		putchar(48 + (m % 10));
		putchar(' ');
		putchar(48 + (n / 10));
		putchar(48 + (n % 10));
		if (m != 98 && n != 99)
		{
			putchar(',');
			putchar(' ');
		}
		else
			break;
		++n;
	}
	putchar('\n');
	return (0);
}
