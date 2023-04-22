/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, num_bytes;

	if (argc != 2) /* Check for correct number of arguments */
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]); /* Convert argument to an int */

	if (num_bytes < 0) /* Check for negative number of bytes */
	{
		printf("Error\n");
		exit(2);
	}

	/* Print opcodes of main function */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *((unsigned char *)main + i));
	}
	printf("\n");

	return (0);
}
