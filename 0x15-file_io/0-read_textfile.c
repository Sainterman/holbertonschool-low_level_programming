#include "holberton.h"
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: address of name of file
 * @letters: amount of letters to read and print
 * Return: amount of letters read and wrote in the POSIX standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, readChars, i;
	char *aux = malloc(sizeof(char) * letters);

	if (aux == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(aux);
		return(0);
	}

	readChars = read(fd, (void *)aux, letters);
	if (readChars == -1)
	{
		free(aux);
		return (0);
	}
	for (i = 0; i < readChars; i++)
	{
		count = write(STDOUT_FILENO, aux + i, 1);
		if (count == -1)
		{
			free(aux);
			return (0);
		}
	}
	return (i);
}