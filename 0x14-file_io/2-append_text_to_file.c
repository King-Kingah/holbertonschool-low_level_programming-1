#include "holberton.h"
/**
 *append_text_to_file - a function that appends a text at the end of a file
 *@filename: where filename is the name of the file
 *@text_content: text_content is NULL terminated string to add at end of file
 *Return: 1 on success and -1 on failure
 *Do not create the file if it does not exist
 *If filename is NULL return -1
 *If text_content is NULL, do not add anything to the file.
 *Return 1 if the file exists and -1 if the file does not exist or if you do
 *not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_a;
	int file_o;
	int i;

/* check errors edge cases */
	if (filename == NULL)
		return (-1);
/* read */
	file_a = open(filename, O_WRONLY | O_APPEND);
	if (file_a == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
/* set i as length of text_content */
	for (i = 0; text_content[i]; i++)
		;
/* write */
	file_o = write(file_a, text_content, i);
	close(file_a);
	if (file_o == -1)
	{
		return (-1);
	}
	return (1);
}
