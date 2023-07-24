#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: the string to check
 *
 * Return: the length of a string.
 */
void _puts(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        /* code */
        _putchar(s[i]);
        i++;
    }

    _putchar('\n');
}

