#include "holberton.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: text to append at the end of the file
* Return: 1 (Success) -1 (Failed)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, f_d, len;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		len = _lenstring(text_content);
		f_d = write(file_descriptor, text_content, len);

		if (f_d == -1)
			return (-1);
	}

	return (1);
}
/**
* _lenstring - find length of the string
* @str: String
* Return: number of bytes
*/
int _lenstring(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
