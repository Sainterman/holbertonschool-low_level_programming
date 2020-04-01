#include "holberton.h"
/**
 * create_file -  creates a file.
 * @filename: Address of name to new file
 * @text_content: content to fill the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	while (text_content[i] != '\0')
		i++;
	if (write(fd, (void *) text_content, i) == -1)
		return (-1);
	else
		return (1);
}
