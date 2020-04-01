#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to
 * @filename: address of name of file
 * @letters: amount of letters to read and print
 * Return: amount of letters read and wrote in the POSIX standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, readChars, i;
	char *aux = malloc(sizeof(char) * (letters + 1));

	if (aux == NULL || filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		free(aux);
		return (0);
	}
	readChars = read(fd, (void *)aux, letters);
	if (readChars == -1)
	{
		close(fd);
		free(aux);
		return (0);
	}
	for (i = 0; i < readChars; i++)
	{
		count = write(STDOUT_FILENO, aux + i, 1);
		if (count == -1)
		{
			close(fd);
			free(aux);
			return (0);
		}
	}
	close(fd);
	return (i);
}
