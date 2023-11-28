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
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/**
  * read_textfile - Entry Point
  *
  * Description: This function reads the contents of a text file and writes the
  * read content to standard output
  *
  * @filename: Name of the text file
  *
  * @letters: Numner of letters to be printed
  *
  * Return: (totalBytesRead) or (bytesWritten) ssize_t
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer;
	struct stat fileStat;
	ssize_t bytesWritten = 0, bytesRead = 0, totalBytesRead = 0;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	if (fstat(fileDescriptor, &fileStat) == -1)
	{
		printf("Error getting stat");
		return (0);
	}

	buffer = (char *) malloc(fileStat.st_size);

	while (letters)
	{
		bytesRead = read(fileDescriptor, buffer, letters);
		if (bytesRead == -1)
			return (0);
		if (bytesRead == 0)
			break;
		totalBytesRead += bytesRead;
		letters -= bytesRead;
	}
	bytesWritten = write(STDOUT_FILENO, buffer, totalBytesRead);
	if (bytesWritten == -1)
		return (0);
	free(buffer);
	close(fileDescriptor);
	return (bytesWritten);
}




