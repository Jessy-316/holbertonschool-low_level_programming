#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on (Success) and -1 on (Failure).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, len, wr_stat;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	wr_stat = write(append_file, text_content, len);
	close(append_file);
	return (wr_stat == -1 ? -1 : 1);
}
