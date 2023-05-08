#include "main.h"

char *creating_buffer(char *file);
void closing_file(int fd);

/**
 * creating_buffer - the function allocates 1024 bytes for a buffer.
 * @file: the file buffer is storing chars for.
 *
 * Return: the function returns a pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closing_file - the function closes file descriptors.
 * @file_descriptor: file descriptor to be closed.
 */

void close_file(int file_descriptor)
{
	int ch;

	ch = close(file_descriptor);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - the function copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: always returns 0 on success
 */

int main(int argc, char *argv[])
{
	int from, dest, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_file = read(from, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(dest, buffer, read_file);
		if (dest == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_file = read(from, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer);
	close_file(from);
	close_file(dest);

	return (0);
}
