#include "holberton.h"
/**
 * main - call functio copy_from_to to copy contents from a file
 * @from: name of file to coppy from
 * @to: name of file to copy into
 * Return: 1
 */

void copy_from_to(char *from, char *to);

int main(int argc, char *argv[])
{
	char *file_from, *file_to;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	copy_from_to(file_from, file_to);
	return (1);

}
/**
 * copy_from_to - copy using buffers of 1024 bytes
 * @from: name of file to compy from
 * @to: name of file to copy into
 * Return: void
 */
void copy_from_to(char *from, char *to)
{
	char buffer[1024];
	int bufferSize, fdFile_from, fdFile_to;

	fdFile_from = open(from, O_RDONLY);
	if (fdFile_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	fdFile_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdFile_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while ((bufferSize = read(fdFile_from, buffer, bufferSize)) > 0)
	{
		if (write(fdFile_to, buffer, bufferSize) != bufferSize)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (bufferSize == -1)
	{
		if (close(fdFile_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFile_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
}
