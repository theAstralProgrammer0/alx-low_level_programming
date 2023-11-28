#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
  * create_file - Entry Point
  *
  * Description: This function creates a file if it doesn't exist and writes
  * text content into it. It truncates the file if it exists and writes text
  * content into it.
  *
  * @filename: File Name
  *
  * @text_content: Text to be written
  *
  * Return: Always 1 (Success), -1 (Failure)
  */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten = 0;
	int fileDescriptor;
	mode_t perms = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == -1) /**file does not exist*/
	{
		fileDescriptor = open(filename, O_CREAT | O_WRONLY, perms);
		if (fileDescriptor == -1)
			return (-1);
	}
	else
	{
		fileDescriptor = open(filename, O_WRONLY | O_TRUNC);
		if (fileDescriptor == -1)
			return (-1);
		if (bytesWritten == -1)
			return (-1);
	}
	if (text_content != NULL)
	{
		bytesWritten = write(fileDescriptor, text_content,
				strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}
	else
	{
		bytesWritten = write(fileDescriptor, "", 0);
		if (bytesWritten == -1)
			return (-1);
	}
	close(fileDescriptor);
	return (1);
}
