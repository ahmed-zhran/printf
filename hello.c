#include "main.h"

/**
 * _pr - printf
 * @s: var
 * Return: value
 */

int _pr(const char *s, ...)
{
	va_list args;
	int i = 0, k, len = 0;
	char *str;

	va_start(args, s);

	while (*(s + i) != '\0')
	{
		if (*(s + i + 1) != '\0' && *(s + i) == '%' && *(s + i + 1) == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
			len++;
		}
		else if (*(s + i + 1) != '\0' && *(s + i) == '%' && *(s + i + 1) == 's')
		{
			k = 0;
			str = va_arg(args, char *);

			while (*(str + k) != '\0')
			{
				_putchar(*(str + k));
				k++;
				len++;
			}
			i++;
		}
		else
		{
			_putchar(*(s + i));
			len++;
		}
		i++;
	}

	return (len);

}
