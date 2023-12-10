#include "shell.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 *
 * Return: The pointer to destination string.
 */
char *_strcat(char *dest, const char *src)
{
	int f = 0, r;

	while  (dest[f] != '\0')
	{
		f++;
	}

	for (r = 0; src[r] != '\0'; r++)
	{
		dest[f] = src[r];
		f++;
	}

	dest[f] = src[r];

	return (dest);
}


/**
 * _strlen - Count string length.
 * @s: Our string
 *
 * Return: The string length.
 */
int _strlen(const char *s)
{
	int len = 0, f;

	for (f = 0; s[f] != '\0'; f++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: The destination buffer
 * @src: The source to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';

	return (dest);
}

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: Pointer to duplicated string, or NULL if any error.
 */
char *_strdup(char *str)
{
	char *s;
	int f;

	if (str == NULL)
		return (NULL);
	s = (char *) malloc((_strlen(str) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (f = 0; str[f] != '\0'; f++)
		s[f] = str[f];
	s[f] = '\0';
	return (s);
}




/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if identical, or the difference between
 * the two first different characters.
 */
int _strcmp(char *s1, char *s2)
{
	int f;

	for (f = 0; s1[f] != '\0' && s2[f] != '\0'; f++)
	{
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
	}

	if (s1[f] != s2[f])
	{
		return (s1[f] - s2[f]);
	}
	return (0);
}
