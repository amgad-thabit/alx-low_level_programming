#include "main.h"

/**
 * read_textfile - reads text from a file prit
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, &buf[0], bytes);
	close(file);
	return (bytes);
}
