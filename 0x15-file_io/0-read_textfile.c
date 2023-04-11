#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual no. of letters read and printed,
 * or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == 0 ||
		(ssize_t) fwrite(buffer, sizeof(char), bytes_read, stdout) !=
		(ssize_t) bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_read);

}
