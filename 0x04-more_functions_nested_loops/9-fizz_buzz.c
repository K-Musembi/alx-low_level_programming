#include <stdio.h>

/**
 * main - prints 1 to 100. Fizz, Buzz, FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}

		num++;
	}

	printf("\n");

	return (0);
}
