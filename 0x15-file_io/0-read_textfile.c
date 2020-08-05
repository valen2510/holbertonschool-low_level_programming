#include "holberton.h"
/**
* read_textfile - read a textfile and print it to the standard output
* @filename: name of the file to read and print
* @letters: number of letters it should read and print
* Return:  n_letters (number of letters read and printed) 0 (Failed)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t n_letters;

	if (!filename && !letters)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	n_letters = read(file_descriptor, buffer, letters);

	if (n_letters == -1)
	{
		free(buffer);
		return (0);
	}

	n_letters = write(STDOUT_FILENO, buffer, n_letters);

	free(buffer);
	close(file_descriptor);

	return (n_letters);
}
