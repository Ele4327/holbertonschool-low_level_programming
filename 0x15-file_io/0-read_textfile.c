#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *bffr;
    ssize_t x_byte, return_write;

    bffr = malloc(letters * sizeof(char));
    fd = open(filename, O_RDONLY);
    x_byte = read(fd, bffr, letters);
    return_write = write(STDOUT_FILENO, bffr, x_byte);

    if (filename == NULL || !filename || bffr == NULL || !bffr || x_byte == -1 || fd == -1)
    {
        return (0);
    }

    close(fd);
    return (return_write);
}