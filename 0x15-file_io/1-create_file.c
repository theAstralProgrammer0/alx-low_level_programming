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
	mode_t prevUmask = umask(0);

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1) /**file does not exist*/
	{
		fileDescriptor =
			open(filename,O_CREAT|O_WRONLY|0400|0200|O_TRUNC);
		if (fileDescriptor == -1) return (-1);
	}
	else
	{
		fileDescriptor = open(filename,O_WRONLY|O_TRUNC);
		if (fileDescriptor == -1) return (-1);
		if (bytesWritten == -1) return (-1);	
	}

	if (text_content != NULL)
	{
		bytesWritten = write(fileDescriptor, text_content,
				strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			umask(prevUmask);
			return (-1);
		}
	}
	else
	{
		bytesWritten = write(fileDescriptor, "", 0);
		if (bytesWritten == -1) return (-1);
	}
	close(fileDescriptor);
	umask(prevUmask);
	return (1);
}
