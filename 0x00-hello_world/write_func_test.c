#include <stdio.h>
#include <string.h>
#include <unistd.h>


/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	char *msg = "Stringology\n";

	int msg_ptr = &msg;

	write(2, msg_ptr, sizeof(msg_ptr));

//	printf("The word is: %c", msg_pointer);

	return (0);
}
