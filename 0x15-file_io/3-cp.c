#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

/**
  * argc_check - Aux Function
  * Description: This function checks if the argument count is correct and
  * prints an error message if it is wrong
  * @argc: Argument count
  * Return: Nothing
  */

void argc_check(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
  * cant_read - Aux Function
  * Description: This function prints an error message and exits if an error
  * occurs while reading from a file
  * @file: The file
  * Return: Nothing
  */

void cant_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
  * cant_write - Aux Function
  * Description: This function prints an error message and exits if an error
  * occurs while writing to a file
  * @file: The file
  * Return: Nothing
  */

void cant_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

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
	close(fd);
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
	int FD1, FD2, bytesR, bytesW;
	char *ff, *ft, *buffer;
	struct stat fileStat;
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	argc_check(argc);
	ff = argv[1];
	ft = argv[2];
	FD1 = open(ff, O_RDONLY);
	if (FD1 == -1)
		cant_read(ff);
	fstat(FD1, &fileStat);
	buffer = (char *) malloc(fileStat.st_size);
	if (buffer == NULL)
	{
		close_fd(FD1);
		cant_read(ff);
	}
	bytesR = read(FD1, buffer, fileStat.st_size);
	if (bytesR == -1)
	{
		close_fd(FD1);
		free(buffer);
		cant_read(ff);
	}
	if (ft == NULL)
		cant_write(ft);
	FD2 = open(ft, O_CREAT | O_WRONLY | O_TRUNC, perms);
	if (FD2 == -1)
		cant_write(ft);
	bytesW = write(FD2, buffer, bytesR);
	if (bytesW == -1)
		cant_write(ft);
	free(buffer);
	close_fd(FD1);
	close_fd(FD2);
	return (0);
}
