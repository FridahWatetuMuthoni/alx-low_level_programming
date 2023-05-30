#include "main.h"

/**
 * read_textfile - the fucntion is used to read text files
 * and prints them to to POSIX stdout.
 * @filename: filename is a pointer to the name of the file.
 * @letters: letters is the  number of letters the function should read
 * and print
 *
 * Return: returns 0 if the function fails or filename is NULL else returns
 * the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (open_file == -1 || read_file == -1 || write_file == -1 ||
			write_file != read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);

	return (write_file);
}
