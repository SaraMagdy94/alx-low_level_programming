#include <fcntl.h>
#include <unistd.h>

/**
 *  append_text_to_file - Appends text to the end of a file.
 *  @filename: The name of the file.
 *  @text_content: The text to append.
 *  Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r = 0, write_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[r])
			r++;

		write_len = write(fd, text_content, r);

		if (write_len != r)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

