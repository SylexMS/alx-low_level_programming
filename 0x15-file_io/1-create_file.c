#include "main.h"

/**
 * _strlen - returns the lenght of a str
 * @c: str whose length to check
 * Return: int length of str
*/

int _strlen(char *c)
{
	int i = 0;

	if (!c)
		return (0);

	while (*c++)
		i++;
	return (i);
}

/**
 * create_file - creats a file
 * @filename: name of file
 * @text_content: text to write
 * Return: 1 on success 0 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename. 0_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
