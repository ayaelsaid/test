#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putchar - ...
 * @c: ...
 * description: ...
 * Return: ...
*/

void _putchar(char c)
{
     write(1, &c, 1);
}
/**
 * _puts: ...
 * @str: ...
 * description: ...
 * Return: ...
*/
void _puts(const char *str)
{
    int i;

	if (str)
    i = 0;
	while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}
/**
 * _percent: ...
 * @ch: ...
 * description: ...
 * Return: ...
*/
void _percent(int ch)
{
    ch = '%';
    _putchar((char)ch);
}
