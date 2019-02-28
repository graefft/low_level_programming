#include "holberton.h"

/**
 * wildcmp - compares two strings and checks if they are identical
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if strings are identical otherwise 0
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
