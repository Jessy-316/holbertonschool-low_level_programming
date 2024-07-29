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
	int fildes;
	char *temp = text_content;
	ssize_t byteswritten, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR);
	if (fildes == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*temp != '\0')
		{
			length++, temp++;
		}

	}
	if (length > 0 && text_content != NULL)
	{
		byteswritten = write(fildes, text_content, length);
		if (byteswritten != length)
		{
			close(fildes);
			return (-1);
		}
	}
	close(fildes);
	return (1);
}
