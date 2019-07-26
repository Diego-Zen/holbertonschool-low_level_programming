#include "3-calc.h"
/**
 * main - entry point
 *
 * @argc: integer count arguments
 * @argv: string vector arguments
 *
 * Return: Success or Error
 */
int main(int argc, char *argv[])
{
	if (argc > 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[4]);
		int (*ptr)(int a, int b);

		ptr = get_op_func(argv[2]);

		if (ptr != NULL)
		{
			printf("%d\n", ptr(a, b));
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}
