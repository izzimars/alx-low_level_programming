#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c, w;

	c = 44;
	w = 32;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(c);
			putchar(w);
		}
	}
	putchar('\n');
	return (0);
}
