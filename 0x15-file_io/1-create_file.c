#include "holberton.h"
/**
* create_file - create a file
* @filename: name of the file to create
* @text_content: string to write into the file
* Return: 1 (Success) -1 (Failed)
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length, file_d;

	if (!filename)
	return (-1);

	file_descriptor = creat(filename, 0600);

	if (file_descriptor == -1)
		return (-1);

	file_descriptor = open(filename, O_WRONLY);

	if (file_descriptor == -1)
		return (-1);

	length = _lenstring(text_content);

	file_d = write(file_descriptor, text_content, length);

	if (file_d == -1)
		return (-1);

	close(file_descriptor);
	return (1);

}
/**
* _lenstring - find string length
* @str: pointer to string
* Return: number of characteres
*/
int _lenstring(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
