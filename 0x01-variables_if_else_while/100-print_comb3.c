#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int num_one = 0;
	int num_two = 0;
	int check = 0;

	while (num_one <= 9)
	{
		while (num_two <= 9)
		{
			if (check == 0)
			{
				putchar('0' + num_one);
				putchar('0' + num_two);

				if (num_one != 8 && num_two != 9)
				{
					putchar(',');
					putchar(' ');
				}
				check = 1;
			}
			else
			{
				check = 0;
			}
			num_two++;
		}
		num_one++;
	}
	putchar('\n');
	return (0);
}
