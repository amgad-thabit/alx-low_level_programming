#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int f = 0;

	if (!s)
		return (0);
	while (*s++)
		f++;
	return (f);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @textcontent: text to write
 *
 * Return: 1 on success 0 of failure
 */
int create_file(const char *filename, char *text_content)
{
	int name;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	name = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (name == -1)
		return (-1);
	if (len)
		bytes = write(name, text_content, len);
	close(name);
	return (bytes == len ? 1 : -1);
}
