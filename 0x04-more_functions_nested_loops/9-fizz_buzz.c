#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100 changing multiples of 3 and 5
 *
 */
void fizz_buzz(void);

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
}
