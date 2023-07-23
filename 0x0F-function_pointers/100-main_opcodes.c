#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 * Description: 'the program's description'
 * @argc: First operand
 * @argv: Second operand
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	void *main_ptr;
	unsigned char *opcode_ptr;

	main_ptr = &main;
	opcode_ptr = (unsigned char *)main_ptr;
	for (i = 0; i < (atoi(argv[1])); i++)
		printf("%02x ", opcode_ptr[i]);
	printf("\n");
	return (0);
}
