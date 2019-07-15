#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - minimun number of coins to make change
 *
 * @argc: integer count arguments
 * @argv: string vector arguments
 *
 * Return: Success or Error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
				sum = sum + atoi(argv[i]);
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

}
