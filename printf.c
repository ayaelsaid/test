#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - ...
 * @format: ...
 * Return: ...
*/
int _printf(const char *format, ...)
{
	va_list p;
	unsigned int b = 0, i = 0;

	va_start(p, format);
	while (format && format[i] != '\0')
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 's':
		{
		const char *str = va_arg(p, const char *);

		_puts(str);
		break;
		}
	case 'c':
		{
		int c = va_arg(p, int);

		_putchar((char)c);
		break;
		}
		case '%':
		_percent(b);
		break;
	}
	}
	}
	else
		putchar(format[i]);
	i++;
	}
	va_end(p)#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - ...
 * @format: ...
 * Return: ...
*/
int _printf(const char *format, ...)
{
        va_list p;
        unsigned int b = 0, i = 0;

        va_start(p, format);
        while (format && format[i] != '\0')
        {
        if (format[i] == '%')
        {
        i++;
        switch (format[i])
        {
        case 's':
                {
                const char *str = va_arg(p, const char *);

                _puts(str);
                break;
                }
        case 'c':
                {
                int c = va_arg(p, int);

                _putchar((char)c);
                break;
                }
                case '%':
                _percent(b);
                break;
	}
	}
	}
	_putchar('\n');
	return (0);
	}
