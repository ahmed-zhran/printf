#include "main.h"

/**
 * _pr - printf
 * @s: var
 * Return: value
 */

int _pr(char *s, ...)
{
	va_list args;
	int i = 0, k;

	va_start(args, s);
	
	while (*(s + i) != '\0')
	{
		if ( *(s + i) == '%' && *(s + i + 1) == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (*(s + i + 1) != '\0' && *(s + i) == '%' && *(s + i + 1)== 's')
		{
			k = 0;
			const char * str = va_arg(args, const char *);

			while (*(str + k) != '\0')
			{
				_putchar(*(str + k));
				k++;
			}
			i++;
		}
		else
		{
			_putchar(*(s + i));
		}
		i++;
	}

}
