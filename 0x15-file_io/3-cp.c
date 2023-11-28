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
	close(fd);
}

void cant_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
	
void cant_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
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
	int FD1, FD2;
	ssize_t bytesR, bytesW;
	char *ff, *ft, *buffer;
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = argv[1];
	ft = argv[2];
	if (access(ff, F_OK) == -1 || ff == NULL)
		cant_read(ff);
	else
	{
		struct stat fileStat;
		FD1 = open(ff, O_RDONLY);
		if (FD1 == -1)
			cant_read(ff);
		if (fstat(FD1, &fileStat) == -1)
			cant_read(ff);
		buffer = (char *) malloc(fileStat.st_size);
		if (buffer == NULL)
			cant_read(ff);
		bytesR = read(FD1, buffer, fileStat.st_size);
		if (bytesR == -1)
			cant_read(ff);
	}
	if (ft == NULL)
		cant_write(ft);
	if (access(ft, F_OK) == -1)
	{
		FD2 = open(ft, O_CREAT | O_WRONLY, perms);
		if (FD2 == -1)
			cant_write(ft);
		bytesW = write(FD2, buffer, bytesR);
		if (bytesW == -1)
			cant_write(ft);
	}
	else
	{
		if (access(ft, W_OK) == -1)
			cant_write(ft);
		FD2 = open(ft, O_WRONLY | O_TRUNC);
		if (FD2 == -1)
			cant_write(ft);
		bytesW = write(FD2, buffer, bytesR);
		if (bytesW == -1)
			cant_write(ft);
	}
	close_fd(FD1);
	close_fd(FD2);
	return (bytesR);
}
