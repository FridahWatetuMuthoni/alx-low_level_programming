#include "main.h"

/**
 * append_text_to_file - the function appends text at the end of a file.
 * @filename: the pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: returns -1 if the function fails or filename is NULL or
 * if the file does not exist the user lacks write permissions else returns 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
