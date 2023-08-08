#include "main.h"

/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t br, bw;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buff, letters);

	if (br == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	bw = write(STDOUT_FILENO, buff, bytes);

	if (bw == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	return (br);
}
