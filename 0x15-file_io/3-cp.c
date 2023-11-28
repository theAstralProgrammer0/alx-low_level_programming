#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

/**
  * close_fd - Aux Function
  * Description: CLoses a file descriptor
  * @fd: file descriptor
  * Return: Nothing
  */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * main - Entry Point
  *
  * Description: This function mimics the cp command on shell
  *
  * @argc: Argument count
  *
  * @argv: Argument vector
  *
  * Return: Nothing
  */

int main(int argc, char *argv[])
{
	int fileDescriptor1, fileDescriptor2;
	int bytesRead = 0, bytesW = 0;
	char *ff, *ft, buffer[1024];
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = argv[1];
	ft = argv[2];
	fileDescriptor1 = open(ff, O_RDONLY);
	if (fileDescriptor1 == -1 || ff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ff);
		exit(98);
	}
	fileDescriptor2 = open(ft, O_CREAT | O_WRONLY | O_TRUNC, perms);
	if (fileDescriptor2 == -1 || ft == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", ft);
		exit(99);
	}
	while ((bytesRead = read(fileDescriptor1, buffer, sizeof(buffer))) > 0)
	{
		bytesW= write(fileDescriptor2, buffer, bytesRead);
		if (bytesW == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", ft);
			close_fd(fileDescriptor1);
			close_fd(fileDescriptor2);
			exit(99);
		}
	}
	close_fd(fileDescriptor1);
	close_fd(fileDescriptor2);
	return (0);
}
