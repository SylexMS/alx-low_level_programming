#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name iof file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int frd;
	ssize_t bts;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	frd = open(filename, O_RDONLY);
	if (frd == -1)
		return (0);
	bts = read(fd, &buf[0], letters);
	bts = write(STDOUT_FILENO, &buf[0], bts);
	close(frd);
	return (bts);
}
