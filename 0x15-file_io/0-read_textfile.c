#include "main.h"

/**
 * read_textfile - prints a file to the standard output
 * @filename: is the name of the file to be openned
 * @letters: is the length of the string that is printed
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileD;
	ssize_t lenR, lenW;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) + letters);
	if (buffer == NULL)
	{
		close(fileD);
		return (0);
	}
	lenR = read(fileD, buffer, letters);
	close(fileD);
	if (lenR == -1)
	{
		free(buffer);
		return (0);
	}
	lenW = write(STDOUT_FILENO, buffer, lenR);
	free(buffer);
	if (lenR != lenW)
	{
		return (0);
	}
	return (lenW);
}
