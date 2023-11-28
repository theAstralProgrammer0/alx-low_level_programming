#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
  * append_text_to_file - Entry Point
  *
  * Description: This function appends text content into an already existing
  * file.
  *
  * @filename: File Name
  *
  * @text_content: Text to be written
  *
  * Return: Always 1 (Success), -1 (Failure)
  */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten = 0;
	int fileDescriptor;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) != -1)
	{
		fileDescriptor = open(filename, O_WRONLY | O_APPEND);
		if (fileDescriptor == -1)
			return (-1);
	}
	if (text_content != NULL)
	{
		if (access(filename, W_OK) == 0)
		{
			bytesWritten = write(fileDescriptor, text_content,
					strlen(text_content));
			if (bytesWritten == -1)
				return (-1);
		}
	}
	close(fileDescriptor);
	return (1);
}
