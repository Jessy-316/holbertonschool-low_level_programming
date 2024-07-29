#include "main.h"
/**
 * read_textfile - Reads text file.
 * @filename: Name of file.
 * @letters: Letters printed.
 *
 * Return: Number of letters read and printed, or 0 if an eror occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesread = 0, byteswritten;
	char buffer;
	int fildes;

	if (filename == NULL)
	{
		return (0);
	}
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		return (0);
	}
	while ((size_t)bytesread < letters && read(fildes, &buffer, 1) == 1)
	{
		byteswritten = write(STDOUT_FILENO, &buffer, 1);
		if (byteswritten != 1)
		{
			close(fildes);
			return (0);
		}
		bytesread++;
	}
	close(fildes);
	return (bytesread);
}
