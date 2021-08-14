#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, z, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	z = write(x, text_content, lenght);

	if (x == -1 || z == -1)
		return (-1);

	close(x);

	return (1);
}
