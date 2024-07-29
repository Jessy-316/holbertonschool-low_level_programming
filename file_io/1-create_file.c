#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on (Success), or -1 on (Failure).
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, length, wr_count;

	if (filename == NULL)
		return (-1);
	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fildes == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fildes);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	wr_count = write(fildes, text_content, length);
	if (close(fildes) == -1)
		return (-1);
	return (wr_count == -1 ? -1 : 1);
}
