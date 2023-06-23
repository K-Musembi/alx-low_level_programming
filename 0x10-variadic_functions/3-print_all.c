#include <stdio.h>
#include <stdarg.h>
/**
* print_all - print everything
* @format: input
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	char valc, value;
	int vali, ch;
	char *vals;
	const char *ptr = format;
	double valf = 0.0;
	va_list num;

	va_start(num, format);
	while ((value = *ptr++) != '\0')
	{
		switch (value)
		{
			case 'c':
				ch = va_arg(num, int);
				valc = (char)ch;
				printf("%c, ", valc);
				break;
			case 'i':
				vali = va_arg(num, int);
				printf("%d, ", vali);
				break;
			case 'f':
				valf = va_arg(num, double);
				printf("%f, ", valf);
				break;
			case 's':
				vals = va_arg(num, char*);
				if (vals == NULL)
					printf("nil");
				printf("%s, ", vals);
				break;
			default:
				break;
		}
	}
	va_end(num);
	printf("\n");
}
