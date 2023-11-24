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
