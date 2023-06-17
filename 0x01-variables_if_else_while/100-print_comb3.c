#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c, w, nt, i;

	c = 44;
	w = 32;
	n = 48;
	nt = 49;
	while (n < 58)
	{
		for (i = nt; i < 58; i++)
		{
			putchar(n);
			putchar(i);
			if (!((n == 56) && (i == 57)))
			{
				putchar(c);
				putchar(w);
			}
		}
		nt++;
		n++;
	}
	putchar('\n');
	return (0);
}
