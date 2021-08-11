#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file
 * @letters: Number of letters
 * Return: The text readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *bffr;
	ssize_t x_byte, rtrn_write;

	bffr = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	x_byte = read(fd, bffr, letters);
	rtrn_write = write(STDOUT_FILENO, bffr, x_byte);

	if (!filename || !bffr || x_byte == -1 || fd == -1)
	{
		free(bffr);
		return (0);
	}

	close(fd);
	return (rtrn_write);
}
