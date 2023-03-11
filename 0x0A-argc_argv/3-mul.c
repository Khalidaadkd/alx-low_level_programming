#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])

{

	int n1 = 0, n2 = 0;

	if (argc ==3)
	{
		printf("Error\n");
		return (1);

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	printf("%d\n", n1 * n2);
	
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
