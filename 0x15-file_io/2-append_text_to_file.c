#include "holberton.h"

/**
 * append_text_to_file - creates a file with a descripted content.
 * @filename: the file name
 * @text_content: content to put in the file
 * Return: 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rtno, rtnw, counter;

	if (!filename || !text_content)
	{
		return (-1);
	}
	rtno = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (rtno < 0)
	{
		return (-1);
	}
	for (counter = 0; text_content[counter]; counter++)
	{}
	rtnw = write(rtno, text_content, counter);
	if (rtnw < 0)
	{
		return (-1);
	}
	close(rtno);
	return (1);
}
