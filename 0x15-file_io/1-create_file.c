#include "main.h"

/**
 * create_file - creates of a file.
 * @filename: filename
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int mnm;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0500);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	mnm = write(fd, text_content, nletters);

	if (mnm == -1)
		return (-1);

	close(fd);

	return (1);
}
