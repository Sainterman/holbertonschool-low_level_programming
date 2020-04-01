#include "holberton.h"
/**
 * append_text_to_file - append text to enf od file
 * @filename: address of name of existing file
 * @text_content: content to add at end of file
 * Return: 1 on success -1 ion failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	while (text_content[i] != '\0')
		i++;
	if (write(fd, (void *) text_content, i) == -1)
		return (-1);
	else
		return (1);
}