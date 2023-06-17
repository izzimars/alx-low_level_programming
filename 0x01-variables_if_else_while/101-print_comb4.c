#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c, o, w, nt, ntc, nc, i;

	c = 44;
	w = 32;
	n = 49;
	nt = 50;
	o = 48;
	ntc = 50;
	nc = 49;
	while (o < 57)
	{
		while (n < 58)
		{
			for (i = nt; i < 58; i++)
			{
				putchar(o);
				putchar(n);
				putchar(i);
				if (!((n == 56) && (i == 57) && (o == 55)))
				{
					putchar(c);
					putchar(w);
				}
			}
			nt++;
			n++;
		}
		o++;
		nc++;
		ntc++;
		n = nc;
		nt = ntc;
		
	}
	putchar('\n');
	return (0);
}
