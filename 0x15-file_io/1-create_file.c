#include "main.h"
/**
 * create_file - creates a function that creates a file 
 * @filename: The name of the file to be created
 * @text_content: a NUll terminated string to write to the file
 * Return: 1 if successfull otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, a = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fild < 0)
		return (-1);

	while (text_content[i])
		i++;
	a = write(fild, text_content, i);
	if (a < 0)
		return (-1);

	close(fild);
	return (1);
}

