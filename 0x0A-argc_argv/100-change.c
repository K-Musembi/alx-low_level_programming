#include <stdio.h>
#include <stdlib.h>

/**
* main - prints change
* @argc: first input
* @argv: second input
*
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int value1 = 1, value2 = 1, value3;
	int rem1, rem2;
	int cents, balance;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents <= 0)
		printf("%d\n", 0);
	else
	{
		value1 *= (cents / 25);
		rem1 = cents % 25;
		value2 *= (rem1 / 10);
		rem2 = rem1 % 10;
		if (rem2 == 0)
			value3 = 0;
		else if (rem2 == 1 || rem2 == 2 || rem2 == 5)
			value3 = 1;
		else if (rem2 == 3 || rem2 == 4)
			value3 = 2;
		else if (rem2 == 6 || rem2 == 7)
			value3 = 2;
		else
			value3 = 3;
		balance = value1 + value2 + value3;

		printf("%d\n", balance);
	}
	return (0);
}
