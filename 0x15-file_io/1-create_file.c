#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: points to string to write to the file.
 *
 * Return: for function failures - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fnd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fnd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fnd, text_content, len);

	if (fnd == -1 || w == -1)
		return (-1);

	close(fnd);

	return (1);
}
