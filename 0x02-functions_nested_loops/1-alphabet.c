
/**
 * 1-alphabet - prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		_putchar(counter);
		counter++;
	}
	_putchar("\n");
}
