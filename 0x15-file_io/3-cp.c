#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 *  main - Copies the content of one file to another.
 *  @argc: The number of arguments.
 *  @argv: The array of arguments.
 *  Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (99);
	}

	while ((rd = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);

		if (wr != rd)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}

	return (0);
}

