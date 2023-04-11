#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add to file
 * Return:1 on success and -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
	}

	close(fd);

	return (bytes_written == len ? 1 : -1);
}
