/**
  * get_endianness - Entry Point
  *
  * Description: This function finds the endianness of any system
  *
  * Return: 1 (Little-endian), 0 (Big-endian)
  */

int get_endianness(void)
{
	int number = 5;
	int *intptr = &number;

	int val_in_LSB = *((char *)intptr);

	if (val_in_LSB == 5)
		return (1);
	else
		return (0);
}
