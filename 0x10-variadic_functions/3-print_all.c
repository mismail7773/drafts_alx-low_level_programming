#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - draft
 * @format: draft
 */
void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0, j, k = 0;
	char *s;
	char *a = "ifcs";

	va_start(p, format);
	while (*(format + i))
	{
		j = 0;
		while (*(a + j))
		{
			if (k && a[j] == format[i])
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(p, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(p, double)), k = 1;
				break;
			case 'c':
				printf("%c", va_arg(p, int)), k = 1;
				break;
			case 's':
				s = va_arg(p, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s), k = 1;
				break;
		} i++;
	}
		printf("\n"), va_end(p);
}
