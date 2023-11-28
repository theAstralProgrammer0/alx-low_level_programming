#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten = 0;
	int fileDescriptor;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1) /**file does not exist*/
	{
		fileDescriptor = open(filename,O_CREAT|O_WRONLY|S_IRUSR|S_IWUSR);
		if (fileDescriptor == -1) return (-1);
		if (text_content == NULL)
		{
			bytesWritten += write(fileDescriptor, "", 1);
			if (bytesWritten == -1) return (-1);
		}
		bytesWritten += write(fileDescriptor, text_content,strlen(text_content));
		if (bytesWritten == -1) return (-1);
	}
	else
	{
		fileDescriptor = open(filename,O_WRONLY|O_TRUNC);
		if (fileDescriptor == -1) return (-1);
		if (text_content == NULL)
		{
			bytesWritten += write(fileDescriptor, "", 1);
			if (bytesWritten == -1) return (-1);
			bytesWritten += write(fileDescriptor, text_content,strlen(text_content));
			if (bytesWritten == -1) return (-1);
		}
		bytesWritten += write(fileDescriptor, text_content,strlen(text_content));
		if (bytesWritten == -1) return (-1);
	}
	close(fileDescriptor);
	return (1);
}
