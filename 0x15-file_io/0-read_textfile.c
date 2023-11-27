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
		bytesRead = read(fileDescriptor, buffer, fileStat.st_size);
		if (bytesRead == -1)
			return (0);
		if (bytesRead == 0)
			break;
		totalBytesRead += bytesRead;
		letters -= bytesRead;
	}
	bytesWritten = write(STDOUT_FILENO, buffer, fileStat.st_size);
	if (bytesWritten == -1)
		return (0);
	close(fileDescriptor);
	return (totalBytesRead);
}




